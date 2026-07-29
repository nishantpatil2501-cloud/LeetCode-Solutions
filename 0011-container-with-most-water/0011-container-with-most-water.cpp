class Solution {
public:
    int maxArea(vector<int>& height) {
    int n=height.size();
    int maxarea=0;
    int lp=0,rp=n-1;
    while(lp<rp){
        int w=rp-lp;
        int hii=min(height[lp],height[rp]);
        int area= w*hii;
        maxarea=max(maxarea,area);
        if(height[lp]<height[rp]){
            lp++;
        }
        else{rp--;}
    }
    return maxarea;
    }
};