#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i[256];int j;int a[256];int b=0;float s;
    float avg;

    FILE *fin;

    fin=fopen("text.txt","w");

    printf("Please enter charater in a line, no space allowed\n");

    scanf("%s",&i);

    fprintf(fin,"%s\n",i);

    //fscanf(fin,"%s",&i);
    printf("Number found:\n");
    for(j=0; i[j]!='\0'; j++)

        {if (i[j]>='0'&& i[j]<='9')

            {printf("%c\t",i[j]);
             a[b]=i[j]-'0';
             s=s+a[b];
             b++;

            }

}
avg=s/b;
printf("\nTotal number of numeric charaters is:%d",b);
printf("\nAverage of the number is:%f",avg);
    //printf("%s\n",i);




    //fclose(fin);


}
