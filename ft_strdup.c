

char *ft_strdup(char *src)
// char* strdup(const char* p)
{
    char* a;
    a = (char*)malloc(ft_strlen(src) + 1);
    return a ? strcpy(a, src) : a;
}