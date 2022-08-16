#include <stdio.h>

int main(void)
{
  int alphabet[26];
  for(int i = 0; i < 26; i++)
    alphabet[i] = -1;    
  char s[101] = { 0, };
  scanf("%s", s);
  int i = 0;
  while (s[i])
  {
    if (s[i] >= 'a' && s[i] <= 'z') 
    {  
      if (alphabet[s[i] - 'a'] == -1)
        alphabet[s[i] - 'a'] = i;
    }      
    i++;
  }    
  for(int i = 0; i < 26; i++)
    printf("%d ", alphabet[i]);
  return 0;
}