class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        Arrays.sort(players);
        Arrays.sort(trainers);

        int n1 = players.length;
        int n2 = trainers.length;

        int i =0, j=0;
        int count = 0;

        while(i<n1 && j< n2) {
            if(players[i] <= trainers[j]) {
                count++;
                i++ ;
            } 
            j++ ;
        } 
        return count;
    }
}