class Node():
  def __init__(self,data):
    self.data = data
    self.next = None

class LinkedList():
  def __init__(self):
    self.head = None

  def append(self,data):
    new_node = Node(data)
    if self.head is None:
      self.head = new_node
      return
    last_node = self.head
    while last_node.next:
      last_node = last_node.next
      
    last_node.next = new_node        

  def printList(self):
    curr_node = self.head
    while curr_node:
      print(curr_node.data)
      curr_node = curr_node.next

  def insertAfterNode(self,prevNode,data):
    curr_node = self.head
    while curr_node:
      curr_node = curr_node.next
      if(curr_node.data == prevNode.data):
        temp = curr_node.next
        new_node = Node(data)    
        curr_node.next = new_node
        new_node.next = temp
        break

myList = LinkedList()
myList.append("A")
myList.append("B")
myList.append("C")
myList.insertAfterNode(myList.head.next,"X")

myList.printList()    

      