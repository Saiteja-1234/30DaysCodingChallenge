//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    bool is_valid(int grid[N][N], int row, int col, int num) 
    {
        for (int i = 0; i < N; i++) 
        {
            if (grid[row][i] == num || grid[i][col] == num) 
            {
                return false;
            }
        }
        
        int start_row = row - row % 3;
        int start_col = col - col % 3;
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                if (grid[start_row + i][start_col + j] == num) 
                {
                    return false;
                }
            }
        }
        
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        int row, col;
        if (!find_unassigned_location(grid, row, col))
        {
            return true;
        }
        
        for (int num = 1; num <= 9; num++) 
        {
            if (is_valid(grid, row, col, num)) 
            {
                grid[row][col] = num;
                if (SolveSudoku(grid)) 
                {
                    return true;
                }
                grid[row][col] = 0;
            }
        }
        
        return false;
    }
    bool find_unassigned_location(int grid[N][N], int &row, int &col) 
    {
        for (row = 0; row < N; row++) 
        {
            for (col = 0; col < N; col++) 
            {
                if (grid[row][col] == 0) 
                {
                    return true;
                }
            }
        }
        return false;
    }
    void printGrid (int grid[N][N]) 
    {
        for (int row = 0; row < N; row++) 
        {
            for (int col = 0; col < N; col++) 
            {
                cout << grid[row][col] << " ";
            }
            // cout << ' ';
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends