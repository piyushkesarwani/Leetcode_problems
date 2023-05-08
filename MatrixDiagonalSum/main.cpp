class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int primary = 0, secondary = 0, row = mat.size(), col = mat[0].size();
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    primary += mat[i][j];
                }
                if (((i + j) == (col - 1)) && i != j)
                {
                    secondary += mat[i][j];
                }
            }
        }
        return primary + secondary;
    }
}