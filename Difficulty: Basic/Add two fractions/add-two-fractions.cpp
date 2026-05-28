/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2, int den2) {
    
      int num = (num1*den2)+(num2*den1);
      int den = den1*den2;
      
      int g = __gcd(num,den);
      num /=g;
      den /=g;
      cout<<num<<"/"<<den<<endl;
        
        
        
    
}