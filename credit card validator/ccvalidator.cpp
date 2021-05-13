#include <bits/stdc++.h>
//#include <string>
using namespace std;

bool checkStr(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]<'0' || str[i]>'9'){           
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"_______________CREDIT CARD VALIDATOR_______________"<<endl;
    cout<<endl;
    string str;
    while(true){
        
        cout<<"enter cc number : ";        
        cin>>str;
        int length = str.length();
        if(!checkStr(str)){
            cout<<"please enter valid digits"<<endl;
            continue;
        }
        
        int sumOdd=0;
        for(int i=length-1;i>=0;i-=2){
            sumOdd = str[i]-48;
        }
        int sumEven=0;
        for(int i=length-2;i>=0;i-=2){
            if((str[i]-48)*2 <10){
                sumEven=str[i]-48;
            }
            else{
                int tempsum = (str[i]-48)*2;
                int sum =(tempsum/10)+tempsum%10;
                
                sumEven+=sum;
            }
        }
        if((sumEven+sumOdd)%10==0){
            cout<<"valid card number"<<endl;
        }
        else{
            cout<<"invalid card number"<<endl;
        }        
        cout<<endl;
        cout<<endl;
    }
}