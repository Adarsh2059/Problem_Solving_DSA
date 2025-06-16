class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (n != goal.size()) return false;

        for (int i = 0; i < n; ++i) {
            bool match = true;
            for (int j = 0; j < n; ++j) {
                if (s[(i + j) % n] != goal[j]) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }

        return false;
    }
};
