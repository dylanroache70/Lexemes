//{

int j = 0 ;

//}

 

//this is the rule to recognize tokens

 

This counts the number of keywords

"begin"|"if"|"else" {j++;

If(isKeyword(ch)==1)

printf("\n keywords : %s", ch);}

 

"int"|"while" {j++;

printf("\t keywords : %s",ch);}

 

// counts the number of identifiers

[a-zA-Z0-9_]* {j++;

printf("\n identifier : %s", ch);}

 

 

 

// counts the number of operators

char ch, buffer[15],operators[]= "/"|"*"|"="|"%"|"+"|"-"|"++" {j++;

printf("\noperator : %c", ch);}

 

//counts the number of separators

[(){}|, ;] {j++;

printf("\n separator : %s", ch);}

 

// counts the number of floats

[0-9]*"."[0-9]+ {n++;

printf("\n float : %s", ch);}

 

// counts the number of integers

[0-9]+ {n++;

printf("\n integer : %s", ch);}                     

 

. ;

%%

 

 

//This is the main method of the program

int main()

 

{

  

   ch();

  

   printf("\n total no. of token = %s\n", n);

 