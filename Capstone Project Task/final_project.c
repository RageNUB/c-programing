#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MENU_ITEMS 100
#define INVENTORY_FILE "inventory.dat"
#define RECEIPT_FILE "receipt.txt"
#define ORDERS_FILE "orders.dat"

typedef struct
{
    int id;
    char name[50];
    float price;
    int quantity;
} MenuItem;

typedef struct
{
    int id;
    char name[50];
    float price;
    int quantity;
} OrderItem;

MenuItem menu[MAX_MENU_ITEMS];
int menuCount = 0, totalItem = 0;

typedef struct
{
    char customerName[50];
    OrderItem items[MAX_MENU_ITEMS];
    int itemCount;
    float totalPrice;
    float discountedPrice;
} Order;

void loadMenuFromFile()
{
    FILE *file = fopen(INVENTORY_FILE, "rb");
    if (file)
    {
        fread(&menuCount, sizeof(int), 1, file);
        fread(menu, sizeof(MenuItem), menuCount, file);
        fclose(file);
    }
}

void saveMenuToFile()
{
    FILE *file = fopen(INVENTORY_FILE, "wb");
    fwrite(&menuCount, sizeof(int), 1, file);
    fwrite(menu, sizeof(MenuItem), menuCount, file);
    fclose(file);
}

void saveOrderToFile(Order order)
{
    FILE *file = fopen(ORDERS_FILE, "ab");
    fwrite(&order, sizeof(Order), 1, file);
    fclose(file);
}

void viewAllOrders()
{
    FILE *file = fopen(ORDERS_FILE, "rb");
    if (!file)
    {
        printf("\nNo orders found!\n");
        return;
    }
    Order order;
    printf("\n--- All Previous Orders ---\n");
    while (fread(&order, sizeof(Order), 1, file))
    {
        printf("\nCustomer: %s\n", order.customerName);
        printf("No.| Item Name         | Quantity | Price\n");
        printf("----------------------------------------\n");
        for (int i = 0; i < order.itemCount; i++)
        {
            printf("%-2d | %-17s | %-8d | $%-5.2f\n", i + 1, order.items[i].name, order.items[i].quantity, order.items[i].quantity * order.items[i].price);
        }
        printf("----------------------------------------\n");
        printf("Total Price: %.2f | Discounted Price: %.2f\n", order.totalPrice, order.discountedPrice);
    }
    fclose(file);
}

int adminLogin()
{
    char username[20], password[20];
    printf("\n--- Admin Login ---\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, "a") == 0 && strcmp(password, "p") == 0)
    {
        printf("\nLogin Successful!\n");
        return 1;
    }
    else
    {
        printf("\nInvalid Credentials!\n");
        return 0;
    }
}

void addMenuItem()
{
    MenuItem item;
    item.id = menu[menuCount - 1].id + 1;
    printf("\nEnter Item Name: ");
    scanf(" %[^\n]", item.name);
    printf("Enter Price: ");
    scanf("%f", &item.price);
    printf("Enter Quantity (for inventory): ");
    scanf("%d", &item.quantity);

    menu[menuCount++] = item;
    saveMenuToFile();
    printf("\nItem added successfully!\n");
}

void updateMenuItem()
{
    int id, found = 0;
    printf("\nEnter Item ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < menuCount; i++)
    {
        if (menu[i].id == id)
        {
            found = 1;
            printf("Updating item '%s'...\n", menu[i].name);
            printf("Enter New Name: ");
            scanf(" %[^\n]", menu[i].name);
            printf("Enter New Price: ");
            scanf("%f", &menu[i].price);
            printf("Enter New Quantity: ");
            scanf("%d", &menu[i].quantity);

            saveMenuToFile();
            printf("\nItem updated successfully!\n");
            break;
        }
    }

    if (!found)
    {
        printf("\nItem not found!\n");
    }
}

void deleteMenuItem()
{
    int id, found = 0;
    printf("\nEnter Item ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < menuCount; i++)
    {
        if (menu[i].id == id)
        {
            found = 1;
            for (int j = i; j < menuCount - 1; j++)
            {
                menu[j] = menu[j + 1];
            }
            menuCount--;
            saveMenuToFile();
            printf("\nItem deleted successfully!\n");
            break;
        }
    }

    if (!found)
    {
        printf("\nItem not found!\n");
    }
}

void viewAdminMenu()
{
    printf("\n--- Menu (Admin View) ---\n");
    printf("ID | Name              | Price   | Stock\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < menuCount; i++)
    {
        printf("%-2d | %-17s | $%-6.2f | %-5d\n", menu[i].id, menu[i].name, menu[i].price, menu[i].quantity);
    }
}

void viewCustomerMenu()
{
    printf("\n--- Menu (Customer View) ---\n");
    printf("No. | Name              | Price\n");
    printf("-------------------------------\n");
    for (int i = 0; i < menuCount; i++)
    {
        printf("%-3d | %-17s | $%-6.2f\n", i + 1, menu[i].name, menu[i].price);
    }
}

void placeOrder()
{
    int choice, quantity, found = 0;
    float totalCost = 0;
    char isStudent;

    Order order;
    order.itemCount = 0;

    printf("\nEnter Customer Name: ");
    scanf(" %[^\n]", order.customerName);

    viewCustomerMenu();

    while (1)
    {
        printf("\nEnter Item Number to order (or 0 to finish): ");
        scanf("%d", &choice);
        if (!choice)
            break;

        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        found = 0;
        if (choice > 0 && choice <= menuCount)
        {
            int index = choice - 1;
            if (menu[index].quantity >= quantity)
            {
                found = 1;
                menu[index].quantity -= quantity;

                order.items[order.itemCount] = (OrderItem){menu[index].id, "", menu[index].price, quantity};
                strcpy(order.items[order.itemCount].name, menu[index].name);
                order.itemCount++;

                totalCost += menu[index].price * quantity;
            }
            else
            {
                printf("Not enough stock for %s!\n", menu[index].name);
            }
        }

        if (!found)
        {
            printf("Invalid choice or out of stock!\n");
        }
    }

    printf("\nAre you a student? (y/n): ");
    scanf(" %c", &isStudent);
    if (isStudent == 'y' || isStudent == 'Y')
    {
        order.discountedPrice = totalCost * 0.9;
        printf("Discount Applied: 10%%\n");
    }
    else
    {
        order.discountedPrice = totalCost;
    }
    order.totalPrice = totalCost;

    printf("\n--- Order Details ---\n");
    printf("No.| Item Name         | Quantity | Price\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < order.itemCount; i++)
    {
        printf("%-2d | %-17s | %-8d | $%-5.2f\n", i + 1, order.items[i].name, order.items[i].quantity, order.items[i].quantity * order.items[i].price);
    }
    printf("----------------------------------------\n");
    printf("Total Price: $%.2f\n", order.totalPrice);
    printf("Payable Price: $%.2f\n", order.discountedPrice);

    saveOrderToFile(order);
    saveMenuToFile();
    printf("\nOrder placed successfully!\n");
}

void adminPanel()
{
    int choice;
    if (!adminLogin())
        return;

    while (1)
    {
        printf("\n--- Admin Panel ---\n");
        printf("1. Add Menu Item\n");
        printf("2. Update Menu Item\n");
        printf("3. Delete Menu Item\n");
        printf("4. View Menu\n");
        printf("5. View All Orders\n");
        printf("6. Exit Admin Panel\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMenuItem();
            break;
        case 2:
            updateMenuItem();
            break;
        case 3:
            deleteMenuItem();
            break;
        case 4:
            viewAdminMenu();
            break;
        case 5:
            viewAllOrders();
            break;
        case 6:
            return;
        default:
            printf("\nInvalid choice!\n");
        }
    }
}

void customerPanel()
{
    int choice;
    while (1)
    {
        printf("\n--- Customer Panel ---\n");
        printf("1. View Menu\n");
        printf("2. Place Order\n");
        printf("3. Exit Customer Panel\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            viewCustomerMenu();
            break;
        case 2:
            placeOrder();
            break;
        case 3:
            return;
        default:
            printf("\nInvalid choice!\n");
        }
    }
}

int main()
{
    int role;
    loadMenuFromFile();

    printf("\n--- Welcome to Restaurant Management System ---\n");
    while (1)
    {
        printf("\nSelect Role:\n");
        printf("1. Admin\n");
        printf("2. Customer\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &role);

        switch (role)
        {
        case 1:
            adminPanel();
            break;
        case 2:
            customerPanel();
            break;
        case 3:
            printf("\nExiting... Thank you!\n");
            return 0;
        default:
            printf("\nInvalid choice!\n");
        }
    }
    return 0;
}
