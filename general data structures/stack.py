class Stack():
  def __init__(self):
    self.items = []

  def push(self, item):
    self.items.append(item)

  def peak(self):
    return self.items[len(self.items)-1]
    
  def pop(self):
    return self.items.pop()

  def is_empty(self):
    return self.items == []

  def get_stack(self):
    return self.items

def check_balanced_string(list):
  s = Stack()
  for x in list:
    if (x == ")"):
      temp = s.peak()
      if(temp == "("):
        s.pop()
      else:
        return 0
    elif x == "}":
      temp = s.peak()
      if(temp == "{"):
        s.pop()
      else:
        return 0
    elif x == "]":
      temp = s.peak()
      if (temp == "["):
        s.pop()
      else:
        return 0
    else:
      s.push(x)
      

  return 1    



list1 = ["(","{","}",")"];
list2 = ["[",")","}","{"];

print(check_balanced_string(list1))
print(check_balanced_string(list2))