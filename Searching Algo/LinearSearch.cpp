#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int search,size;
    cout<<"Enter number of elements = ";
    cin>>size;
    int arr[size];
    //cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<i+1<<"th element = ";
        cin>>arr[i];
    }
    cout<<"\nEnter number to search = ";
    cin>>search;
    int result = linearSearch(arr,size,search);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }else {
        cout<<"Element found at "<<result<<"th index"<<endl;
    }
    while (1)
    {
        /*this is only for seeing the output in terminal/cmd*/
    }
    
    return 0;
}
/*
int arr[5]={1,2,3,4,5};

    0       1       2       3       4
-----------------------------------------
|       |       |       |       |       |
|   1   |   2   |   3   |   4   |   5   |
|       |       |       |       |       |
-----------------------------------------

----------- output ----------
Enter number of elements = 5
Enter 1th element = 1
Enter 2th element = 2
Enter 3th element = 3
Enter 4th element = 4
Enter 5th element = 5

Enter number to search = 2
Element found at 1th index

---------- output ----------
Enter number of elements = 5
Enter 1th element = 10
Enter 2th element = 15
Enter 3th element = 2
Enter 4th element = 5
Enter 5th element = 8

Enter number to search = 2
Element found at 2th index
*/
