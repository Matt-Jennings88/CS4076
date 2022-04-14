#include <iostream>
using namespace std;
const int MAX = 3;
int printVal(int **inPtr);

int main () {
int var[MAX] = {10, 100, 200};
int *ptr[MAX]; // Array of pointers
for (int i = 0; i < MAX; i++) {
ptr[i] = &var[i]; // assign the address of integer.
}
for (int i = 0; i < MAX; i++) {
cout << "Value of var[" << i << "] = ";
cout << *ptr[i] << endl;
}

printVal(&ptr[1]);
return 0;
}

int printVal(int **inPtr)
{
cout << "value of Ptr " << inPtr << endl;
cout << "value of *Ptr "<< *inPtr << endl;
cout << "value of **Ptr "<< **inPtr << endl;

*inPtr++; // pointer arithmetic

cout << "value of **Ptr "<< **inPtr << endl;
cout << "value of *Ptr "<< *inPtr << endl;
return 0;
}
