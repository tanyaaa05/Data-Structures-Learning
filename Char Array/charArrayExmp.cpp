#include<iostream>
using namespace std;

int main() {

    char name[100];

    cin>>name;
    // cin.getline(name,50); 

    cout<<name;
    
    return 0;
}



// #include<iostream>
// using namespace std;

// int main() {

// // Declaration of a character array
// char ch[100];

//     char name[100];

//     cin>>name;

//     for(int i = 0; i < 6; i++) {
//         cout<<"Value at "<<i<<" index: "<<name[i]<<endl;
//     }

//     // Casts the character at index 5 of the 'name' array to its integer 
//     // ASCII value and stores it in the variable 'value'.
//     int value = (int)name[5];
    
//     // Outputs the integer (ASCII) value of the character at index 5 
//     // of the 'name' array which is null character i.e. 0.
//     cout << "Value is: " << value << endl; 


//     return 0;
// }