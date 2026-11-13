class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        unordered_set<long long> st;
        pq.push(1);
        st.insert(1);
        long long num = 1;
        for(int i = 0; i < n; i++) {
            num = pq.top();
            pq.pop();
            if(st.insert(num * 2).second)
                pq.push(num * 2);
            if(st.insert(num * 3).second)
                pq.push(num * 3);
            if(st.insert(num * 5).second)
                pq.push(num * 5);
        }
        return num;
    }
};