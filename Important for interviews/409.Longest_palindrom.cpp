class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int v=0;
        for(auto i: s)
        {
          if(mp.find(i)==mp.end())
          {
            mp[i]=1;
            v++;
          }
          else{
            if(mp[i])
            {
                v--;
                mp[i]=0;
            }
            else{
                mp[i]=1;
                v++;
            }
          }
        }
        if(v){
        int x=s.size()-(v-1);
        return x;
        }else{
            return s.size();
        }
        
    }
};
