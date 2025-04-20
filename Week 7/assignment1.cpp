#include<iostream>
using namespace std; 
int main() {
int arr[100]; 
arr[0]=13; 
// Series of numbers
for(int i = 1; i<=100; i++){
    arr[i]= arr[i-1] + (i*3); 
}
for(int i = 0; i<=100; i++){
    cout<<arr[i]<<" "; 
}
}