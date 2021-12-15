int S2_exercice8 ()
{ int N,w[50],i,s=1;
printf("entrer le rang de la somme");
scanf("%d",&N);
w[0]=0;
w[1]=1;
for(i=2;i<=N;i++){
w[i]=5*w[i-1]+w[i-2]+1;
s=s+w[i];
}
printf("la somme des termes %d",s);
}
