class Solution(object):
    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        five = ten = 0

        for bill in bills:
            if(bill == 5): five+=1

            elif (bill == 10) :
                if(five != 0) :
                    five = five - 1
                    ten = ten + 1
                else : 
                    return False

            elif (bill == 20) :
                if(five != 0 and ten != 0):
                    ten = ten - 1
                    five = five - 1
                elif(five >= 3) :
                    five = five - 3
                else :
                    return False
                    
        return True