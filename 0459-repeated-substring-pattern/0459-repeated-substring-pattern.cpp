class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string empt="";
        for(int i=1;i<=s.size()/2;i++)
        {
            if(s.size()%i==0)
            {
                string sub=s.substr(0,i);
                string empt="";
                while(empt.length()<s.length())
                {
                    empt+=sub;
                }
                if(empt==s) return true;
                
            }
        }
        return false;
        
    }
};