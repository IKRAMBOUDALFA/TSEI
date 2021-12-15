int S2_exercice9 ()
{ int i,P,terme,N,s=0;
printf("entrer le rang de la somme");
scanf("%d",&N);
for(i=1;i<=N;i++)
{P=2*i;
terme=pow(i,P);
s=s+terme;
}
printf("la somme est %d",s);
}
