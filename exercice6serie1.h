int EXERCICE6(){{int q ;float p ;float m ;
printf("entrer la quantité de produit");
scanf("%d",&q);
printf("enter le prix unitaire");
scanf("%f",&p);
m=p*q;
if(m<=200)
    m=m+25;
printf("le montant de la facture pour un client %f",m);

}
