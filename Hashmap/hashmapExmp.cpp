#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {

    // creation of map
    map<int,char> myMap;

    // insertion 
    myMap[0]='a';
    myMap[1]='b';
    myMap[125]='z';
    
    // access
    cout<<"Your ans is: "<<myMap[0]<<endl;

}