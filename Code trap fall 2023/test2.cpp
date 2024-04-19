 #include<iostream>
using namespace std ;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
const int N = 300 ;
const int mod = 998244353 ;
const int m = 10000007 ;

template <typename T>
using order_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

char a[N][N] ;
int cnt = 1 ;
int n ;


void dfs1(int i , int j){
	if(a[i][j+1] =='*' && j+1 < n){
		cnt++ ;
		dfs1(i , j+1) ;
	}
	else return ;

}

void dfs2(int i , int j){
	if(a[i+1][j] =='*' && i+1 < n){
		cnt++ ;
		dfs2(i+1 , j) ;
	}
	else return ;

}

void dfs3(int i , int j){
	if(a[i+1][j+1] =='*' && j+1 < n && i+1 < n){
		cnt++ ;
		///cout << "dfs3" << cnt << endl ;
		dfs3(i+1 , j+1) ;
	}
	else return ;

}

void dfs4(int i , int j){
	if(a[i+1][j-1] =='*' && i+1 < n && j > 0){
		cnt++ ;
		dfs4(i+1 , j-1) ;
	}
	else return ;

}





void solve(){
    cin >> n ;

    bool ok =false ;
    int r = -1 , c = -1 ;
    int tot = 0 ;

    for(int i = 0 ; i < n ; i++){
    	for(int j = 0 ; j < n ; j++){
    		cin >> a[i][j] ;
    		if(a[i][j] == '*')tot++ ;
    		if(!ok && a[i][j] == '*'){
    			r = i , c = j ;
    			ok =true ;
    		}
    	}
    }

    if(r == -1 && c == -1 ){
    	cout << "Corrupted Image" << endl ;
    	return ;
    }

    cnt = 1 ;
    dfs1(r , c) ;
    if(cnt == tot){
    	cout << cnt*cnt << endl ;
    	return ;
    }


    cnt = 1 ;
    dfs2(r , c) ;
    if(cnt == tot){
    	cout << cnt*cnt << endl ;
    	return ;
    }

    cnt = 1 ;
    dfs3(r , c) ;
    if(cnt == tot){
    	cout << cnt*cnt << endl ;
    	return ;
    }

    cnt = 1 ;
    dfs4(r , c) ;
    if(cnt == tot){
    	cout << cnt*cnt << endl ;
    	return ;
    }


    cout << "Corrupted Image" << endl ;



    




    

    






}



int32_t main()
{
     int t =1 , T = 1 ;
     //cin >> t ;
     while(t--){
        //cout << "Case "<< T++ <<": " ;
        solve() ;
     }
}