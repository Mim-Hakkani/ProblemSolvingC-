#include <bits/stdc++.h>

using namespace std;

int main()
{
     int X;
    while(1){
        cin>>X;
        int sum =0;
        if(X%2!=0){
            X =X+1;
        }
       if(X==0) break;
        for(int i=0;i<=4;i++){
         sum = sum +X;
         X+=2;        
        }
        cout<<sum<<endl;    
    }
    
    return 0;
}

/*
  input 4 40
  input 11 80
*/