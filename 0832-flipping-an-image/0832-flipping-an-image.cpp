class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            int n = row.size();
            for (int i = 0; i < (n + 1) / 2; ++i) {
                // Swap and invert in one step
                // XOR with 1 flips 0 -> 1 and 1 -> 0
                int temp = row[i] ^ 1;
                row[i] = row[n - 1 - i] ^ 1;
                row[n - 1 - i] = temp;
            }
        }
        return image;
    }
};
