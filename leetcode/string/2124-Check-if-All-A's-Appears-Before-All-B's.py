class Solution:
    def checkString(self, s: str) -> bool:
        store = s
        sorted_store = "".join(sorted(store))
        if s == sorted_store : return True
        
        return False