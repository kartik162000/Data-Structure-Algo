class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int sum=0;
        int fill=capacity;
        for(int i=0;i<plants.size();i++)
        {
            fill-=plants[i];
            if(fill>=0)
                sum++;
            else
            {
                sum+=(2*i+1);
                fill=capacity;
                fill-=plants[i];
            }
        }
        return sum;
    }
};