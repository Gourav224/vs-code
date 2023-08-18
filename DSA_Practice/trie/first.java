class Node{
    Node[] links;
    boolean flag;
    public Node(){
        links=new Node[26];
        flag= false;
        for(int i=0;i<26;i++){
            links[i]=null;
        }
    }
    void put(char ch,Node node){
        links[ch-'a']=node;
    }
    Node get(char ch){
        return links[ch-'a'];
    }
    boolean containsKey(char ch){
        return (links[ch-'a']!=null);
    }
    boolean isEnd(){
        return flag;
    }
    void setEnd(){
        flag=true;
    }
}
class Trie {
    private Node root;
    public Trie() {
        root=new Node();
        
    }
    
    public void insert(String word) {
        Node node=root;
        for(int i=0;i<word.length();i++){
            if(!node.containsKey(word.charAt(i))){
                node.put(word.charAt(i),new Node());
            }
            node=node.get(word.charAt(i));
        }
        node.setEnd();
    }
    
    public boolean search(String word) {
        Node node=root;
        for(int i=0;i<word.length();i++){
            if(!node.containsKey(word.charAt(i))){
                return false;
            }
            node=node.get(word.charAt(i));
        }
        return node.isEnd();
    }
    
    public boolean startsWith(String word) {
         Node node=root;
        for(int i=0;i<word.length();i++){
            if(!node.containsKey(word.charAt(i))){
                return false;
            }
            node=node.get(word.charAt(i));
        }
        return true;
    }
}

class first{
    public static void main(String[] args) {
    int n = 5;
	int type[] = {1, 1, 2, 3, 2};
	String value[] = {"hello", "help", "help", "hel", "hel"};
	Trie trie=new Trie();
	for (int i = 0; i < n; i++) {
		if (type[i] == 1) {
			trie.insert(value[i]);
		}
		else if (type[i] == 2) {
			if (trie.search(value[i])) {
				System.out.println( "true" );
			}
			else {
				System.out.println("false");
			}
		}
		else {
			if (trie.startsWith(value[i])) {
				System.out.println("true" );
			}
			else {
				System.out.println("false");
			}
		}
	}
    }
}