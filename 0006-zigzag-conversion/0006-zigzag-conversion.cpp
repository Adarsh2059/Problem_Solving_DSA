class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;

        vector<string> rows(min(numRows, int(s.length())));
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;

            // Change direction if at top or bottom
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            // Move up or down
            currRow += goingDown ? 1 : -1;
        }

        // Combine rows
        string result;
        for (string row : rows)
            result += row;

        return result;
    }
};
