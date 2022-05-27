class Solution {
public:
    
//     void help(vector<vector<int>>& image,int sr,int sc,int nc,int old_c)
//     {
//         if(sr<0 ||sr>image.size() ||sc<0 ||sc>image[0].size())
//             return;
//         else if(image[sr][sc]!=old_c)
//                 return;
        
//           image[sr][sc]=nc;
        
//                 help(image,sr-1,sc,nc,old_c);
//                 help(image,sr+1,sc,nc,old_c);
//                 help(image,sr,sc-1,nc,old_c);
//                 help(image,sr,sc+1,nc,old_c);
//     }
    
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
//         int old_c=image[sr][sc];
//         help(image,sr,sc,newColor,old_c);
//         return image;
        
//     }
    
        vector<vector<int>> floodFill(vector<vector<int>>& image, int r, int c, int n) {
        if(n==image[r][c]){
            return image;
        }
        change(image,r,c,n,image[r][c]);
        return image;
    }
    void change(vector<vector<int>>&image,int r,int c,int n,int old){
        if(r>=image.size() || r<0 || c<0 || c>=image[0].size() || image[r][c]!=old){
            return;
        }
        image[r][c]=n;
        // change(image,r-1,c,n,old);
        change(image,r-1,c,n,old);
        change(image,r+1,c,n,old);
        change(image,r,c-1,n,old);
        change(image,r,c+1,n,old);
        
    }
    

};