import java.util.*;
public class Graph{
    public static void main(String[] args) {
        int[][] mar={{1,1,1,0},{1,1,1,0},{1,1,1,0},{0,0,0,1}};
        int c=Solution.findNumOfStates(mar, 4);
        System.out.println(c);
        
    }
}

class Solution {
    private static void dfs(int node, ArrayList<ArrayList<Integer>> adj, boolean[] vis) {
        vis[node] = true;
        for (int it : adj.get(node)) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

    public static int findNumOfStates(int[][] roads, int V) {
        ArrayList<ArrayList<Integer>> adjLs = new ArrayList<>();
        for (int i = 0; i <= V; i++) {
            adjLs.add(new ArrayList<>());
        }
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) { // Changed j < V to j <= i
                if (roads[i][j] == 1 && i!=j) {
                    adjLs.get(i+1 ).add(j +1);
                }
            }
        }
        for(int i=1;i<V;i++){
            System.out.print(i);
            for(int j:adjLs.get(i)){
                System.out.print("->"+j);
            }
            System.out.println();
        }
        
        boolean[] vis = new boolean[V + 1];
        int cnt = 0;
        for (int i = 1; i <= V; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, adjLs, vis);
            }
        }
        return cnt;
    }
}
