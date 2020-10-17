#include <iostream>
using namespace std;
int main(){
    int input=0;
    int i=0;
    int sum=0;
    int count=0;
    float average;
    while (input<1 || input>100){
        cout<<"Enter length of array: ";
        cin>>input;
        if(input>0 && input<=100)
            break;
    }
    int arr[input];
    while(i<input){
        cout<<"Enter element: ";
        cin>>arr[i];
        if(arr[i]<1 || arr[i]>100)
            break;
        sum+=arr[i];
        count++;
        i++;
    }
    average = (float)sum/count;
    cout<<"Average is: " <<average;
    return 0;
}
