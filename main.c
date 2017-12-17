#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i,j;
    int cha=0,num=0;
    float avg,sum=0.0;
    FILE *fin,*fp;

    fin=fopen("myFile.txt","w");//open the myFile.txtfile for writing

    printf("Please enter charater in a line, no space allowed\n");
    scanf("%s",&i);//input a string from keyboard
    fprintf(fin,"%s",&i);//write the string to myFile.txt
    fclose(fin);//close the file
    fp=fopen("myFile.txt","r");
    printf("\nNumber found in line:\n");//open the myFile.txt again but for reading
    do{
            j=fgetc(fp);//read the string charater by charater

    if (j>='0' && j<='9')//if the current charater is numeric
            {   num++;//plus one to the total number of numeric charater found
                sum += j;//add the numeric charater found together

                printf("%c\t",j);}//print the current charater


    else//if the current charater is not numeric
        {   cha++;//plus one to the non-numeric charater found

        }

    }while (j!=EOF);//end the loop while reached the end of the file
    avg=(sum-48*num)/num;//calculate the average value of the sum of all numeric charaters by
                         //dividing the sum by the number of numeric charater found
    printf("\nNon-numeric Charater found:%d",cha-1);//print the number of non-numeric charater found
    printf("\nThe average of sum of number counted is:%.4f\n",avg);//print the average value
fclose(fp);//close the myFile.txt
}

