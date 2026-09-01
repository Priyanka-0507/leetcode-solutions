class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas=0;
        int totcost=0;
        for(int i=0;i<gas.size();i++) totgas+= gas[i];
        for(int i=0;i<cost.size();i++) totcost+= cost[i];
        if(totgas<totcost) return -1;
        int tank=0;
        int start=0;
        for(int i=0;i<gas.size();i++)
        {
            tank+=gas[i]-cost[i];
            if(tank<0) 
            {
                tank=0;
                start=i+1;
            }
        }
        return start;
        
        

    }
       
};