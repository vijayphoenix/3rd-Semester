void mergesort(int a[],int l,int r){
    if(l<r) {
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        int temp[r-l+1];                                //merging two sorted arrays
        int i=l,j=mid+1,k=0;
        while(i<=mid || j<=r) {
            if(j<=r && (i>mid || a[j]<a[i])){
                temp[k]=a[j];
                j++;
            }
            else if(i<=mid && (j>r || a[j]>=a[i])){     //Stable sort
                temp[k]=a[i];
                i++;
            }
            k++;
        }
        for (i = l; i <=r; ++i)a[i]=temp[i-l];
    }
}