class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
      int cnt = 0;

      for(int i=0; i<nums.size(); i++){
        if(cnt == 0){
            cnt = 1;
            element = nums[i];
        }
        else if(nums[i] == element) {
            cnt++;
        }
        else{
            cnt--;
        }
      }
      int overallcnt = 0;
      for(int i=0; i<nums.size();i++){
        if(nums[i] == element){
            overallcnt++;
        }
        if(overallcnt > (nums.size())/2){
            return element;
        }
      }
      return 0;
    }
};