#include "BSQ.h"

struct s_parse get_file(char *src, t_parse parser)
{
    parser.size = 0;
	parser.file_open = open(src,O_RDONLY);
	if (parser.file_open == -1)
		exit (0);
	parser.file_read = read(parser.file_open, parser.buff,sizeof(parser.buff));
	if (parser.file_read >= sizeof(parser.buff))
	{
		while (parser.file_read)
		{
			parser.file_read = read(parser.file_open, parser.buff, sizeof(parser.buff));
			parser.size += parser.file_read;
		}
	}
	if (parser.size == 0)
		parser.size = parser.file_read;
	// printf("parser.size : %d", parser.size);
	parser.file_content = malloc(parser.size + 1);
	close(parser.file_open);
	parser.file_open = open(src,O_RDONLY);
	parser.file_read = read(parser.file_open, parser.file_content, parser.size);
	// int i =0;
	// while (parser.file_content[i])
	// 	i++;
	// parser.file_content[i] = '\0';
    close(parser.file_open);
    return (parser);
}

struct s_parse get_stdin(t_parse parser)
{
	// parser.file_read = read(0, parser.buff,sizeof(parser.buff));
	parser.file_read = 1;
	// if (parser.file_read >= sizeof(parser.buff))
    parser.size = 0;
	// {
		while (parser.file_read)
		{
			printf("read: %ld\n", parser.file_read);
			parser.file_read = read(0, parser.buff, sizeof(parser.buff));
			parser.size += parser.file_read;
			printf("size: %d\n", parser.size);
			printf("buff: %s\n", parser.buff);
		}
	// }
	printf("size: %d\n", parser.size);
	parser.file_content = malloc(parser.size + 1);
	parser.file_read = read(parser.file_read, parser.file_content, parser.size);
	return (parser); 
}

struct s_map	separate_first(char *str, int size, t_map *vanilla)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlenbreak(str);
	vanilla->plein = str[len - 1];
	vanilla->obs = str[len - 2];
	vanilla->vide = str[len - 3];
	vanilla->size = size;
	while (i < (len - 3))
	{
		vanilla->lines = vanilla->lines * 10 + (str[i] - '0');
		i++;
	}
	//printf(" %d",vanilla.lines);
	//printf(" %c",vanilla.obs);
	//printf(" %c",vanilla.vide);
	//printf(" %c \n",vanilla.plein);
	//i = -1;
	/*array = (int **)malloc((vanilla.lines * sizeof(int *)) + 1);
	while (++i <= vanilla.lines)
		array[i] = (int *)malloc((vanilla.lines * sizeof(int)) + 1);*/
	//populate_array(vanilla, array, str);
	return (*vanilla);
}