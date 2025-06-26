This is a c introduction learned \
"puts()"
This function in c helps to print character by character until they encountered null
the puts charactet it puts "\n" at the end of the string ,hence for every string the size increases by one
'''
#include <stdio.h>

int main()
{

    int num = puts("Hello world"); // storing the returned value in num
    printf("\n%d", num);
      
    return 0;
}
output
Hello world
12

puts vs fputs
fputs does not contain "\n" at the end of the string
fputs is mainly used in writing into text file
gets vs fgets
gets has the limit of 19 characters
gets(char *str) is worked as scanf

/**
    Trigraphs in c
*/
This are three-character sequence in c which starts with two question marks(??)
followed by third special character
Trigraph	Replaces	Meaning
??=	#	Hash (preprocessor)
??/	\	Backslash
??'	^	Caret
??(	[	Left bracket
??)	]	Right bracket
??!	`	`
??<	{	Left brace
??>	}	Right brace
??-	~	Tilde
example  for trigraphs are
int arr??(3??)={1,2,3};
/*
    exponential form in c
    */
    2*10^4 =>2e^4
/*
 character constants
 */
 .
ent ofC'
 8.2
 '9'
 Character Constants
 13
 character constant is a single character that is enclosed within single quotes. Some valid character
 _ stants are
'$'
 'D'
 , ,
 e invalid character constants are
Invalid·
 'four'
 '#'
 Remark
 There should be only one character within quotes
 "d"
 "
 y
 Double quotes are not allowed
 No character between single quotes
 Single quotes missin

compound statement in c
any single statement or group of statements enclosed withing the curly braces are known as compound statements

{
    statement1;
    statement2;
    // more statements
}
/*comma operator*/
This opertor permits different expressions to appear in situations where only single expression is used,This expressions are sepearated using comma operator
sum=(a=1,b=2,c=3,a+b+c);
the value of sum is 6
/*
    prefix increment or decrement operator 
 */
    y=++x;
    or
    x=x+1;
    y=x
/*
    postfix increment or decrement operator 
 */
    y=x++;
    or
    y=x
    x=x+1
/*Type Conversion in c*/
There are two types of type conversions they are implicit and explicit
In implicit the conversion happend automatically between operands
ex:float val,c=10.4;
int d=10;
val=c+d=20.400000
In explicit type conversions they are conveted manually
div=(float)a/b;
/*functions in c*/
functions are used to perform certain tasks and processes ,where we give one or many inputs(arguments or parameters) and it generate a single output(return)
functions are of two types they are:
1. Library Functions
2. User defined Functions
library functions are such as <stdio.h>,<math.h>,<string.h>

