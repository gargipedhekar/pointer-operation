//Name:Gargi
//PRN:23070123052
//Aim: To use call by reference.
#include <iostream>
#include<string>
using namespace std;

void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 5, b = 2;
    swap(a,b);
    cout << "Value of the a is:" << a<<endl;
    cout << "Value of the b is:" << b<<endl;
    return 0;
}

/* OUTPUT
Value of the a is:2
Value of the b is:5
*/
