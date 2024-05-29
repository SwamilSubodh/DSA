#include<iostream>
using namespace std;

int main() {
for (int i = 0; i <= 5; i = i + 1) {     
   for(int j=0;j<i;j=j+1){       
    cout <<"*";
   }
   for(int i=0;i<=5;i++){
    for(int j=0;j<5-i+1;j++){
        cout<<"*";
    }
   }
        cout << endl;
}
    return 0;
}
