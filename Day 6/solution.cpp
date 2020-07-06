class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector <int> oneplus=digits;
        int n=digits.size()-1;
        while(n>=0)
        {
            if(oneplus[n]==9)
            {
                oneplus[n]=0;
                n--;
            }
            else
            {
                oneplus[n]++;
                break;
            }
        }
        if(oneplus[0]==0)
        {
            oneplus.insert(oneplus.begin()+0,1);
        }
        return oneplus;
    }
};