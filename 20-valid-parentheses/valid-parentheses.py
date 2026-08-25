class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]


        for ch in s:
            if ch=='(' or ch=='[' or ch=='{':
                stack.append(ch)
            else:
                if not stack:
                    return False  #if stack is empty

                temp=stack.pop()

                if(ch==')' and temp!='(') or (ch==']' and temp!='[') or (ch=='}' and temp!='{'):
                    return False

        return len(stack)==0
       
        
        