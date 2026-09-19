class Solution:
    def __init__(self):
        self.hasG = False
        self.hasP = False
        self.hasM = False

    def garbageCollection(self, garbage, travel):
        n = len(garbage)
        res = 0

        for i in range(n - 1):
            res += 3 * travel[i]

        for s in garbage:
            res += len(s)

        for i in range(n - 1, 0, -1):
            if "G" not in garbage[i]:
                res -= travel[i - 1]
            else:
                break

        for i in range(n - 1, 0, -1):
            if "P" not in garbage[i]:
                res -= travel[i - 1]
            else:
                break

        for i in range(n - 1, 0, -1):
            if "M" not in garbage[i]:
                res -= travel[i - 1]
            else:
                break

        return res