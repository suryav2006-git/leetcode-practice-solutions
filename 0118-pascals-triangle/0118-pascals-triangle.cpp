class Solution {
public:
    vector<vector<int>> generate(int rows) {
        vector<vector<int>> triangle(rows);

        for(int i=0; i<rows ; i++) {
            triangle[i].resize(i+1,1);

            for(int j=1; j<i ; j++) {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
        return triangle;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna