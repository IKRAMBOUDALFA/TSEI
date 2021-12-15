int S2_exercice5 ()
{ int N=7;int A[7];int i;int compteur;
for(i=1;i<=N;i++)
{printf("entrer un nombre positif\n");
scanf("%d",&A[i]);
if(A[i]<0)
 {printf("erreur entrer un nombre positif");
  system("pause");
return 0;
}
}
i=1;
compteur=0;
while(i<=N)
{ if(A[i]%2!=0)
compteur++;
i++;
}
printf("il y a %d nombres impairs",compteur);
}
