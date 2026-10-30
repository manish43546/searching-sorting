#include<iostream>
#include<string>
using namespace std;


int main(){
    
    string s;
    cout<<"Enter a string";
    cin>>s;
    
    int i =0;
    int j = s.length()- 1;
    
    bool isPalindrome = true;
    
    while(i<j){
        if(s[i]!= s[j]){
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    
    if(isPalindrome){
        cout<<"isPalindrome sahi aya hai yeni True hai yani ki palindrome hai string";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}