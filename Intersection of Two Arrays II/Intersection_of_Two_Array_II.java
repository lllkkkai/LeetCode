class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        List<Integer> temp=new ArrayList<Integer>();
        List<Integer> list=new ArrayList<Integer>();
        
        for(int x:nums1){
        	temp.add(x);
        }
        for(int x:nums2){
        	if(temp.contains(x)){
        		list.add(x);
        		temp.remove((Integer)x);
        	}
        }
        int[]res=new int[list.size()];
        for(int i=0;i<res.length;i++){
        	res[i]=list.get(i);
        }
        return res;
    }
}