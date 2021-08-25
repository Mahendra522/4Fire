// Java program to convert lower case letters into upper case and vise-versa.
class LetterConversion{
    void upperToLower(String str){
        int length = str.length();
        int i = 0;
        // now the programmers task is to convert the given String into lower case.
        
        char[] strArrayUpper = str.toCharArray();
        char[] strArrayLower = new char[length];
        for(char c : strArrayUpper){
            strArrayLower[i] = (char)((int)c+32);
            i++;
        }
        for(char c : strArrayLower) System.out.print(c+" ");
    }
    
    void lowerToUpper(String str){
        int length = str.length();
        int i = 0;
        char[] strArrayLower = new char[length];
        strArrayLower = str.toCharArray();
        char[] strArrayUpper = new char[length];
        for(char c : strArrayLower){
            strArrayUpper[i] = (char)(((int)c)-32);
            i++;
        }
        for(char c : strArrayUpper) System.out.print(c+" ");
    }
    
    void randomToLower(String str){
        int length = str.length();
        int index = 0;
        char[] strArrayRandom = new char[length];
        strArrayRandom = str.toCharArray();
        // [65 to 90] --> Capital Letters
        // [97 to 122] --> Small Letters     
        int count = 0;
        for(char c : strArrayRandom){
            if(((int)c)>=65 && ((int)c)<=90){
                index = str.indexOf(c,count);
                strArrayRandom[index] = (char)(((int)c)+32);
            }
            count++;
        }
        for(char c : strArrayRandom) System.out.print(c);
    }
    
    void randomToUpper(String str){
        int length = str.length();
        int index = 0,count = 0;
        char[] strArrayRandom = new char[length];
        strArrayRandom = str.toCharArray();
        
        for(char c : strArrayRandom){
            if(((int)c)>=97 && ((int)c)<=122){
                index = str.indexOf(c,count);
                strArrayRandom[index] = ((char)(((int)c)-32));
            }
            count++;
        }
        for(char c : strArrayRandom) System.out.print(c);
    }
    
}
public class LowerToUpper{
    public static void main (String[] args) {
        String strUpper = new String("RITESH ");
        String strLower = new String("mahendra mahajan");
        String random = new String("Mamta MahaJAN Is NAME of my MoTHeR");
        LetterConversion lc = new LetterConversion();
        //lc.upperToLower(strUpper);
        lc.randomToUpper(random);
        
    }
}
