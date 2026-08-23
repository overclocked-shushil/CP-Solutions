class Solution(object):
    def maxNumberOfBalloons(self, text):
        if len(text) < 7:
            return 0
        freqb = 0
        freqa = 0
        freql = 0
        freqo = 0
        freqn = 0
        for i in text:
            if i == "b":
                freqb += 1
            elif i == "a":
                freqa += 1
            elif i == "l":
                freql += 1
            elif i == "o":
                freqo += 1
            elif i == "n":
                freqn += 1

        freql = freql // 2
        freqo = freqo // 2
        if freqb == 0 or freqa == 0 or freql == 0 or freqo == 0 or freqn == 0:
            return 0
        else:
            return min(freqb, freqa, freql, freqo, freqn)
