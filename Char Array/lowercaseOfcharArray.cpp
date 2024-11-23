#include<iostream>
#include<string.h>
using namespace std;

void convertIntoLowercase(char word[]) {
   
    int n=strlen(word);
    for(int i = 0; i < n; i++) {
        if(word[i]>='A' && word[i]<='Z'){
            word[i] = word[i] + 'a' - 'A';
        }
    }
}

int main() {

    char word[100];

    // cin>>word;
    cin.getline(word,80);
    
    convertIntoLowercase(word);

    cout<<"String after converting into Lowercase: "<<word<<endl;

    return 0;

}