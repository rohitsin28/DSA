#include <iostream>
#include <climits>
using namespace std;
int main(){
    int num;
    cout<<"Please enter a number: ";
    cin>>num;

    int* arr= new int[num];

    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Your Array is: [";
    for(int i=0;i<num;i++){
        cout<<arr[i];
        if(i != num-1){
            cout<<" ,";
        }
    }
    cout<<"]"<<endl;

    int sum=0;
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<num;i++){
        sum+=arr[i];
        if(arr[i] > max)
         max = arr[i];

        if(arr[i]<min)
         min= arr[i];
    }

    cout<<"Sumof array is: "<<sum<<" max is: "<<max<<" min is: "<<min;
}