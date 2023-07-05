class Solution {
public:
   void setZeroes(vector<vector<int>>& matrix) {
    bool row = false;
    bool col = false;

    // Check if the first column contains zeros
    for (int i = 0; i < matrix.size(); i++) {
        if (matrix[i][0] == 0) {
            col = true;
            break;
        }
    }

    // Check if the first row contains zeros
    for (int i = 0; i < matrix[0].size(); i++) {
        if (matrix[0][i] == 0) {
            row = true;
            break;
        }
    }

    // Update the first row and column to store zeros
    for (int i = 1; i < matrix.size(); i++) {
        for (int j = 1; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set zeros based on the values in the first row and column
    for (int i = 1; i < matrix.size(); i++) {
        for (int j = 1; j < matrix[i].size(); j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set the first row to zeros if needed
    if (row) {
        for (int i = 0; i < matrix[0].size(); i++) {
            matrix[0][i] = 0;
        }
    }

    // Set the first column to zeros if needed
    if (col) {
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i][0] = 0;
        }
    }
}

};