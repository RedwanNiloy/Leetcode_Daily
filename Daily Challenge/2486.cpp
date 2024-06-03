class Solution {
public:
     
    int appendCharacters(string s, string t) {
        
        int i=0;
        int j=0;

        while(j<s.size())
        {
            if(i>t.size())
            {
                return 0;
            }
            if(t[i]==s[j])
            {
                i++;
                j++;

            }
            else{
                j++;
            }
        }

        return t.size()-i;


    }
};
