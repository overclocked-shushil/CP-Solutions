class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        a = s.split(" ")
        n = len(a)
        store = []
        for i in range (n):
            if a[i].isdigit() :
                store.append(int(a[i]))
        i = 0
        for j in range (1,len(store)):
            if (store[i]<store[j]):
                i+=1
        if (i == len(store)-1):
            return True
        else:
             return False
            


        
        