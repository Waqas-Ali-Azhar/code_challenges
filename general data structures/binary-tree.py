class Node():
  def __init__(self,data):
    self.data = data;
    self.left = None
    self.right = None

class BinaryTree():
  def __init__(self):
    self.head = None
    self.root = None

  
  def addNode(self,data):
    new_node = Node(data)
    if self.head is None:
        self.head = new_node
        self.root = new_node
        return

    curr = self.head
    while(curr.data < new_node.data and curr.right):
      curr = curr.right
    while(curr.data > new_node.data and curr.left):
      curr = curr.left

    if(curr.data < new_node.data):
      curr.right = new_node
    elif(curr.data > new_node.data):
      curr.left = new_node

  def inOrderTraversal(self,root):
    if(root.left):
      self.inOrderTraversal(root.left)
    if(root.data):
      print(root.data)
    if(root.right):  
      self.inOrderTraversal(root.right)  


    


newTree = BinaryTree()
newTree.addNode(5)
newTree.addNode(4)
newTree.addNode(7)
newTree.addNode(1)
newTree.addNode(6)
newTree.inOrderTraversal(newTree.root)


          