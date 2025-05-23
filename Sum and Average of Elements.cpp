#include<iostream>
using namespace std;

int calculateSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
double calculateAverage(int sum,int n){
    return (double)sum/n;
}
int main(){
    int n;
    cout<<"Enter no of  elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=calculateSum(arr,n);
    double average=
    calculateAverage(sum,n);
    cout<<"sum="<<sum<<endl;
    cout<<"Average="<<average<<endl;
    return 0;
}