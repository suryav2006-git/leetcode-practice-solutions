class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int empty = 1;

        for(int flower : flowerbed) {
            if(flower == 0) {
                empty++ ;
            }
            else  {
                n = n - ((empty - 1) / 2);
                empty = 0;
            }
        }
        n = n - (empty / 2);

        return n<=0;
    }
}