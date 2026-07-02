class Solution {
    public double findMedianSortedArrays(int[] a, int[] b) {
        int n1 = a.length;
        int n2 = b.length;
        int n = n1 + n2;

        int ind2 = n / 2;
        int ind1 = ind2 -1;

        int i=0, j=0;
        int count = 0;

        int ind1ele = -1;
        int ind2ele = -1;

        while( i<n1 && j<n2) {
            if(a[i] < b[j]) {
                if(count == ind1) ind1ele = a[i];
                if(count == ind2) ind2ele = a[i];
                count++ ;
                i++ ;
            }
            else {
                if(count == ind1) ind1ele = b[j];
                if(count == ind2) ind2ele = b[j];
                count++ ;
                j++ ;
            }
        }
        while(i<n1) {
            if(count == ind1) ind1ele = a[i];
            if(count == ind2) ind2ele = a[i];
            count++ ;
            i++ ;
        }
        while(j < n2) {
            if(count == ind1) ind1ele = b[j];
            if(count == ind2) ind2ele = b[j];
            count++ ;
            j++ ;
        }

        if(n%2==1) {
            return ind2ele;
        }

        return (ind1ele + ind2ele) / 2.0;
    }
}