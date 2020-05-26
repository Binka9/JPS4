#define STR_SIZE ((size_t)40)
int broi_redove(fp)
{
	char *str = getc(fp);
	int br = 0;
	while (str != EOF)
	{
		if (str == '\n')
		{
			br++;
		}
		str = getc(fp);
	}
	return br;
}
struct route
{
	char *name_of_route;
	char *initial_cordinates;
	char *final_cordinates;
	char *type_of_road;
	char *type_of_road1;
	char *type_of_road2;
}typedef Route;


char save_in_file(char* niz, FILE *fp){
	while (*niz != '\0')
	{
		putc(*niz, fp);
		niz++;
	}
}
