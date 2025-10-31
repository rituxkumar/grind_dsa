class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();

        priority_queue<int> pq;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            pq.push(piles[i]);
            sum += piles[i];
        }

        for (int i = 1; i <= k; i++) {
            int max_Ele = pq.top();
            pq.pop();
            int remove = max_Ele / 2;
            sum -= remove;
            max_Ele -= remove;
            pq.push(max_Ele);
        }
        return sum;
    }
};