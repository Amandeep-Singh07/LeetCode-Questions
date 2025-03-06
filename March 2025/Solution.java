class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int size = grid.length;
        int n = size * size;
        int[] count = new int[n + 1];

        int repeated = -1, missing = -1;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int num = grid[i][j];
                count[num]++;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                repeated = i;
            } else if (count[i] == 0) {
                missing = i;
            }
        }

        return new int[] { repeated, missing };
    }
}
