/*
    Probelm : Flood Fill
    Author  : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/
class Solution {
public:
    void fill(vector<vector<int> >& image, int R, int C, int Color, int newColor){
        int rows = image.size(), cols = image[0].size();
        
        if(R >= rows || R < 0 || C >= cols || C < 0){
            return;
        }
        else if(image[R][C] != Color || image[R][C] == newColor){
            return;
        }
        
        image[R][C] = newColor;
        fill(image, R+1, C, Color, newColor);
        fill(image, R-1, C, Color, newColor);
        fill(image, R, C+1, Color, newColor);
        fill(image, R, C-1, Color, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fill(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
};