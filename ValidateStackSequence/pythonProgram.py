class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack=[]
        j = 0
        for i in range(len(pushed)):
            stack.append(pushed[i])
            while len(stack) > 0 and (stack[len(stack) - 1] == pushed[j]):
                stack.pop()
                j = j + 1;

        return len(stack) == 0 