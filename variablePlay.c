int main(){
 //first try different variable types
 char hey = 'h';
 printf("just made my first variable, hey, which should be h: %c\n", hey);
 char numChar = 120;
 printf("made another char variable but this one has a number in it: %c\n", numChar);
 unsigned char unsignedChar = 250;
 printf("made another char, unsigned, should be 250: %c\n", unsignedChar);
 float f = 3.4422113;
 printf("made float f, should be 3.4422113: %f\n", f);
 long l = 344221134422113;
 printf("made long l, should be 344221134422113: %ld\n", l);
 printf("\n now let's see what i have in my memory, don't initialize variables yet \n");
 char nC;
 float nF;
 long nL;
 printf("here is nc: %c, here is nf: %f. here is nl: %ld\n", nC, nF, nL);
 printf("\n i wonder what happens if you put the wrong formatting? \n");
 printf("here is nc formatted as a short: %u \n here is nF formatted as a char: %c \n", nC, nF);
 printf("done \n");
 return 0;
}
