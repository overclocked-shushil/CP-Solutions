class Solution:
    def generateTag(self, caption: str) -> str:
        a = caption.strip()
        a = a.split(" ")
        for i in range(len(a)):
            if (i == 0 ):
                a[i] = a[i].lower()
            elif i!=0:
                a[i]= a[i].title()
        for i in range (len(a)):
            if (i == 0):
                    res = f"#{a[i]}"
                    res = res[:100]
            elif (i!=0):
                res += a[i]
                res = res[:100]
        return res
    
        
        