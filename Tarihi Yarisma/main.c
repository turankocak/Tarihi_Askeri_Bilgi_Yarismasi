#include <stdio.h>
#include <stdlib.h>

char cvb1,cvb2,cvb3,cvb4,cvb5,cvb6,cvb7,cvb8,cvb9,cvb10,cvb11,cvb12,cvb13,cvb14,cvb15,cvb16,cvb17,cvb18,cvb19,cvb20;
char cik,gel;
void main() {
	git:		
printf("                            \t**Tarihi ve Askeri Bilgi Yarismasina Hosgeldiniz**                                    ");
printf("  \n **Bu yarismada her dogru cevap karsiliginda bir askeri rutbe atlarsiniz**\n");
printf("  \n **Lutfen sorularin cevaplarini buyuk(A,B,C,D) harflerle veriniz !!**\n");
printf("  \n **Her cevaptan sonra 'ENTER' tusuna basip ilerleyiniz  !!**\n");
printf("\n [SORU-1]: Turkiye Cumhuriyeti kurucusu kimdir ?\n \n A) Fevzi CAKMAK  \n B) Gazi Mustafa Kemal ATATURK \n C) Refet BELE \n D) Ismet INONU" );
printf("                               [CEVAP-1]:");
scanf("%s",&cvb1);
{
if(cvb1=='B')
printf("\t \n''Tebrikler *ER* rutbesine yukseldiniz'' \n " );
else 
printf("\t \n ''Yanlis cevab yarismayi rutbesiz bitirdiniz katiliminizden dolayi tesekkur ederiz :)'' \n ");
{
	if(cvb1!='B')
	goto dur;
}
}
printf("\n [SORU-2]: Canakkale Zaferinin tarihi nedir ?\n \n A) 18 MART 1453  \n B) 29 Ekim 1915  \n C) 23 Nisan 1920 \n D) 18 MART 1915" );
printf("                               [CEVAP-2]:");
scanf("%s",&cvb2);
{
if(cvb2=='D')
printf("\t \n''Tebrikler *ONBASI* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ER* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb2 !='D')
	goto dur;
}

}

printf("\n [SORU-3]: TBMM'nin acilis tarihi nedir ?\n \n A) 25 KASIM 1917  \n B) 29 Ekim 1919  \n C) 23 Nisan 1920 \n D) 16 Mayis  1950" );
printf("                               [CEVAP-3]:");
scanf("%s",&cvb3);
{
if(cvb3=='C')
printf("\t \n''Tebrikler *CAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ONBASI* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb3 !='C')
	goto dur;
}

}
printf("\n [SORU-4]: Ulu onder Mustafa Kemal Ataturk ne zaman Samsun'a cikti ?\n \n A) 4 Eylul 1919  \n B) 19 Mayis 1919  \n C) 23 Nisan 1920 \n D) 30 Agustos 1924" );
printf("                               [CEVAP-4]:");
scanf("%s",&cvb4);
{
if(cvb4=='B')
printf("\t \n''Tebrikler *UZMAN ONBASI* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *CAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb4 !='B')
	goto dur; 
}

}
printf("\n [SORU-5]: Osmanli Imparatorlugu'nun Kurucusu kimdir  ?\n \n A) Kanuni Sultan Suleyman  \n B) Osman Gazi   \n C) Ertugrul Gazi  \n D) II.Abdulhamit" );
printf("                               [CEVAP-5]:");
scanf("%s",&cvb5);
{
if(cvb5=='B')
printf("\t \n''Tebrikler *UZMAN CAVUS * rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *UZMAN ONBASI * olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb5 !='B')
	goto dur; 
}

}
printf("\n [SORU-6]: Tarihteki ilk Turk Devleti Hangisidir ?\n \n A) Gokturk  \n B) Osmanli imp.   \n C) Asya Hun imp.  \n D) Anadolu Selcuklu " );
printf("                               [CEVAP-6]:");
scanf("%s",&cvb6);
{
if(cvb6=='C')
printf("\t \n''Tebrikler *ASTSUBAY CAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *UZMAN CAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb6 !='C')
	goto dur; 
}

}
printf("\n [SORU-7]: Mustafa Kemal'in Milli Mucadele icin Samsun'dan sonraki duragi hangi ilimizdir  ?\n \n A) Amasya  \n B) Sivas   \n C) Erzurum   \n D) Ankara " );
printf("                               [CEVAP-7]:");
scanf("%s",&cvb7);
{
if(cvb7=='A')
printf("\t \n''Tebrikler *ASTSUBAY KIDEMLI CAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTSUBAY  CAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb7 !='A')
	goto dur; 
}

}
printf("\n [SORU-8]: Mustafa Kemal'in ''Burada bir milletin kurulusunu hazirlayan kararlar verildi'' dedigi il neresidir  ? \n \n A) Sivas  \n B) Samsun   \n C) Amasya   \n D) Havza " );
printf("                               [CEVAP-8]:");
scanf("%s",&cvb8);
{
if(cvb8=='A')
printf("\t \n''Tebrikler *ASTSUBAY  USTCAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTSUBAY KIDEMLI CAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb8 !='A')
	goto dur; 
}

}
printf("\n [SORU-9]: Gunumuzda kullandigimiz onluk,yuzluk,binlik duzenli ordu sistemini hangi Turk komutan kurdu   ? \n \n A) II.Mahmut  \n B) CengizHan   \n C) Kursad   \n D) Teoaman " );
printf("                               [CEVAP-9]:");
scanf("%s",&cvb9);
{
if(cvb9=='D')
printf("\t \n''Tebrikler *ASTSUBAY KIDEMLI USTCAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTSUBAY KIDEMLI CAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb9 !='D')
	goto dur; 
}

}
printf("\n [SORU-10]: Izmir'de ilk kursunu atan kimdir ? \n \n A) Hasan TAHS�N  \n B) M.Kemal ATATURK    \n C) M.Akif ERSOY   \n D) Ismet INONU " );
printf("                               [CEVAP-10]:");
scanf("%s",&cvb10);
{
if(cvb10=='A')
printf("\t \n''Tebrikler *ASTSUBAY BASCAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTSUBAY KIDEMLI USTCAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb10 !='A')
	goto dur; 
}

}

printf("\n [SORU-11]: Ucuncu nesil ana muharebe tanki olarak gelistirilen yerli ve Milli tankin ismi nedir ? \n \n A) Bayraktar  \n B) Ejder Yalcin   \n C) Altay    \n D) Anka " );
printf("                               [CEVAP-11]:");
scanf("%s",&cvb11);
{
if(cvb11=='C')
printf("\t \n''Tebrikler *ASTSUBAY KIDEMLI BASCAVUS* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTSUBAY BASCAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb11 !='C')
	goto dur; 
}

}
printf("\n [SORU-12]: Askerlikte rutbeler omuz uzerinde ise o kisi hangi askeri kademededir ? \n \n A) ER   \n B) ASTSUBAY   \n C) SOZLESMELI ER    \n D) SUBAY  " );
printf("                               [CEVAP-12]:");
scanf("%s",&cvb12);
{
if(cvb12=='D')
printf("\t \n''Tebrikler *SUBAY* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTSUBAY  KIDEMLI BASCAVUS* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb12 !='D')
	goto dur; 
}

}
printf("\n [SORU-13]: Misir'i alip Memluk Devletine son veren Osmanli padisahi kimdir ? \n \n A) Yavuz Sultan Selim   \n B) II.Murat   \n C) Vahdettin    \n D) Fatih Sultan Mehmed  " );
printf("                               [CEVAP-13]:");
scanf("%s",&cvb13);
{
if(cvb13=='A')
printf("\t \n''Tebrikler *ASTTEGMEN* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *SUBAY* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb13 !='A')
	goto dur; 
}

}
printf("\n [SORU-14]: 29 Nisan 2014'de seri uretime gecen bircok operasyonda ordumuza havadan destek sagliyan IHA' nin ismi nedir ? \n \n A) Atak   \n B) Bayraktar   \n C) S400    \n D) MPT " );
printf("                               [CEVAP-14]:");
scanf("%s",&cvb14);
{
if(cvb14=='B')
printf("\t \n''Tebrikler *TEGMEN* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *ASTTEGMEN* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb14 !='B')
	goto dur; 
}

}
printf("\n [SORU-15]: Mustafa Kemal Pasanin emriyle 14 Eylul 1919'da Sivas'ta cikarilan gazatenin ismi nedir ? \n \n A) Irade-i Milliye   \n B) Takvim-i Vakayi   \n C) Vatan   \n D) SOZ " );
printf("                               [CEVAP-15]:");
scanf("%s",&cvb15);
{
if(cvb15=='A')
printf("\t \n''Tebrikler *USTTEGMEN* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *TEGMEN* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb15 !='A')
	goto dur; 
}

}
printf("\n [SORU-16]: Turk silahli kuvvetlerinin genel ihtiyac ve strateji vb. Cumhurbaskani komutasinda konulari duzenleyen ve denetliyen kurul nedir ? \n \n A) Y.O.K  \n B) Y.A.S  \n C) M.E.B   \n D) M.S.B " );
printf("                               [CEVAP-16]:");
scanf("%s",&cvb16);
{
if(cvb16=='B')
printf("\t \n''Tebrikler *YUZBASI* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *USTTEGMEN* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb16 !='B')
	goto dur; 
}

}
printf("\n [SORU-17]: Osmanli Imparatorlugunda kadi ve muderrislerin atamasindan sorumlu askeri birim nedir  ? \n \n A) Yeniceri  \n B) Tulumbaci  \n C) Timarli Sipahi   \n D) Kazasker " );
printf("                               [CEVAP-17]:");
scanf("%s",&cvb17);
{
if(cvb17=='D')
printf("\t \n''Tebrikler *BINBASI* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *YUZBASI* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb17 !='D')
	goto dur; 
}

}
printf("\n [SORU-18]: Konstantiniye'yi fetheden Hz.Muhammed SAV. hadisini gerceklestiren  Osmanli Padisahi kimdir  ? \n \n A) Vahdeetin   \n B) II.Abdulhamit  \n C) Fatih Sultan Mehmed HAN   \n D) II.Murat " );
printf("                               [CEVAP-18]:");
scanf("%s",&cvb18);
{
if(cvb18=='C')
printf("\t \n''Tebrikler *YARBAY* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *BINBASI* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb18 !='C')
	goto dur; 
}

}
printf("\n [SORU-19]: 4.3 KG agirliginde,mermi capi 7.62mm 20 mermi kapasiteli M-16 mekanizmali milli ve yerli silahimiz  ? \n \n A) G3   \n B) MPT-76  \n C) M4a1   \n D) AK-47 " );
printf("                               [CEVAP-19]:");
scanf("%s",&cvb19);
{
if(cvb19=='B')
printf("\t \n''Tebrikler *ALBAY* rutbesine yukseldiniz''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *YARBAY* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb19 !='B')
	goto dur; 
}

}
printf("\n [SORU-20]: Malazgirt meydan muharebesinden sonra Anadolu'da kurulan ilk Turk beyligi hangisidir ? \n \n A) Caka   \n B) Artuklu  \n C) Saltuk   \n D) Ahlatsahlar " );
printf("                               [CEVAP-20]:");
scanf("%s",&cvb20);
{
if(cvb20=='C')
printf("\t \n''Tebrikler yarismadaki butun sorulari dogru cevaplayip en yuksek rutbe olan *GENERAL* rutbesine yukseldiniz ve Tarihini asla unutmayan bir Turk askeri oldugunuzu kanitladiniz...''\n" );
else 
printf("\t \n ''Yanlis cevab yarismayi *Albay* olarak  bitirdiniz katiliminizden dolayi tesekkur ederiz :)''\n ");
{
	if (cvb20 !='C')
	goto dur; 
}

}

dur:printf(" \t \n^^Oyuna tekrar baslamak icin * tusuna basiniz^^ ---  ^^Oyundan cikmak icin + tusuna basiniz^^  =  ");
scanf("%s",&gel);
if(gel == '*'){
	system("cls");
	goto git;
}
if(gel == '+'){
	goto cik;
}
	
cik: printf("\t \n .......Sizi tekrar aramizda gormek dilegiyle .......");

}

