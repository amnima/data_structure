# python3

def are_matching(left, right):
    return (left + right) in ["()", "[]", "{}"]

def find_mismatch(text):
    stack = []
    position = 1 
    for char in text:
        if char in ("(", "[", "{"):
            stack.append((char,position))
        elif char in (")", "]", "}"):
            if not stack:
                return position
            
            
            top = stack.pop()
            if are_matching(top[0], char) == False:
                return position
        position += 1
  
    if stack:
        top = stack.pop()
        return top[1]
                
    return "Success"
            

def main():
    text = input()
    mismatch = find_mismatch(text)
    # Printing answer, write your code here
    print(mismatch)


if __name__ == "__main__":
    main()