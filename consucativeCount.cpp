#include<iostream>
using namespace std;
int main(){
    int num,num1;

    cin>>num>>num1;
    int count =1 , sum =0;
    if(num1<num){
        while (1)
        {
            cin>>num1;
            if(num1>num) break;
        }
        
    }
         if(num<num1){ 
           for(int i =num; i<=num1;i++){
              
              sum =sum +i;
              if(sum<num1){
                count++;
              }else{
                break;
              }
           }
           cout<<count<<endl;
           } 

    return 0;
}

/*
input 2 
4,5 => 5,7,9,11,13
7,4=>7,9,11,13

*/