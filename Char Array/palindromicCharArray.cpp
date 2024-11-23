#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char word[]) {
    int i=0;
    int n=strlen(word);
    int j=n-1;

    while(i<=j) {
        
        if(word[i] == word[j]) {
            i++;
            j--;
        }

        else {
            return false;
        }
    }
    return true;
}

int main() {

    char word[100];

    // cin>>name;
    cin.getline(word,80);

    bool result = checkPalindrome(word);
    
    cout<<"Check Palindrome: "<<result;

    return 0;

}