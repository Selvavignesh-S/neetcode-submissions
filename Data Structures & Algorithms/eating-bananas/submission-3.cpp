class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = 0;
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low < high){
            int mid = low + (high - low) / 2;
            for(int i = 0; i < piles.size(); i++){
                sum += (piles[i] + mid - 1) / mid;

            }
            if(sum <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
            sum = 0;
        }
        return low;
    }
};
