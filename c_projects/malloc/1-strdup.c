#include "main.h"

/**
 */

/*char *_strdup(char *str)
{
	int i,len;
	char *a;

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			len++;
		i = 0;
		len++;
		a = malloc(len * sizeof(char));
		if (a == NULL)
			return (NULL);
		else
		{
			for (i =0; i < len; i++)
				a[i] = str[i];
		}
	}
	return (a);
}*/

char *_strdup(char *str)
{
        int i,len;
        char *a;

        if (str == NULL)
                return (NULL);
        else
        {
                for (i = 0; str[i] != '\0'; i++)
                        len++;
                i = 0;
                len++;
                a = malloc(len * sizeof(char));
                if (a == NULL)
                        return (NULL);
                else
                {
                        for (i =0; i < len; i++)
                                a[i] = str[i];
                }
        }
        return (a);
}

