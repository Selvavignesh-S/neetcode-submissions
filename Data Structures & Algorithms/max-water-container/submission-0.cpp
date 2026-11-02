class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int max_area = 0;
        while(i < j){
            int breadth = j - i;
            int a = heights[i];
            int b = heights[j];
            int minimum = min(a,b);
            int area = minimum * breadth;
            if(area > max_area) max_area = area;
            if(minimum == a) i++;
            else if(minimum == b) j--;
        }
        return max_area;
    }
};
