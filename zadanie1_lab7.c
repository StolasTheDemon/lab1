int main()
{
    char str[30];
    printf("\nVvedite stroku simvolov:\n");	//ввод исходных данных
    printf("\n str=");
    scanf("%s", str);
    int len = strlen(str);
    int i, j, k, m;
    char ch;
    for (i = 0; i < len; i++)
    {
        if (!isdigit(str[j]))
        {
            for (j = i + 1; j < len; j++)
            {
                if (isdigit(str[j]))
                {
                    ch = str[j];
                    for (m = j; m > i; m--)
                        str[m] = str[m - 1];
                    str[i] = ch;
                    k = i + 1;
                    break;
                }
            }
        }
    }
    printf("%s\n", str);
    for (i = 0; i < len; i++)
    {
        if (!isdigit(str[j]))
        {
            for (j = i + 1; j < len; j++)
            {
                if (isdigit(str[j]))
                {
                    ch = str[j];
                    for (m = j; m > i; m--)
                        str[m] = str[m - 1];
                    str[i] = ch;
                    k = i + 1;
                    break;
                }
            }
        }
    }

    for (i = 0; i < len; i++)
    {
        if (!isalpha(str[i]))
        {
            for (j = i+1; j < len; j++)
            {
                if (isalpha(str[j]))
                {
                    ch = str[j];
                    for (m = j; m > i; m--)
                        str[m] = str[m - 1];
                    str[i] = ch;
                    k = i + 1;
                    break;
                }
            }
        }
    }

    for (i = 0; i < len; i++)
    {
        if (!isdigit(str[j]))
        {
            for (j = i + 1; j < len; j++)
            {
                if (isdigit(str[j]))
                {
                    ch = str[j];
                    for (m = j; m > i; m--)
                        str[m] = str[m - 1];
                    str[i] = ch;
                    k = i + 1;
                    break;
                }
            }
        }
    }
    for (i = 0; i < len; i++)
    {
        if (!isalpha(str[i]))
        {
            for (j = i+1; j < len; j++)
            {
                if (isalpha(str[j]))
                {
                    ch = str[j];
                    for (m = j; m > i; m--)
                        str[m] = str[m - 1];
                    str[i] = ch;
                    k = i + 1;
                    break;
                }
            }
        }
    }
    printf("%s\n", str);
}
