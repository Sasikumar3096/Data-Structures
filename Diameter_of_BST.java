import java.*;
public class Diameter_of_BST {

	class Node{
		int item;
		Node left,right;
		Node(int item){
			this.item=item;
			left=right=null;
		}
	}
	Node Tree;
	Diameter_of_BST(){
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
	int diameter() {
		return calculate_diameter(Tree);
	}
	int calculate_diameter(Node root) {
		if(root == null)
			return 0;
		int option1 = height(root.left)  + height(root.right);
		int option2 = calculate_diameter(root.left);
		int option3 = calculate_diameter(root.right);
		return Math.max(option1,Math.max(option2,option3));
	}
	int height(Node root) {
		if(root==null)
			return 0;
		return 1+ Math.max(height(root.left) , height(root.right));
	}
	public static void main(String[] args) {
		Diameter_of_BST tree = new Diameter_of_BST();
		tree.insert(50); 
        tree.insert(30); 
        tree.insert(20); 
        tree.insert(40); 
        tree.insert(70); 
        tree.insert(60); 
        tree.insert(80);
        /*
         	50
           /    \
          30     70
         /  \	 / \
        20   40  60 80
         */

        System.out.println("The Diameter is :" + tree.diameter());
	 
	}
}

