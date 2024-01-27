#include<iostream>
using namespace std;

//Arrays is a linear data structure which stores homogeneous data in it.It stores items at contiguous memory location.
 int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    // For each loop

    for(int ele: arr){
        cout<<ele<<endl;
    }

    //While loop
    int j=0;
    while(j<size){
        cout<<arr[j]<<endl;
        j++;
    }
    int n;
    cin>>n;
    cout<<"Size of arrays is :- "<<n;
    char vowels[n];
    for(int i=0; i<n; i++){
        cin>>vowels[i];
    }
    for(int i=0; i<n; i++){
        cout<<vowels[i]<<" ";
    }

    int array[] = {12,13,45,67,89};
    int arr_size = sizeof(array)/sizeof(array[0]);
    int sum = 0;
    for(int i =0; i<arr_size; i++){
        sum += array[i];
    } 
    cout<<sum<<endl;

    // Maximum number

    int val[] = {13,90,45,67,34,-23};
    int val_size = sizeof(val)/sizeof(val[0]);
    int max = val[0];
    for(int i=0; i<val_size; i++){
        if(val[i]>max){
            max = val[i];
        }
    }
    cout<<max<<endl;
 }