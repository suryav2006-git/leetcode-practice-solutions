class Solution {
    public int[][] sortTheStudents(int[][] score, int k) {
        int n = score.length;
        PriorityQueue<int[]> preq = new PriorityQueue<>(
            (a, b) -> Integer.compare(b[0], a[0])
        );
        
        for (int i = 0; i < n; i++) {
            preq.add(new int[]{score[i][k], i});
        }
        int[][] result = new int[n][];
        int idx = 0;
        
        while (!preq.isEmpty()) {
            int[] x = preq.poll();
            result[idx++] = score[x[1]];
        }
        return result;
    }
}
