#include<iostream>
using namespace std;

int main(){
    int a[20];
    for(int i=0;i<20;i++){
        cin>>a[i];

    }
        for(int j=19,i=0;j>=0,i<20;j--,i++)
        {
            cout<<"N["<<i<<"] = "<<a[j]<<endl;
        }

        return 0;

}


/*
Write a program that reads an array N [20]. After, change the first element by the last, the second element by the last but one, etc.., Up to change the 10th to the 11th. print the modified array.

Input
The input contains 20 integer numbers, positive or negative.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position.

***********************************************

input :
0
-5
...
63
230

output : 

N[0] = 230
N[1] = 63
...
N[18] = -5
N[19] = 0


*/