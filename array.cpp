#include <iostream>
using namespace std;
int main(){
    int input=0, i=0, sum=0, count=0; float avg;
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
    avg = (float)sum/count;
    cout<<"Average is: " <<avg;
    return 0;
}
