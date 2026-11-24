class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int maxx = 0;
        for(int i = 0 ;i < gain.size(); i++){
            ans = ans + gain[i];

            maxx = max(maxx,ans);
        } 

        return maxx;
    }
};