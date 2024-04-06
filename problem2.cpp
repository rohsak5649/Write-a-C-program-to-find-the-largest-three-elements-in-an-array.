#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arrsize ;
    cout<<"Enter the array size : ";
    cin>>arrsize;
    int arr[arrsize];
    cout<<"enter the "<<arrsize<<"elements"<<endl;
    for(int i = 0 ; i <arrsize; i++){
        cin>>arr[i];
        
    }
    
    int max1 = INT_MIN , max2 = INT_MIN , max3 = INT_MIN;
    
    for (int i = 0 ; i <arrsize ; i++){
        if(arr[i]>max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
            
        }
        else if (arr[i]>max2){
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i]>max3){
            max3 = arr[i];
        }
    }
    
    cout<<"the three largest elements are "<<max1 <<","<<max2<<","<<max3;
    
}
