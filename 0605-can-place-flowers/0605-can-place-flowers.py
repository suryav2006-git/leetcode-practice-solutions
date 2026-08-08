class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        place = [0] + flowerbed + [0]

        for i in range(1, len(place)-1) :
            if ( place[i-1] == 0 and place[i] == 0 and place[i+1] == 0 ) :
                place[i] = 1
                n -= 1

        return n <= 0