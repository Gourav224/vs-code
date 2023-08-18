import java.util.*;

public class Solution2 {
    public static int minimumTime(int[][] heights, int m, int n) {
        int[][] dist = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dist[i][j] = Integer.MAX_VALUE;
            }
        }
        int[] dr = {1, 0, -1, 0};
        int[] dc = {0, 1, 0, -1};
        PriorityQueue<Triple> q = new PriorityQueue<>((x, y) -> x.distance - y.distance);
        q.add(new Triple(0, 0, 0));
        dist[0][0] = 0;
        while (!q.isEmpty()) {
            Triple t = q.poll();
            int row = t.row;
            int col = t.col;
            int eff = t.distance;
            if (row == n - 1 && col == m - 1) {
                return eff;
            }
            for (int i = 0; i < 4; i++) {
                int nrow = row + dr[i];
                int ncol = col + dc[i];
                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m) {
                    int neweff = Math.max( Math.abs(heights[nrow][ncol] - heights[row][col]),eff);
                    if (neweff < dist[nrow][ncol]) {
                        dist[nrow][ncol] = neweff;
                        q.add(new Triple(nrow, ncol, neweff));
                    }
                }
            }
        }
        return 0;
    }
    public static void main(String[] args) {
        int[][] heights = {{1, 2, 3}, {3,8,4}, {5,3,5}};
        int m = 3;
        int n = 3;
        int result = minimumTime(heights, m, n);
        System.out.println("Minimum time: " + result);
    }
    

   
}

class Triple {
    int distance, row, col;

    Triple(int row, int col, int distance) {
        this.distance = distance;
        this.row = row;
        this.col = col;
    }
}
