#define MAXWORD 100
#define NKEYS (sizeof keytab / sizeof keytab[0])
  
  struct key *binsearch(char *word, struct key *tab, int n);
  int getword(char *word, int lim);
  
  struct key 
{
  char *word;
  int count;
} ;
extern struct key keytab[];
