#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;

    while(getline(cin,s)){

        int cont = 0;
        for(int i=0;i<s.size();i++){
            cont++;
            //printf("%c",s[i]);
            if(cont >= 70 && (s[i] == ' ' || s[i] == '\n')){
                printf("\n");
                cont = 0;
            }
            else printf("%c",s[i]); 
        }
        if(cont != 0) printf("\n");
    }
}