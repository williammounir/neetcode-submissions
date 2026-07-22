class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0,leftp=0,rightp=heights.size()-1;
        while(leftp<rightp){
            int area = min(heights[leftp],heights[rightp])*(rightp-leftp);
            maxarea = max(maxarea,area);
            if(heights[leftp]>heights[rightp]){
                rightp--;
            }else if(heights[leftp]<heights[rightp]){
                leftp++;
            }else{
                if(rightp-leftp==1)
                    break;
                if(heights[leftp+1]>=heights[rightp-1]){
                    leftp++;
                }else{
                    rightp--;
                }    
            }
        }
        return maxarea;
        
    }
};
