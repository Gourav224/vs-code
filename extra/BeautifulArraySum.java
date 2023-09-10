public class BeautifulArraySum {
    public static int minBeautifulSum(int n, int target) {
        int[] nums = new int[n];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            nums[i] = i + 1;
            sum += nums[i];
        }

        int adjustment = Math.max(0, sum - target);
        return sum - 2 * adjustment+1;
    }

    public static void main(String[] args) {
        int n1 = 2, target1 = 3;
        System.out.println(minBeautifulSum(n1, target1));  // Output: 4

        int n2 = 3, target2 = 3;
        System.out.println(minBeautifulSum(n2, target2));  // Output: 8

        int n3 = 1, target3 = 1;
        System.out.println(minBeautifulSum(n3, target3));  // Output: 1
    }
}
