int EXERCICE1 (){int q; float pht ;float ttc;
printf("entrer la quantité ");
scanf("%d",&q);
printf("entrer prix unitaire hors taxe");
scanf("%f",&pht);
ttc=q*pht+q*(pht*20)/100;
printf("le prix final est %f",ttc);
}

