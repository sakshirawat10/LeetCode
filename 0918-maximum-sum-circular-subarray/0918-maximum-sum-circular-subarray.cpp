class Solution {
public:
    int maxSubarraySumCircular(vector<int>
    &nums){
   
    int currmin = 0 , maxsum= INT_MIN ;
    int currmax = 0 ;
    int minsum = INT_MAX , totalsum=0, circularsum;
    for(int i = 0 ; i<nums.size() ; i++){
    currmax += nums[i];
    maxsum = max(currmax,maxsum);
     if(currmax<0){
        currmax = 0;
     }
    currmin += nums[i];
    minsum = min(currmin,minsum);
     if(currmin>0){
        currmin = 0;
     }
     totalsum  += nums[i];
    }
     circularsum = totalsum - minsum;
     if(maxsum < 0){
        return maxsum;
     }

     return max(maxsum,circularsum);                                                          
    }
};

