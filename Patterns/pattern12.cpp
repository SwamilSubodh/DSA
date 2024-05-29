#include<iostream>
using namespace std;
int space=2*(4-1);
int main() {
for (int i = 1; i <= 5; i = i + 1) {     
   for(int j=1;j<=i;j=j+1){       //number
    cout <<j<<" ";
   }
    for(int j=1;j<=space;j=j+1){       //space
    cout <<" ";
}
for(int j=i;j>=i;j--){ 
    cout<<j<<" ";                       //number
     }
        cout << endl;
        space-=2;
}
    return 0;
}
