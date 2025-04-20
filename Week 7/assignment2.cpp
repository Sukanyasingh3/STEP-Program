#include<iostream>
using namespace std; 
int main() {
int arr[100]; 
arr[0]=13; 
// Series of numbers
for(int i = 1; i<=100; i++){
    arr[i]= arr[i-1] + (i*3); 
}
// S1
int sum1 =0; 
for(int i = 0; i<100; i++){
    sum1+= arr[i];
}
// S2
int sum2 =0; 
for(int i = 0; i<91; i++){
    sum2+= arr[i];
}
//S3
int sum3 = sum1-sum2;
cout<<sum3; 
}