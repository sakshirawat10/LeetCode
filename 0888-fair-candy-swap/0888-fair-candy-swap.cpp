class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for(int x : aliceSizes){
            sumA +=x;
        }
        unordered_set<int>st;
        for(int x : bobSizes){
            sumB +=x;
            st.insert(x);
        }
        int diff = (sumA-sumB)/2;
        for(int x : aliceSizes){
            if(st.count(x-diff))
            return {x,x-diff};
        }
        return{};
    }
};