#ifndef MAIN_H
#define MAIN_H

char *getenvvar(char *var, char **env);
int is_space(char c);
char **parse_string(char *str, char separator);
#endif
