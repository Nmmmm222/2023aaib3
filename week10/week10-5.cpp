class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //小到大排好!
        int N =nums.size();
        for(int i=0;i<N-2;i++){
            int big =nums[N-1-i],middle=nums[N-2-i],small =nums[N-3-i];
            if(middle+small >big) return big+middle+small;

        }

        return 0; //目前答案是錯的
    }
};