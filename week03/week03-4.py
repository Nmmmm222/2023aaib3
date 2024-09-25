#在一堆草堆裡haystack 找到一隻needle
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)