class Solution:
    def decodeString(self, s: str) -> str:
        stack = []; curNum = 0; curStr = ''
        for c in s:
            if c=='[':
                stack.append(curStr)
                stack.append(curNum)
                curStr=''
                curNum=0
            elif c==']':
                num=stack.pop()
                prevString = stack.pop()
                curStr = prevString + num*curStr
            elif c.isdigit():
                curNum = curNum*10+int(c)
            else:
                curStr+=c
        return curStr
