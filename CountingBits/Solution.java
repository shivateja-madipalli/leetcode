public class Solution {
    public int[] countBits(int num) {
        int[] res = new int[num + 1];
        res[0] = 0;
        int n = 1;
        for (int i = 1; i <= num; i++) {
            if (i - n >= n) n <<= 1;
            res[i] = 1 + res[i - n];
        }
        return res;
    }
}
