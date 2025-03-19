class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>seen;//create a hash table where key is comeplement and value is index
      for(int i=0;i<nums.size();i++){ //run a O(n) loop
        int complement = target - nums[i]; //check if complement exist 
        if(seen.find(complement)!=seen.end()){ 
            //if complement exist,we return the the complement index and the current value index
            return {seen[complement],i};
        }
        seen[nums[i]]=i; 
        //else we add the value to the has table which can be check as complement later on
      }
      return {};
      //if no exist we return as empty array
    }
};