class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for(int x : nums) {
            st.insert(x);
        }

        int ans = 0;

        for(int x : st) {
            if(st.find(x - 1) == st.end()) {

                int count = 1;
                int curr = x;

                while(st.find(curr + 1) != st.end()) {
                    curr++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};