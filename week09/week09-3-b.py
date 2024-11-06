class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort() #先小到大排好

        total=0
        for i in range (1,len(salary)-1): #避開最左邊 最右邊
            total+=salary[i]
        return total/(len(salary)-2) #除法 算出平均