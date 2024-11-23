#include<iostream>
#include<string.h>
using namespace std;

void convertIntoUppercase(char word[]) {
   
    int n=strlen(word);
    for(int i = 0; i < n; i++) {
        if(word[i]>='a' && word[i]<='z'){
            word[i] = word[i] + 'A' - 'a';
        }
    }
}

int main() {

    char word[100];

    cin.getline(word,80);

    convertIntoUppercase(word);

    cout<<"String after converting into Uppercase: "<<word<<endl;

    return 0;

}