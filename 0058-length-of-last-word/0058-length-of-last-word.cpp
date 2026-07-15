class Solution {
public:
    int lengthOfLastWord(string s) {
        int sp=0;
        int c=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && sp==0) continue;
            else if(s[i]!=' ')
            {
                sp++;
                c++;
            }
            else break;
        }
        return c;

    }
};