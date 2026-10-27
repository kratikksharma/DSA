class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0;
        int total = numBottles;
        while (empty + numBottles >= numExchange) {
            empty += numBottles;
            numBottles = 0;
            while (empty >= numExchange) {
                empty = empty - numExchange;
                numBottles++;
            }
            total += numBottles;
        }
        return total;
    }
};