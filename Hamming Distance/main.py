class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        distance = 0
        z = x^y
        while z:
            distance +=1
            z &= z-1
        return distance
        
