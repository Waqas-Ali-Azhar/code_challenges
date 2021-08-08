#https://leetcode.com/problems/min-stack/

class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.box = []

    def push(self, val: int) -> None:
        self.box.append(val)
        return None

    def pop(self) -> None:
        if(self.box[0] is not None):
            self.box.pop()
        return None

    def top(self) -> int:
        if self.box[0] is not None:
            return self.box[-1]
        return None
    
    def getMin(self) -> int:
        return min(self.box) if not len(self.box) ==0 else -1
        