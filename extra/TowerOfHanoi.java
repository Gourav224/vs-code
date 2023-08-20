public class TowerOfHanoi {
    public static void main(String[] args) {
        int numDisks = 3;
        solveTowerOfHanoi(numDisks, 'A', 'C', 'B');
    }

    public static void solveTowerOfHanoi(int n, char source, char target, char auxiliary) {
        if (n == 1) {
            System.out.println("Move disk 1 from peg " + source + " to peg " + target);
            return;
        }

        solveTowerOfHanoi(n - 1, source, auxiliary, target);
        System.out.println("Move disk " + n + " from peg " + source + " to peg " + target);
        solveTowerOfHanoi(n - 1, auxiliary, target, source);
    }
}
