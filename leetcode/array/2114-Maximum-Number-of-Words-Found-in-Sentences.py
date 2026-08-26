class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        store = []
        for i in range (len(sentences)):
            l = sentences[i].split(" ")
            store.append(len(l))
        store.sort()
        return store[-1]
            
        