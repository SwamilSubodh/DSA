#include<iostream>
using namespace std;
int num=1;
int main() {
for (int i = 1; i <= 5; i = i + 1) {     
   for(int j=1;j<=i; j =j+1){     
    cout << num;
    num=num+1;
   }
    cout << endl;

}

    return 0;
}
