int S2_exercice6 (){int somme=0, N, i;
  printf(" Entrer un nombre: ");
  scanf("%d",&N);
  for(i = 1; i < N; ++i){
    if(N%i == 0){
    somme = somme + i;
    }
    }
  if(somme == N){
    printf(" Nombre parfait");
  }
  else{
    printf(" n'est pas un Nombre parfait");
  }
}
