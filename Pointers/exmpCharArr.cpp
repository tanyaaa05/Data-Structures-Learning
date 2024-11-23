// #include<iostream>
// using namespace std;

// int main() {

//     char ch[10] = "Tanya";
//     char *c = ch;

//     cout<<ch<<endl;
//     cout<<&ch<<endl;
//     cout<<ch[0]<<endl;

//     cout<<&c<<endl;
//     cout<<*c<<endl;
//     cout<<c<<endl;

//     return 0;
// }





#include<iostream>
using namespace std;

int main() {

    char name[10] = "SherBano";
    char *cptr = &name[0];

    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<*(name+3)<<endl;

    cout<<cptr<<endl;  // print from 0th index till the null character
    cout<<&cptr<<endl;
    cout<<*cptr<<endl;
    cout<<*(cptr+3)<<endl;
    cout<<cptr+2<<endl;  // print from 2nd index till the null character


    // new case
    char ch='K';
    char* cp = &ch;

    cout<<cp<<endl;

    return 0;
}

