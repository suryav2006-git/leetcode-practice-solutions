class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        if not strs:
            return []
        
        anagram_map = defaultdict(list)
        
        for s in strs:
            freq = [0] * 26
            for char in s:
                freq[ord(char) - ord('a')] += 1
            
            key = tuple(freq)
            anagram_map[key].append(s)
            
        return list(anagram_map.values())