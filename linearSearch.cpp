#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n , int key){
    for(int i = 0; i<n ; i++){
        if(arr[i]==key){
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[10]={2,34,5,66,35,33,-3,-4,67,-10};
    int key;
    cin>>key;
    bool found = linearSearch(arr,10,key);
    if(found){
        cout<<"Present"<<endl;
    }else
        cout<<"Not present";
    return 0;
}