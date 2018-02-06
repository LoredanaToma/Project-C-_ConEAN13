#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void L(int valoare, int bin[], int poz) {
	switch (valoare) {
	case 0: //  0001101
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 0;
		bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
		break;
	case 1: //  0011001
		bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 1;
		break;
	case 2: //  0010011
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = 0;
		bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 3: //  0111101
		bin[poz] = bin[poz + 5] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] =
				bin[poz + 6] = 1;
		break;
	case 4: //  0100011
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 0;
		bin[poz + 1] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 5: //  0110001
		bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 6] = 1;
		break;
	case 6: //  0101111
		bin[poz] = bin[poz + 2] = 0;
		bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] =
				bin[poz + 6] = 1;
		break;
	case 7: //  0111011
		bin[poz] = bin[poz + 4] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] =
				bin[poz + 6] = 1;
		break;
	case 8: //  0110111
		bin[poz] = bin[poz + 3] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] =
				bin[poz + 6] = 1;
		break;
	case 9: //  0001011
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 0;
		bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	}
}
void G(int valoare, int bin[], int poz) {
	switch (valoare) {
	case 0: //  0100111
		bin[poz] = bin[poz + 2] = bin[poz + 3] = 0;
		bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 1: //  0110011
		bin[poz] = bin[poz + 3] = bin[poz + 4] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 2: // 0011011
		bin[poz] = bin[poz + 1] = bin[poz + 4] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	case 3: // 0100001
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] =
				0;
		bin[poz + 1] = bin[poz + 6] = 1;
		break;
	case 4: // 0011101
		bin[poz] = bin[poz + 1] = bin[poz + 5] = 0;
		bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
		break;
	case 5: //  0111001
		bin[poz] = bin[poz + 4] = bin[poz + 5] = 0;
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 1;
		break;
	case 6: //  0000101
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] =
				0;
		bin[poz + 4] = bin[poz + 6] = 1;
		break;
	case 7: //  0010001
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] =
				0;
		bin[poz + 2] = bin[poz + 6] = 1;
		break;
	case 8: //  0001001
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] =
				0;
		bin[poz + 3] = bin[poz + 6] = 1;
		break;
	case 9: //  0010111
		bin[poz] = bin[poz + 1] = bin[poz + 3] = 0;
		bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
		break;
	}
}
void R(int valoare, int bin[], int poz) {
	switch (valoare) {
	case 0: //  1110010
		bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 1;
		break;
	case 1: //  1100110
		bin[poz + 2] = bin[poz + 3] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 1;
		break;
	case 2: // 1101100
		bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = 1;
		break;
	case 3: // 1000010
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] =
				bin[poz + 6] = 0;
		bin[poz] = bin[poz + 5] = 1;
		break;
	case 4: // 1011100
		bin[poz + 1] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 1;
		break;
	case 5: //  1001110
		bin[poz + 1] = bin[poz + 2] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 1;
		break;
	case 6: // 1010000
		bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] =
				bin[poz + 6] = 0;
		bin[poz] = bin[poz + 2] = 1;
		break;
	case 7: //  1000100
		bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] =
				bin[poz + 6] = 0;
		bin[poz] = bin[poz + 4] = 1;
		break;
	case 8: //  1001000
		bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] =
				bin[poz + 6] = 0;
		bin[poz] = bin[poz + 3] = 1;
		break;
	case 9: //  1110100
		bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 0;
		bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 1;
		break;
	}
}
 int main()

   {
// imi voi declara sirtul de caractere si denumirea produsului

      char denumire[21];
      cout<<"Introduceti denumirea produsului(max.20 caractere): ";
      cin>>denumire;
      char codDat[10];
      cout<<"Introduceti codul produsului(max.9 cifre, fara spatii): ";
      cin>>codDat;

     int lungime = strlen(codDat);//Verificare:Numar toate caracterele bune folosind un contor.
     int i = 0;


         while ((i != lungime) || (lungime > 9))
         {
             i=0;
            while(codDat[i] >= '0' && codDat[i] <= '9')
            i++;
            if ((i != lungime) || (lungime >9))
            {
                cout <<"Cod eronat:  "<< codDat << endl;
                cout<<"Introduceti codul produsului(max.9 cifre, fara spatii): ";
                cin>>codDat;
                lungime = strlen(codDat);
            }
         }


      char sirSapte [9] = ""; // sirul initial este vid
         if (lungime < 9 )
     {
      int j;
          for (j = 0; j < 9 - lungime; j++)
            sirSapte[j] = '7';//Limitez sirSapte la dreapta adaugandu-i un caracter '\0'
        sirSapte[j] = '\0';
     }
      char codRo[] = "594";
      char ean13[13]; //13 caractere, 12+1
            strcpy (ean13, codRo);
            strcat (ean13, sirSapte);
            strcat (ean13, codDat);//Verific pana aici//
             cout << "Primele 12 caractere sunt: " << ean13 << endl;


     //convertim caracterele in valori numerice intregi (int)

     int nean13[13]; //Pentru rezultate

          for (i=0; i<12; i++)
            nean13[i] = ean13[i] - '0';

     int S;
     int s1;
     int s2;

       s1 = s2 = 0;

          for (i=0; i<12; i=i+2)
       {
           s1 = s1 + nean13[i];
           s2 = s2 + nean13[i+1];
       }
           S = s1 + 3*s2;

           nean13[12] = 10 - S%10; //Cifra de control


         cout<<"Codul format din 13 cifre este:  ";

         for (i=0;i<13;i++)

         cout<<nean13[i];


	int b[95];

//  Se codifica inceputul: 101

	b[0] = b[2] = 1;
	b[1] = 0;

	L(nean13[1], b, 3);
	G(nean13[2], b, 10);
	G(nean13[3], b, 17);
	L(nean13[4], b, 24);
	L(nean13[5], b, 31);
	G(nean13[6], b, 38);

	b[45] = b[47] = b[49] = 0;
	b[46] = b[48] = 1;

	for (int i = 0; i < 6; i++)
		R(nean13[7 + i], b, 50 + i * 7);

	b[92] = b[94] = 1;
	b[93] = 0;

	fstream cod;

	cod.open("cod.html", ios::out);
	cod << "<!DOCTYPE html>" << endl;
	cod << "<html>" << endl;
	cod << "<body>" << endl;
	cod << "<center>" << endl;
	cod << "<svg height=\"50\" width=\"200\">" << endl;

//  Doi pixeli pentru fiecare bara

	int pozx = 10;  //  De la acest x incep trasarea

	for (i = 0; i < 95; i++) {
		if (b[i] == 1)   //  Se traseaza o linie
			cod << "<line x1=\"" << pozx << "\" y1=\"20\" x2=\"" << pozx
					<< "\" y2=\"50\" style=\"stroke:rgb(0,0,0); stroke-width:2\" />"
					<< endl;
		pozx = pozx + 2;  //  Avans cu 2px, indiferent daca s-a trasat sau nu
	}

	cod << "</svg>" << endl;
	cod << "<br>" << endl;
	for (i = 0; i < 13; i++)
    cod << nean13[i];
	cod << "</body>" << endl;
	cod << "</html>" << endl;
	cod.close();
	return 0;
}

