class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] > v2[1];
}

    int maximumUnits(vector<vector<int>>& vect, int truckSize) {
            sort(vect.begin(), vect.end(),sortcol);
        double total=0;
        int req;    
        int i=vect.size()-1;
        for(int i=0;i<vect.size();i++)
        {
           if(vect[i][0]<=truckSize)
           {
               total+=(vect[i][0]*vect[i][1]);
               truckSize-=vect[i][0];
           }
            else
            {
                total+=(truckSize*vect[i][1]);
                truckSize=0;
                break;
            }
        }
        cout<<total;
        return total;
        
    }

    
    
    
    
    
    
    
    
    
    
    
};