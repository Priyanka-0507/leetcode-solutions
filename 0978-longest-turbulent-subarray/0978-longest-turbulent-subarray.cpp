class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
      if(arr.size()<2) return arr.size();
       vector<char> sym=strarr(arr);
       int n=sym.size();
       int c=1;
       int maxs=1;
       for(int i=0;i<n-1;i++)
       {
        if(sym[i]=='>'&& sym[i+1]=='<')
        {
           if (c == 1) c = 3; 
           else c++;
        }
        else if(sym[i]=='<' && sym[i+1]=='>')
        {
            if (c == 1) c = 3; 
            else c++;
        }
        else 
        {
            if (sym[i] != '=') {
                maxs = max(maxs, 2); 
            }
           maxs=max(c,maxs);
           c=1;
        }
       }
       if (sym[n-1] != '=') {
            maxs = max(maxs, 2);
        }
       maxs=max(c,maxs);
       return maxs;
    }
    vector<char> strarr(vector<int> arr)
    {
        vector <char> symb;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1]) symb.push_back('<');
            else if(arr[i]>arr[i+1]) symb.push_back('>');
            else symb.push_back('=');
        }
        return symb;
    }
};