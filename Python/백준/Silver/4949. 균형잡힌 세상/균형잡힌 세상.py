class Stack:
    def __init__(self):
        self.top = []
    def __str__(self):
        return str(self.top)
    def push(self, item):
        self.top.append(item)
    def pop(self):
        if not self.isEmpty():
            return self.top.pop(-1)
    def isEmpty(self):
        return len(self.top) == 0
    def size(self):
        return len(self.top)
    def clear(self):
        self.top = []
    def peek(self):
        if not self.isEmpty():
            return self.top[-1]
        
def checkBracketParenth(element):
    stack = Stack()
    for char in element:
        if char in ("(", "["):
            stack.push(char)
        elif char in (")", "]"):
            if stack.isEmpty():
                return "no"
            else:
                left = stack.pop()
                if (char == ")" and left != "(") or (char == "]" and left != "["):
                    return "no"
    return "yes" if stack.isEmpty() else "no"

while True:
    element = input()
    if element == ".":
        break
    print(checkBracketParenth(element))