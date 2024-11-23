#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size, int key){
    
    // linear search
    for(int i = 0; i < size; i++){

        // key is present
        if(arr[i]==key){
            return true;
        }
    }

    // key is not present
    return false;
}

int main() {
    int arr[]={1,3,5,7,8};
    int size=5;
    
    cout<<"Enter the key to find: ";
    int key;
    cin>>key;

    bool ans=linearSearch(arr,size,key);

    if(ans==true){
        cout<<"Found"<<endl;
    }

    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
   
