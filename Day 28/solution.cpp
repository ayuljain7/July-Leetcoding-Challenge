class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> frequency(26,0);
        for(int i=0;i<tasks.size();i++)
        {
            char new1= tasks[i];
            cout<<int(new1)-int('A')<<" ";
            frequency[int(new1)-int('A')]++;
        }
        sort(frequency.begin(),frequency.end());
        int idle=(frequency[25]-1)*n;
        for(int i=24;i>=0;i--)
        {
            idle=idle-min(frequency[25]-1,frequency[i]);
            if(idle<0)
            {
                return tasks.size();
            }
        }
        return tasks.size()+idle;
        
    }
};