#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        bool continous3cell = false ;
        int totalcntemptycells = 0 ;


        for( int i = 0 ; i < n ; i++){
            if(s[i] == '.' and i + 1 < n and s[i+1] == '.'  and i + 2 < n and s[i+2] == '.'){
                continous3cell = true ;
                break ;
            }

            if(s[i] == '.'){
                totalcntemptycells++ ;
            }
        }

        if(continous3cell){
            cout<<2<<endl ;
        }
        else{
            cout<<totalcntemptycells<<endl ;
        }


    }
}