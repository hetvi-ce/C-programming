#include<stdio.h>
void main()
{
    char notes[100],rev[100],cmp[100],cpy[100],con[100];
    int i,j=0;
    printf("Enter notes :");
    gets(notes);

    //length
    int len=0;
    for(i=0;notes[i]!='\0';i++)
    {
        len++;
    }
    printf("lenth of notes is %d \n\n",len);

    //reverse
    i=0,j=0;
    for(i=len-1;i>=0;i--)
    {
        rev[j]=notes[i];
        j++;
    }
    rev[j]='\0';
    printf("reversed notes : %s \n\n",rev);

    //compare
    int result=0;
    i=0,j=0;
    printf("Enter another string :");
    scanf("%s",&cmp);
    while(notes[i]!='\0' && cmp[j]!='\0' && notes[i]==cmp[j])
    {
        i++;
    }
    result=notes[i]-cmp[j];
    if (result==0)
    {
        printf("string are equal.\n\n");
    }
    else if (result>0)
    {
        printf("notes string is greater.\n\n");
    }
    else
    {
        printf("notes string is smaller.\n\n");
    }

    //copy
    i=0;
    printf("copy notes string in copy string\n");
    while(notes[i]!='\0')
    {
        cpy[i]=notes[i];
        i++;
    }
    cpy[i]='\0';
    printf("copy string :%s\n\n",cpy);

    //Concatenate
    printf("Concatenate notes string and comparison string in Concatenate string.\n");
    i=0;
    while(notes[i]!='\0')
    {
        con[i]=notes[i];
        i++;
    }
    while (cmp[j]!='\0')
    {
        con[i]=cmp[j];
        i++;
        j++;
    }
    con[i]='\0';
    printf("Concatenate string : %s\n\n",con);

    //
}
