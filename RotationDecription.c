int main() {
    
    char input[] = "LCOKG";
    int n = 5;
    int counter;
    int key = 2;
    for(counter = 0; counter<n; counter++){
        input[counter]= (input[counter] - key);
        if(input[counter]>90){
            printf("%c\n", input[counter]-26);
        }
        else if(input[counter]<65){
            printf("%c\n", input[counter]+26);
        }
        else {
            printf("%c\n", input[counter]);
        }  
         
    }
       
  return 0;
}
