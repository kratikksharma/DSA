class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        unordered_set<long long> s;
        pq.push(1);
        s.insert(1);
        long long num;
        while(n--) {
            num = pq.top();
            pq.pop();
            if(s.find(num * 2) == s.end()) {
                pq.push(num * 2);
                s.insert(num * 2);
            }
            if(s.find(num * 3) == s.end()) {
                pq.push(num * 3);
                s.insert(num * 3);
            }
            if(s.find(num * 5) == s.end()) {
                pq.push(num * 5);
                s.insert(num * 5);
            }
        }
        return num;
    }
};