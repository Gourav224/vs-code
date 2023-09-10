
public class PrintBrack{
    public static void main(String[] args) {
        printWellFormedParanthesis(1000);
    }
    private static void backtrack(String current,int open,int close,int n){
		if(current.length()==2*n){
			System.out.println(current);
			return ;
		}
		if(open<n){
			backtrack(current+"(", open+1, close, n);
		}
		if(close<open){
			backtrack(current+")", open, close+1, n);
		}

	}
	public static void printWellFormedParanthesis( int n){
		
		// Write your code here
		backtrack("", 0, 0, n);

	}
}
 