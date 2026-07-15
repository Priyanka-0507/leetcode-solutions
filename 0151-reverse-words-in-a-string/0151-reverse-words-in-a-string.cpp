class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string result="";
        string res="";
        while(ss>>word)
        {
            result= word + " " + result;
        }
        for(int i=0;i<result.size()-1;i++)
        {
           res+=result[i];
        }
        return res;
    }
};