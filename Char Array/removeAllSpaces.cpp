#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char sentence[]) {
    int n=strlen(sentence);

    for(int i = 0; i < n; i++) {
        if(sentence[i]==' ') {
            sentence[i] = '@';
        }
    }
    
}

int main() {

    char sentence[100];

    // cin>>sentence;
    cin.getline(sentence,80);
    
    replaceSpaces(sentence);

    cout<<"Printing sentence: "<<endl<<sentence<<endl;

    return 0;
}