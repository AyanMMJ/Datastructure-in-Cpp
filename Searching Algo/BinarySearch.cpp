#include<iostream>
#include<unistd.h>
using namespace std;
int bin(int arr[],int start,int end,int num){
    while(start<=end){
        int mid = (start + end)/2;
        if(num == arr[mid]){
            return mid;
        }else if(arr[mid]>num){
            return bin(arr,start,mid-1,num);
        }else if(arr[mid]<num){
            return bin(arr,mid+1,end,num);
        }
    }
    return -1;
}
int main(){
    int num,x;
    cout<<"Enter number of elements = ";
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter "<<i+1<<"th element = ";
        cin>>arr[i];
    }
    cout<<"\nEnter the number for search = ";
    cin>>x;
    int result = bin(arr,0,num-1,x);
    if(result == -1){
        cout<<"Element mot found"<<endl;
    }else{
        cout<<"Element found at "<<result<<" index"<<endl;
    }
    while (1) {
        cout << "Done |"<<ends;
        sleep(1);
    }
    
    return 0;
}
/*
----- output -----
Enter number of elements = 5
Enter 1th element = 1
Enter 2th element = 2
Enter 3th element = 3
Enter 4th element = 4
Enter 5th element = 5

Enter the number for search = 5
Element found at 4 index
Done |Done |Done |Done |Done |Done |Done |Done |
*/