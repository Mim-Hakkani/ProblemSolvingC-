#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    for(int i=1;i<=num2;i++){
        //  cout<<i;
         if(i%num1==0){
            cout<<i<<endl;
            continue;
         }
         cout<<i<<" ";
    }
    return 0;
}

/*
input : 3 99
output : 1  2  3
         4  5  6
         7  8  9
         10 11 12
*/

