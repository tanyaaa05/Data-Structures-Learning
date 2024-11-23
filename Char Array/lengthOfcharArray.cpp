#include<iostream>
#include<string.h>
using namespace std;

int getLength(char name[100]) {
    int length=0;
    int i=0;
    while(name[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

int main() {

    char name[100];

    // int n=sizeof(name)/sizeof(char);
    // cout<<n<<endl;

    // cin>>name;
    cin.getline(name,80);

    cout<<"Length of the string is: "<<getLength(name);

    // // The strlen() function is used to determine the length of a string, 
    // // excluding the null character that marks the end of the string
    // cout<<"Length of the string is: "<<strlen(name);

    return 0;
}