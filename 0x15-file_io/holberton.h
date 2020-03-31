#ifndef _FILE_I_O
#define _FILE_I_O

#include <stdio.h>
#include <stdlib.h>


/*Functions*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);






#endif 
