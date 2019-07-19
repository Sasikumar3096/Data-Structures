
public class BST {

	class Node{
		int item;
		Node left,right;
		Node(int item){
			this.item=item;
			left=right=null;
		}
	}
	Node Tree;
	BST(){
		Tree = null;
	}
	void insert(int item) {
		Tree = insertItem(Tree,item);
	}
	Node insertItem(Node root,int item) {
		if(root == null) {
			root = new Node(item);
		}
		else {
			if(item < root.item)
				root.left = insertItem(root.left,item);
			else
				if(item>root.item)
				root.right = insertItem(root.right,item);
		}
		return root;
	}
	void display() {
	//	System.out.println(Tree.right.item);
		System.out.print("INORDER: ");
		inOrder(Tree);
		System.out.print("\nPREORDER: ");
		preOrder(Tree);
		System.out.print("\nPOSTORDER ");
		postOrder(Tree);
		System.out.println();
	}
	void inOrder(Node root) {
		if(root==null)
			return;
		inOrder(root.left);
		System.out.print(root.item+" ");
		inOrder(root.right);
	}
	void preOrder(Node root) {
		if(root==null)
			return;
		System.out.print(root.item+" ");
		preOrder(root.left);
		preOrder(root.right);
	}
	void postOrder(Node root) {
		if(root==null)
			return;
		postOrder(root.left);
		postOrder(root.right);
		System.out.print(root.item+" ");
	}

	public static void main(String[] args) {
		BST tree = new BST();
		/*tree.insert(50);
		tree.insert(30);
		tree.insert(20);
		tree.insert(40);
		tree.insert(70);
		tree.insert(60);
		tree.insert(80);
		tree.display();
		*/
		tree.insert(4);
		tree.insert(2);
		tree.insert(5);
		tree.insert(1);
		tree.insert(3);
		tree.display();
		/*
		 	4
		  /	   \
		 2		5
		/  \      \
	  1		3		6
		 */
	}
}

