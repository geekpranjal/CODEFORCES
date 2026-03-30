#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;

    while(t--){
        long long n , x ;
        cin>>n>>x ;
        vector<long long>points_arr(n) ;
        points_arr.push_back(0) ;// start point
        for( int i = 0 ; i < n ; i++){
            points_arr.push_back(points_arr[i]) ;
        }
        points_arr.push_back(x) ;
        long long n = points_arr.size() ;

        long long maxdisbtwpoint = INT_MIN ;

        for( int i = 1 ; i < n ; i++){
            if( i == n - 1){
                maxdisbtwpoint = max(maxdisbtwpoint , 2*(points_arr[i] - points_arr[i-1])) ;
            }
            else{
                maxdisbtwpoint = max(maxdisbtwpoint , (points_arr[i] - points_arr[i-1])) ;
            }
        }


    }

    cout<<maxdisbtwpoint<<endl;
}