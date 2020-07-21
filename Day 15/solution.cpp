class Solution {
public:
    string reverseWords(string s) {
        vector<string> s1;
        
        for(int i=0;i<s.size();i++)
        {
            string s2;
            while(i<s.size() && s[i]!=' ')
            {
                s2=s2+s[i];
                i++;
            }
            if(s2.size()!=0)
            {
                s1.push_back(s2);
            }
        }
        cout<<"here ";
        string ans;
        for(int i=s1.size()-1;i>0;i--)
        {
            ans=ans+s1[i];
            ans.append(" ");
        }
        if(s1.size()==0)
        {
            return ans;
        }
         ans.append(s1[0]);
        return ans;
    }
};