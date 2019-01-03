class Solution {
    public boolean judgeCircle(String moves) {
        int hDirection = 0; //horizontal direction
        int vDirection = 0; //vertical direction
        for (int i = 0; i < moves.length(); i++) {
            switch (moves.charAt(i)) {
                case 'U':
                    vDirection++;
                    break;
                case 'D':
                    vDirection--;
                    break;
                case 'L':
                    hDirection--;
                    break;
                case 'R':
                    hDirection++;
                default:
                    break;
            }
        }
        return vDirection == 0 && hDirection == 0 ? true : false;
    }
}