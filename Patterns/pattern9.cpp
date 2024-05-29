#include<iostream>
using namespace std;

int main() {
for (int i = 0; i <= 5; i = i + 1) {     
   for(int j=0;j<5-1-i;j=j+1){       //space
    cout <<" ";
   }
    for(int j=0;j<2*i+1;j=j+1){       //stars
    cout <<"*";
}
for(int j=0;j<5-1-i;j=j+1){ 
    cout<<" ";                       //space
     }
        cout << endl;
}
for (int i = 0; i <= 5; i = i + 1) {     
   for(int j=0;j<i;j=j+1){       //space
    cout <<" ";
   }
    for(int j=0;j<2*5-(2*i+1);j=j+1){       //stars
    cout <<"*";
}
for(int j=0;j<i;j=j+1){ 
    cout<<" ";                       //space
     }
        cout << endl;
}
    return 0;
}
