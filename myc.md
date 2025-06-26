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
/*perfect_square problem*/
#include<stdio.h>
void main(){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        int fla=0;
        if(n==1){
                printf("\nit is a perfect square\n");
        }
        else{
                for(int i=2;i<=n/2;i++){
                        if(i*i==n){
                                printf("\nit is the perfect square");
                                fla=1;
                        }
                }
                if(fla==0){
                        printf("\nit is not a perfect square");
                }
        }
}

/*sum of rows and columns in an 2d array problem*/
#include<stdio.h>
int rsum(int a[][100],int i,int j);
void printing(int a[][100],int n,int m);
int csum(int a[][100],int i,int j);
void printing(int a[][100],int n,int m){
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
}

int rsum(int a[][100],int i,int j){
        int sum=0;
        for(int k=0;k<=j;k++){
                sum=sum+a[i][k];
        }
        return sum;
}
int csum(int a[][100],int i,int j){
        int sum=0;
        for(int k=0;k<=i;k++){
                sum=sum+a[k][j];
        }
        return sum;
}

void main(){
        int n,m;
        int a[100][100];
        printf("enter the rows and columns of the matrix:");
        scanf("%d %d",&n,&m);
        printf("\nenter the matrix:\n");
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        scanf("%d",&a[i][j]);
                }
        }
        for(int i=0;i<n;i++){
                a[i][m]=rsum(a,i,m-1);
        }
        for(int i=0;i<=m;i++){
                a[n][i]=csum(a,n-1,i);
        }
        printing(a,n+1,m+1);
}
output 
1       2       3       6
4       5       6       15
7       8       9       24
12      15      18      45


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

