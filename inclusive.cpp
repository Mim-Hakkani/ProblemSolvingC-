#include <bits/stdc++.h>

using namespace std;

int main()
{
     int num,limit;
     int sum = 0 ;
     cin>>num>>limit;
      if(limit<=0) {
      while(1){
        cin>>limit;
        if(limit>0) break;
      }
      
    }
      for(int i=1;i<=limit;i++)
      {  int inc = num++;
          sum =sum+inc;
            
      }
      cout<<sum<<endl;
    
    return 0;
}