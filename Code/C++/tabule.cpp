#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;

    while(getline(cin,s)){
        if(s.size() < 30){
            cout << s << endl;
            cout << " ";
        }
        else{
            for(int i=0;i<=s.size();i++){
                if(i==s.size()){
                    if(s[i-1] == '.' || s[i-1] == ':'){
                        printf("\n");
                    }
                    else{
                        printf(" ");
                    }
                }
                else printf("%c",s[i]);
            }
        }
    }
}