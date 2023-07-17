
from typing import List
from collections import defaultdict


class Solution:
    def isFrequencyUnique(self, n : int, arr : List[int]) -> bool:
        
        d = defaultdict(int)
        for i in range(n):
            d[arr[i]] +=1
        unqFreq = set([])
        for i in d:
            if(d[i] in unqFreq):
                return False
            else: unqFreq.add(d[i])
        return True