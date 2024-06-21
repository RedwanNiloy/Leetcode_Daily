class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int minn=0;
        int maxx=-1;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
            {
                minn+=customers[i];
            }
        }


        int i=0;
        int j=0;
        int p=0;

        while(i+minutes-1<customers.size())
        {    

            if(grumpy[j]){
               p+=customers[j];
               
              
            }
            if(j-i+1==minutes)
            {
                //cout<<p+minn<<endl;
               maxx=max(p+minn,maxx);
               
               if(grumpy[i]){
                  p-=customers[i];
               }
               i++;


            }
            
            j++;
            
            

            
        }



return maxx;


    }
};
