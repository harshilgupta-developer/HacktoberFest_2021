#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<char> s={'h','e','l','l','o'};

    for(int i=0,j=s.size()-1;i<j;i++,j--){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp; 
        }
    for(auto x: s){
        cout<<x<<" ";
    }

    return 0;
}