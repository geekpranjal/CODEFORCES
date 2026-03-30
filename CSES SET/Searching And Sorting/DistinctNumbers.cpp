#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n) ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    // unordered_map<int,int>mp ;
    // for(auto &x: arr){
    //     mp[x]++ ;
    // }
   
    // cout<<mp.size();
    set<int>s(arr.begin() , arr.end()) ;
    cout<<s.size() ;

}