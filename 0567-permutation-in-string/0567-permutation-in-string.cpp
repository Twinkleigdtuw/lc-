class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        int m = s1.size();
        int n = s2.size();

        for(char x : s1) {
            mp1[x]++;
        }

        for(int i = 0; i < n; i++) {
            mp2[s2[i]]++;

            if(i >= m) {
                mp2[s2[i-m]]--;

                if(mp2[s2[i-m]] == 0) {
                    mp2.erase(s2[i-m]);
                }
            }

            if(mp1 == mp2) {
                return true;
            }
        }

        return false;
    }
};