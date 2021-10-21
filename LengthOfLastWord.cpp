#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
        if(s.size()==0){
            return 0;
        }
        else if(s.size()==1 && s[0]!=' '){
            return 0;
        }
        int i=s.size()-1;
        int count=0;
        while(i>=0){
            if(s[i]!=' '){
                count++;
                if(i>0 && s[i-1]==' '){
                    break;
                }
            }
            i--;
        }
        return count;

    }

int main(){
    string s;
    getline(cin,s);
    
    cout<<lengthOfLastWord(s);
}