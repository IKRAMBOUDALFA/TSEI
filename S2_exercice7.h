int S2_exercice7 ()
{int A[50],i,S=59,N;
A[0]=59;
printf("entrer le rang de la somme");
scanf("%d",&N);
for(i=1;i<=N;i++)
{ if(i%2==0)
    {A[i]=A[i-1]*9;
   S=S+A[i];
	}
  else if(i%2!=0)
  {A[i]=A[i-1]*8;
   S=S-A[i];
  }
}
printf("la somme de ces termes %d",S);
}
