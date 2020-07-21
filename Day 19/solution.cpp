class Solution {
public:
    string addBinary(string a, string b) {
        while(a.size()!=b.size())
        {
            if(a.size()>b.size())
                b='0'+b;
            else
                a='0'+a;
        }
        int c=0;
        string sum;
        for(int i=a.size()-1;i>=0;i--)
        {
            int a1,b1;
            if(a[i]=='1')
                a1=1;
            else
                a1=0;
            if(b[i]=='1')
                b1=1;
            else
                b1=0;
            if((a1^b1)^c==1)
                sum='1'+sum;
            else
                sum='0'+sum;
            c=((a1 & b1) | (a1 & c)) | (b1 & c);
            //cout<<c<<" ";
        }
        if(c==1)
            sum='1'+sum;
        return sum;
    }
};