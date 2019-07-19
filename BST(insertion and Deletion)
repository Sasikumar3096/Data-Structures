
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
	void delete(int item) {
		Tree=deleteItem(Tree,item);
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
	Node deleteItem(Node root,int item) {
		if(root == null)
			return root;
		if(root.item==item) {
				if(root.left==null)
					root=root.right;
				else
					if(root.right==null)
						root = root.left;
				else {
					root.item = min(root.right);
					deleteItem(root.right,root.item);
				}
				
			}
		else {
			if(item>root.item)
				root.right = deleteItem(root.right,item);
			else
				root.left = deleteItem(root.left,item);
		}
		return root;
	}
	int min(Node root) {
		int min_val= root.item;
		while(root.left!=null) {
			min_val = root.left.item;
			root=root.left;
		}
		return min_val;
		
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
		tree.insert(50); 
        tree.insert(30); 
        tree.insert(20); 
        tree.insert(40); 
        tree.insert(70); 
        tree.insert(60); 
        tree.insert(80);
      System.out.println("Before Deletion");
        tree.display();
        System.out.println();
      System.out.println("After Deletion");
        tree.delete(20); 
        tree.delete(30); 
        tree.delete(50);
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

