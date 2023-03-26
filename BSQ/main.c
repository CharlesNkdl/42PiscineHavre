#include "BSQ.h"

void give_value(t_map vanilla,int **array);

int main(int argc, char **argv)
{
    t_map   vanilla;
    t_parse parser;
    int **array;
    int i;
    //int j;

    i = 1;
    array = 0;
    (void)argc;


    //while (i <= argc)
    //{
        //j = -1;
        // if (argc == 1)
        //     parser = get_stdin(parser);
        // else
            parser = get_file(argv[i], parser);
        vanilla = separate_first(parser.file_content, parser.size, &vanilla);
        array = populate_array(&vanilla, parser.file_content, array);
        //printf("%d", vanilla.nb_obs);
        give_value(vanilla, array);
        //print_array(array, vanilla);
        //while (++j <= vanilla.lines)
        //    free(array[j]);
        // free(parser.file_content);
        // free(array);
        //i++;
    //}
    return (0);
}