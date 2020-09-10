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
    while  last_node.next:
       last_node = last_node.next
    last_node.next = new_node
  
  def printList(self):
    curr_node = self.head
    while curr_node:
      print(curr_node.data)
      curr_node = curr_node.next

  def prepend(self,data):
    head = self.head;
    new_node = Node(data)
    new_node.next = head
    self.head = new_node


myList = LinkedList()
myList.append("A")
myList.append("B")
myList.append("C")
myList.prepend("ALPHABETS")

myList.printList()        
