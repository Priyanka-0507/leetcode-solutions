class Solution {
public:
    bool isPalindrome(string s) {
    string str="";
     for(char c: s)
     {
        if(isalnum(c)) str+=tolower(c);
        
     }
     //transform(str.begin(),str.end(),str.begin(),::tolower);
     int n=str.size();
     string rev=str; 
     reverse(rev.begin(),rev.end());
     if(rev==str) return true;
     else return false;

    }    
};