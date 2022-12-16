#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

typedef struct {
   char   simb[6];
   double Eb, rs;
   double coef[6]; 
} subnivel;

typedef struct {
   char   simb[3];
   int    Z;
   double A, rho;
   double coer[6], incoer[6];
   subnivel sn;
} dbase;

int main(void) {
   FILE  *fp;
   char   lixo[128];
   int    pos;
   int    i;

   dbase    db;
   subnivel sn;

   fp = fopen("./database/H.MU","rt");
   if (fp==NULL) {
      printf("Problema ao acessar o arquivo!!!\n");
      exit(0);
   }
   fscanf(fp,"%s",db.simb);
   printf("simb: %s\n",db.simb);

   fgets( lixo, 127, fp );
   //printf("lixo: %s\n",lixo);

   fscanf(fp," %d %lf %lf ",&db.Z,&db.A,&db.rho);
   printf("Z: %d\tA: %lf\trho: %e\n",db.Z,db.A,db.rho);

   fgets( lixo, 127, fp );
   //printf("lixo: %s\n",lixo);

   for ( i=0; i<6; i++ ) fscanf(fp," %lf ",&db.coer[i]);
   for ( i=0; i<6; i++ ) fscanf(fp," %lf ",&db.incoer[i]);

   for ( i=0; i<6; i++ ) printf(" %e ",db.coer[i]);   printf("\n");
   for ( i=0; i<6; i++ ) printf(" %e ",db.incoer[i]); printf("\n");

   fgets( lixo, 127, fp );
   //printf("lixo: %s\n",lixo);

   fscanf(fp," %s %lf %lf ",sn.simb,&sn.Eb,&sn.rs);
   for ( i=0; i<6; i++ ) fscanf(fp," %lf ",&sn.coef[i]);

   printf("Simb: %s\tEb: %lf\trs: %lf\n",sn.simb,sn.Eb,sn.rs);
   for ( i=0; i<6; i++ ) printf(" %e ",sn.coef[i]);   printf("\n");


   pos = ftell(fp);
   printf("pos: %d\n",pos);

   fclose(fp);
   return 0;
}

