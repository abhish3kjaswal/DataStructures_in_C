# include <iostream.h>
# include <conio.h>
# include <string.h>
class FiniteAutomaton
{
       private:
                       char *T,*P,*sig;
                       int n,m,l,q,trans[15][15];
       public :
                       void begin(void);
                       void set_trans(void);
                       int tfunc(char);
                       void matcher(void);
                       int check(int,int);
};
void FiniteAutomaton :: begin()
{
       int i=0,j=0;
       l=0; m=0; n=0; q=0;
       cout<<"\n\n Enter the input text :";
       cin>>T;
       cout<<"\n\n Enter the pattern :";
       cin>>P;
       n=strlen(T);
       m=strlen(P);
       while (T[i]!='\0') {
                       for (j=0;j<l;j++)  
		      {
				       if (T[i]==sig[j])
						       break;
		       }
		       if (j==l)
		      {
				       sig[l]=T[i];
				       l++;
		       }
		       i++;
       }
       sig[l]='\0';
       for (i=0;i<15;i++)
       {
		       for (j=0;j<15;j++)
		       {
				       trans[i][j]=0;
		       }
       }

       cout<<sig;
}
void FiniteAutomaton :: set_trans()
{
       int i,j=0,k=0;
       for (i=0;i<=m;i++)
		       {
			while (sig[j]!='\0') {
				       (q+2)>(m+1)?k=m+1:k=q+2;
				       do
				       {
						       k--;
				       }
				       while (check(k,j));
				       j++;
			}
       }
}
int FiniteAutomaton:: check(int k,int u)
{
       int i;
       for (i=k;i>=0;i--)
       {
       }
}

int FiniteAutomaton :: tfunc(char a)
{
       int i;
       for (i=0;i<l;i++) 
       {
                       if (sig[i]==a)
                       break;
       }
       return(trans[q][i]);
}

void FiniteAutomaton :: matcher()
{
       int i;
       for (i=0;i<n;i++)               
      {
                       if (tfunc(T[i])==m)
                       cout<<"\n\n The string is found at shift s = "<<i;
       }
}
void main()
{
       FiniteAutomaton fa;
       clrscr();
       fa.begin();
       getch();

}