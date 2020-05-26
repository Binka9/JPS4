char korectni_danni()
{   char a;
    scanf("%c", &a);
    while(a)
    {
        if ((a>'0')&&(a<'6')) break;
        else
            {
        scanf("%c", &a);
       }
    }
    return a;
}
int Option()
{
    char *option;
    printf("1. Insert route\n ");
    printf("2. Choose route\n ");
    printf("3. Saved route \n");
    printf("Chose option\n");
   option=korectni_danni();
    return option;
}
int Option2()
{
    int *option2;
    printf("What type of road do you what:\n");
    printf("1. Whitout tol-sistem\n");
    printf("2.Road whit highway: \n");
    printf("3.At least crossroud\n");
    printf("Chose option\n");
   option2=korectni_danni();
    return option2;
}
void chetene_na_file(fp)
{
char c = getc(fp);
while (c != EOF)
{
printf("%c", c);
c = getc(fp);
}
}
