#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a;
    for(int i=0;i<100;i++)
    {
     cin>>a;

     if(a<=10) {
        cout<<"A["<<i<<"] = "<<a<<endl;
    
     }
    }
    
   
    return 0;
}

/*

Input Sample	Output Sample
0               A[0] = 0.0
                A[1] = -5.0
                A[3] = -8.5
                ...
-5
63
-8.5
...


*/

