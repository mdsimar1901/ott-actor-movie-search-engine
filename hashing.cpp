#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
char genre[10000];
char movies[10000];
}actor[10000];
void insert1(int n)
 {
 	 
     char genre[10000];
     int keys=0,hashkey,i,index,no,s,len,t;
     printf("\n Enter the actor name:");
     scanf("%s",&genre);
     len = strlen(genre);
     for(t=0;t<len;t++)
     {
         keys+=genre[t];

     }

     hashkey = keys % n;

     for(i=0;i<n;i++)
     {
         index = (hashkey+i)%n;

         if(actor[index].genre[0] == '\0')
         {
            strcpy(actor[index].genre, genre);


                 printf("\n Enter the movie names:");

                 scanf("%s",&actor[index].movies);

        break;
         }

     }
     if(i==n)
        printf("actor cannot be inserted \n");
 }

 void search1(char *genre,int n)
 {
     int keys=0,hashkey,i,index,no,len,t;
     int res;
     char a[10000];
    len = strlen(genre);
     for(t=0;t<len;t++)
     {
         keys+=genre[t];


     }


     hashkey = keys % n;


     for(i=0;i<n;i++)
     {
         index=(hashkey+i)%n;
 res = strcmp(actor[index].genre, genre);

         if(res==0)
         {
             printf("\n The movies are:");

                 printf("\n %s",actor[index].movies);

             break;
         }
     }
     if(i==n)

         printf("\n actor not found");

 }
 
int main()
 {
     int n,m,i,s;
     char gen[10000];
     printf("\n ****************************************OVER THE TOP(ONLINE THEATRE)****************************************");
     printf("\n Enter the number of actors:");
     scanf("%d",&m);
     n=m;

     for(i=1;i<=n;i++)
     {
         insert1(n);
     }
    printf("\nSEARCH :");
     printf("\n Enter the name of the desired actor :");
     scanf("%s",&gen);
     search1(gen,n);
 }
