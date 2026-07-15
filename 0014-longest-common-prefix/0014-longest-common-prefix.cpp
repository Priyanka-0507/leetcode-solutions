class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       string fstr=strs[0];
       string lstr=strs[strs.size()-1];
       string res="";
       for(int i=0;i<min(fstr.length(),lstr.length());i++)
       {
        if(fstr[i]!=lstr[i]) break;
        res+=fstr[i];
        
       } 
       return res;
    }
};