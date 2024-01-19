import java.util.*;

public class DetectCycleInGraph {
    public static void main(String[] args) {
        int[] A = { 3, 1, 2 };
        int[] B = { 2, 3, 1 };
        System.out.println(Solution(A, B));
    }

    public static boolean Solution(int[] A, int[] B) {
        if (A == null || B == null || A.length != B.length)
            return false;

        int n = A.length;
        List<List<Integer>> graph = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }
        for (int i = 0; i < n; i++) {
            graph.get(A[i]).add(B[i]);
        }
        boolean[] visited = new boolean[n + 1];
        for (int i = 1; i < n; i++) {
            if (!visited[i]) {
                boolean cycle = Dfs(i, -1, graph, visited);
                if (cycle)
                    return true;
            }
        }
        return false;

    }

    public static boolean Dfs(int u, int parent, List<List<Integer>> graph, boolean[] visited) {
        visited[u] = true;
        for (int v : graph.get(u)) {
            if (v == parent)
                continue;
            if (visited[v])
                return true;
            if (Dfs(v, u, graph, visited)) {
                return true;
            }
        }
        return false;
    }
}