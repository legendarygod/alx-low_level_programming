#include "main.h"
/**
 * substring_match - check if a substring after wildcard matches
 * @s1: one string
 * @s2: another string
 * @after_wldcd: variable for position after wildcard
 * Return: 1 if matched, 0 if no
 */
int substring_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 =='\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (substring_match(s1 + 1, after_wldcd, after_wldcd));
}

/**
 * wildcmp - compare if string is identicaal with wc matches
 * @s1: one string
 * @s2: one string
 * Return: 1 if matched , 0 otherwise
 */
int wldcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wldcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
