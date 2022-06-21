class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
         int len = heights.size() - 1;
        priority_queue<int> pq;
        for (int i = 0; i < len; i++) {
            int diff = heights[i+1] - heights[i];
            if (diff > 0) {
                if (ladders) pq.push(-diff), ladders--;
                else if (!pq.empty() && diff > -pq.top())
                    pq.push(-diff), bricks += pq.top(), pq.pop();
                else bricks -= diff;
                if (bricks < 0) return i;
            }
        }
        return len;
    }
};
