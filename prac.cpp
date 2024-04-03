// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double r, pi = 3.141592653589793;
//     cin >> r;
//     double area = pi * (r * r);
//     cout << fixed << setprecision(4) << area;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int tmp = 0;
//     for(int i=0;i<n;i++){
//         if(tmp < arr[i]){
//             tmp = arr[i];
//         }
//     }
//     cout << tmp;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x,t,s;
//     cin >> x >> t >>s;
//     if((t*s) >= x){
//         cout << "YES" <<endl;
//     } else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a1,a2,a3,a4,b1,b2,b3,b4;
//     cin >> a1>>a2>>a3>>a4;
//     cin >> b1>>b2>>b3>>b4;
//     int alice = a1 + a2 + a3 + a4;
//     int bob = b1 + b2 + b3 + b4;
//     if(alice >= bob){
//         cout << "Alice"<<endl;
//     } else {
//         cout << "Bob"<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int currentVowel = 0;
//     int maxVowel = 0;
//     for(char c : s){
//         // cout << c << endl;
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//             currentVowel++;
//             maxVowel = max(maxVowel, currentVowel);
//         } else {
//             currentVowel = 0;
//         }
//     }
//     cout << maxVowel << endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     if(x < 111 || x == 111){
//         cout << 111 <<endl;
//     } else if(x < 222 || x == 222){
//         cout << 222 << endl;
//     } else if(x < 333 || x == 333) {
//         cout << 333 << endl;
//     } else if (x < 444 || x == 444){
//         cout << 444 << endl;
//     } else if(x < 555 || x == 555){
//         cout << 555 << endl;
//     } else if(x < 666 || x == 666){
//         cout << 666 << endl;
//     } else if(x < 777 || x == 777){
//         cout << 777 << endl;
//     } else if(x < 888 || x == 888){
//         cout << 888 << endl;
//     } else if(x < 999 || x == 999){
//         cout << 999 << endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int total = 0;
//     for(int i=0; i<n; i++){
//         int a,b,c,d,e,f;
//         cin >>a>>b>>c>>d>>e>>f;
//         int run = a+b+c+d+e+f;
//         arr[i] = run;
//     }
//     for(int i=0;i<n;i++){
//         total = arr[i] + total;
//         cout << arr[i] << endl;
//     }
//     cout << "The Total Run is: "<<total<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// #include<numeric>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     long long int arr[n];
//     long long int maxNum = 0;
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++){
//         maxNum = lcm(3, arr[i]);
//         cout <<"Case "<<i+1<<" : "<<maxNum<<endl;
//     }
//     // for(int i=0; i<n; i++){
//     //     maxNum = (3 > arr[i]) ? 3 : arr[i];
//     //     while(true){
//     //         if(maxNum%3 == 0 && maxNum%arr[i] == 0){
//     //             cout <<"Case "<<i+1<<" : "<<maxNum<<endl;
//     //             break;
//     //         }
//     //         maxNum++;
//     //     }
//     // }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    cin >> a;
    float ans = (270*a) / ((2*a) + 1);
    cout << fixed << setprecision(2) << ans<<endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin >> a >> b;
//     if(a%b==0 || b%a==0){
//         cout << "Multiples";
//     } else {
//         cout << "No Multiples";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int min, max;

//     if (a > b && a > c)
//     {
//         max = a;
//     }
//     else if (b > a && b > c)
//     {
//         max = b;
//     }
//     else
//     {
//         max = c;
//     }

//     if (a < b && a < c)
//     {
//         min = a;
//     }
//     else if (b < a && b < c)
//     {
//         min = b;
//     }
//     else
//     {
//         min = c;
//     }

//     cout << min <<" "<< max;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string f1,s1,f2,s2;
//     cin >> f1 >> s1 >> f2 >> s2;
//     if(s1 == s2){
//         cout << "Are Brothers";
//     } else {
//         cout << "Not Brothers";
//     }
//     return 0;
// }