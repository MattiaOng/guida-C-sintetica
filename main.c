***********************************************************************************************
***********************************************************************************************
***********************************************************************************************
*** Riassunto completo che spiega con brevi esempi tutti i concetti principali e i termini della
*** programmazione in C. **********************************************************************
***********************************************************************************************
***********************************************************************************************
***********************************************************************************************

Tipi di variabili:
Le variabili sono area della memoria in cui viene salvato un valore codificato in binario.
Cio' rende necessario definire il tipo di dato per decodificare i valori binari che per numeri
interi, decimali, ottali, esadecimali e caratteri sono uguali;

char = variabile per memorizzare un carattere. ( 8 bit, 1 byte);
int = variabile per memorizzare interi. ( 16 bit, 2 byte);
double = variabile per memorizzare numeri anche in virgola mobile "lunghi". ( 64 bit, 8 byte);
float = variabile per memorizzare numeri anche in virgola mobile. (32 bit, 4 byte);
short = variabile per memorizzare interi "corti".( 8 bit, 1 byte );
long = variabile per memorizzare interi "lunghi" (abbreviazione di long int). (32 bit, 4 byte);
unsigned = variabile per memorizzare un intero senza segno "lungo". ( 32 bit, 4 byte);

Inserendo longo double o float si otterra' un double o un float piu' lungo; cosa analoga
avverra' per unsigned; si possono combinare unsigned long e short;

Definizione di una variabile:
Viene associsato a un nome il tipo della variabile.

int a;
char b;
double abc;
float c;
long d;
unsigned e;


Inizializzazione di una variabile:
Viene associato a una variabile - definita in precedenza - un valore.

a = -12;
b = 'h';
abc = 2345.5;
c = -45.62;
d = 23452;
e = 1312;

Si potranno anche inizializzare cosi:
int a = -12;
o
int a= -12, b = 24;

Da notare che dove non viene definito il segno del valore viene sottinteso + come nella
matematica normale.
A char vengono assegnate costanti letterali, esse vanno sempre incluse fra apici singoli.

-----------------------------------------------------------------------------------------------

Funzioni basiche:

int i = 3;
printf("ciao %d", i); = mostra ciao 3;
scanf("%­i", &i); = assegna un valore in input dalla tastiera a i;

-----------------------------------------------------------------------------------------------

Gli operatori aritmetici, logici e di confronto.

Aritmetici:
servono a eseguire operazioni matematiche.

+ = addizione.
- = sottrazione.
/ = divisione(se fra interi darà un resto).
* = moltiplicazione.
% = da il resto fra una divisione fra interi.

Esempi:

a=a+b;
sintetizzato in:
a+=b;
(si sintetizzano allo stesso modo gli altri operatori aritmetici).

Non è possibile operare fra tipi differenti di variabili;

-----------------------------------------------------------------------------------------------

Logici:
permettono di fare OR o AND logico fra operatori di confronto.

&& = AND logico;
|| = OR logico;

-----------------------------------------------------------------------------------------------

di confronto:
Vengono utilizzati in istruzioni condizionali.

> = variabile a destra maggiore di variabile a sinistra;
< = l'opposto di < ;
>= = maggiore o uguale;
<= = minore o uguale;
== = uguaglianza(da non confondere con =);
!= = diverso da;

-----------------------------------------------------------------------------------------------

Istruzioni condizionali:
Verificano una condizione, se e' falsa non viene eseguito il blocco di istruzioni altrimenti
si.

if(primotermine-operatorelogico-secondotermine-opzionalilogici-altritermini){
istruzioni;
{
if(primotermine-operatorelogico-secondotermine-opzionalilogici-altritermini){
istruzioni;
}
else{
istruzioni;
}

Se l'istruzione è solo una si possono omettere le parentesi grafe.
Un modo per abbreviare la forma è l'operatore ternario:

(condizione)?ritornaquesto:altrimentiquesto;

-----------------------------------------------------------------------------------------------

switch(variabile){
case 1:
istruzioni;
break;
case 2:
istruzioni;
break;
case 3:
istruzioni;
case 4:
istruzioni;
break;
default:
istruzioni;
break;

-----------------------------------------------------------------------------------------------

Cicli:
Ripetono ciò che cè nel blocco finchè la condizione non diviene false.

for(inizialiarevariabile;variabile-operatorelogico;operatorearitmetico){
istruzioni;
}

while(condizione){ | do{
istruzioni; | istruzioni;
} | }while(condizione)

La differenza fra for e while e' che se in while la condizione risulterà falsa verrà comunque
eseguito il ciclo una volta.
Anche qui se l'istruzione e' solo una si potranno omettere le parentesi grafe { }.

-----------------------------------------------------------------------------------------------

Operatori unari:
Forme abbreviate di quelli visti in precedenza.

! = not logico;
++ = incrementa di 1(post-pre);
-- = decrementa di 1(post-pre);
& = assegnamento;
* = puntatore;
- = negativo;
sizeof = numero di byte;
(tipo) = di cast, converte il tipo di dato nel tipo di dato fra parentesi.


-----------------------------------------------------------------------------------------------

Vettori:
Un vettore sono piu' locazioni di memoria in cui vengono inizializzati valori, il valore di
default e' 0, esso, come una variabile conterra' solo i dati di un certo tipo, e solo un
certo numero di dati.

int a[9];

definira' a, un vettore che potra' contenere 10 interi poiche' deve essere considerato anche lo
zero.

Vettori di caratteri(stringhe):
A ogni vettore verra' assegnato un carattere che infine costituira' una stringa.

char b[4] = "ciao"

char b[4]= {'c', 'i', 'a', 'o', '\0');

char b[] = "ciao";

char b[] = {'c', 'i', 'a', 'o', '\0');

il carattere \0 serve a terminare la stringa ma verra' aggiunto automaticamente nel caso la
stringa sia fra apici doppi ".

Vettori bidimensionali:
Conterranno una tabella immaginaria, con un valore per ogni la corrispondenza della riga e
della colonna;

int a[6][8];
int a[3][6] = 5;

Sara' quindi cosi 0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 5 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0

-----------------------------------------------------------------------------------------------

Funzioni:
una funzione e' un blocco di istruzioni che per semplificare la lettura del codice o la messa
a punto viene richiamato da una parola;

int moltiplicazione(int a, int b);

un prototipo di questo tipo verra' messo prima di main(), all'interno di main verra' poi
richiamto con

moltiplicazione(x,y);

mentre dopo il blocco main verra' inizializzata

int moltiplicazione(int a, int b){
return a*b;
}

nel prototipo della funzione viene dichiarato un valore che verra' ritornato da essa, il valore potra'
essere di qualsiasi tipo, nel caso fosse void non verra' ritornato nessun valore.
All'interno delle parentesi vengono definite delle varibili che possono essere nahce costanti, esse 
verranno utilizzate nel prototipo per definire la funzione, in seguito con una chiamata per valore,
verranno passate le variabili che interessano a noi e la funzione lavorera su esse anziche' quelle
definite nel prototipo.
Alla chiamata per riferimento invece, vengono definite variabili o costanti di puntatori e vettori
poi gli viengono passati attravero la chiamata alla funzione le variabili a cui puntare e la funzione
lavorera' sulle propie variabili.

-----------------------------------------------------------------------------------------------

Funzione ricorsiva:
In poche parole nella funzione viene data una condizione , un blocco di istruzioni e la chiamata
di se stessa, finche' la condizione non risulta vera sara' richiamata se stessa altrimenti
terminera' ritornando il valore ottenuto dai valori ritornati dalla funzione(scusate il
gioco di parole e se mi sono spiegato male). E' necessario che venga sempre inserita una
condizione, cosiche' la funzione non si ripeta all'infinito, comunque dopo un po' la funzione
viene interrotta dal sistema;

Esempio:

#include <stdio.h>


int cubo(int a);
int b = 0;

int main( void ){
int d = 5;

printf("5 alla quarta = %­i", cubo(d));

getchar();
getchar();
return 0;
}

int cubo(int a){
if(b<2){
a = a * a;
b++;
return cubo(a);
}
else{
return a;
}
}

-----------------------------------------------------------------------------------------------

Costanti:
Le costanti sono dati che non possono variare;

const a = 3;

non si potra' incrementarlo(a++) o modificarlo in alcun modo;

-----------------------------------------------------------------------------------------------

Puntatori:
nomi che puntano a un area della memoria occupata dal valore di un altra variabile(ma anche
funzioni, vettori e strutture). 
Detto in "parole povere":
Sono delle variabili che invece di puntare a una locazione di memoria propia, e quindi a un propio valore 
puntano a quello di un altra variabile o puntatoreassumendone la stessa locazione e valore, se il valore 
della variabile cambia cambia anche quello del puntatore che pero' non puo' essere essere cambiato,
 l'incremento e' possibile solo se punta a una locazione di un vettore, in quel caso puntera' all'elemento
seguente del puntatore. I puntatori sono usati anche per puntare a caratteri cosi' da creare stringhe.
Per i puntatori dovra' essere definito un tipo di dato a cui puntare. Vanno letti da destra a
sinistra.
I puntatori sono una delle caratteristiche essenziali del C e sono uno degli argomenti piu'
complessi anche se non sono neanche lontanamente paragonabili alla difficolta' di comprensione
delle liste con strutture concatenate.

int a = 3;
int *aPtr = &a;

Se a variera' anche il valore puntato da *aPtr variera', ma la area della memoria rimarra'
uguale;

Puntatori a costanti:

const char c = 'a';
char *p = &c;

Puntatore costante a variabile:

char c = 'a';
const char *p = &c

Il puntatore non potra' essere spostato dalla locazione della memoria di c.

Puntatore costante a costante:

const char c = 'a';
const char *p = &c;

-----------------------------------------------------------------------------------------------

Puntatori a vettori:

int vPtr;


I puntatori potranno essere usati come vettori, ad esempio per puntare a stringhe:

char *ciaoPtr = "ciao";

char *ciaoPtr[4] = {"ciao", "hello", "hi", "hola", "buenas dias"}

Mentre a funzioni:

void (*fPtr[3]) (float) = { function1, function2, function3};

Puntatore a strutture:

struct esempio { int a, b, c; } elemento;
struct esempio *puntatore;

puntatore = &elemento;

puntatore->a = 6;
puntatore->b = 8;
puntatore->c = 5;

-----------------------------------------------------------------------------------------------

Formattazione input/output:

Output:

%d= intero decimale con segno;
%­i = intero decimale con segno;
%­o = intero ottale senza segno;
%­u = intero decimale senza segno;
%­x o %­X = intero esadecimale senza segno;
h o l = modificatori di lunghezza, posti dinanzi a un indicatore di conversione per indicare che
sara' visualizzato un long o uno short;
%e o %E = virgola mobile della notazione esponenziale;
%f = virola mobile della notazione in virgola fissa;
%­g o %­G = virgola mobile sia nel formato di f che di quello di e(E) in base alla grandezza del
valore;

%­L = davanti agli indicatori di conversione in virgola mobile per indicare che il valore sara long
double;
%­p = mostra in valore esadecimale il nome dell'allocazione di memoria di un puntatore;
%­n = immagganizza il numero di caratteri gia inviato in output da printf, dovra' essere fornito
come argomento corrispondente un puntatore a un intero;
%% = visualizza &;
+ = visualliza il segno davanti ai valori;
- = allinea a sinistra l'output;
spazio = visualizza lo spazio davanti ai valori positivi;
0 = riempe un campo con zeri davanti al valore visualizzato;
# = fatevi una prova Tongue;

-----------------------------------------------------------------------------------------------

Sequenza di escape:

\' = visualizza l'apice singolo;
\" = visualizza l'apice doppio;
\? = visualliza il punto esclamativo;
\\ = visualizza una slash;
\a = allarme o cicalino;
\b = cursore indietro di una posizione rispetto la riga seguente;
\f = cursore alla pagina logica successiva;
\n = cursore sulla riga successiva;
\r = ritorno carrello;
\t = crusore avanti di una tabulazione orizzontale;
\v = cursore avanti di una tabulazione verticale;

-----------------------------------------------------------------------------------------------

Input:

%d= intero decimale con segno;
%­i = intero decimale con segno;
%­o = intero ottale senza segno;
%­u = intero decimale senza segno;
%­x o %­X = intero esadecimale senza segno;
h o l = modificatori di lunghezza, posti dinanzi a un indicatore di conversione per indicare che
sara' visualizzato un long o uno short;
%e o %E = virgola mobile della notazione esponenziale;
%f = virola mobile della notazione in virgola fissa;
%­g o %­G = virgola mobile sia nel formato di f che di quello di e(E) in base alla grandezza del
valore;

%­L = davanti agli indicatori di conversione in virgola mobile per indicare che il valore sara
longdouble;

%­p = mostra in valore esadecimale il nome dell'allocazione di memoria di un puntatore;
%­n = immagganizza il numero di caratteri gia inviato in input da scanf, dovra' essere fornito
come argomento corrispondente un puntatore a un intero;
%c = legge un carattere;
%­s = legge una stringa, carattere di terminazione aggiunto in auto;
%% = ignora un segno di percentuale nell'input;

-----------------------------------------------------------------------------------------------

Funzioni della libreria math: <math.h>

sqrt(x) = radice quadrata;
exp(x) = esponente x;
log(x) = logaritmo naturale x;
log10(x) = logaritmo x(base 10);
fabs(x) = valore assoluto di x;
ceil(x) = arrotonda x al numero maggiore;
floor(x) = arrotonda x al numero minore;
pow(x, y) = x elevato alla potenza di y;
fmod(x, y) =resto di x/y in virgola mobile;
sin(x) = seno trigonometrico di x( espressa in radianti);
cos(x) = coseno trigonometrico di x(radianti);
tan(x) = tangente trigonometrica di x(radianti);

-----------------------------------------------------------------------------------------------

Funzioni per l'elaborazione di stringhe:

Gestione dei caratteri: <ctype.h>

int isdigit( int c); = restituisce vero se c e' una cifra, 0 in caso contrario;
int isalpha( int c); = resituisce vero se c e' una lettera, 0 in caso contrario;
int isalnum( int c); = restituisce un valore vero se c e' una cifra o una lettera, 0 in caso
contratio;

int isxdigit( int c); = vero se e' esadecimale seno' 0;
int islower( int c); = vero se e' una lettera minuscola seno' 0;
int isupper( int c); = vero se e' una lettera maiuscola seno' 0;
int tolower( int c); = restituisce la lettere maiuscola corrispondente se e' una lettera
minuscola l'argomento inalterato se e' maiuscola;

int toupper( int c); = il contrario di tolower;
int isspace( int c); = resituisce un valore vero se e' un carattere bianco o una sequesnza di
escape;

int iscntrl( int c); = restituisce un valore vero se c e' un carattere di controllo altrimenti 0;
int ispunct( int c); = restituisce vero se e' un carattere stampabile diverso dalle lettere gli
spazi gli 0 o le cifre.

int isprint( int c); = vero se e' un carattere stampabile incluso lo spazio altrimenti 0;
int isgraph( int c); = restituisce vero se e' un carattere stampabile diverso da 0 e spazio;

-----------------------------------------------------------------------------------------------

Conversione di stringhe: <stdlib.h>

double atof( const char *xPtr ); = converte la stringa xPtr in un double;
int atoi( const char *xPtr ); = converte la stringa xPtr in un int;
long atol( const char *xPtr ); = converte la stringa xPtr in un long int;
double strtod( const char *xPtr, char **endPtr ); = converte la stringa xPtr in un double;
long strtol( const char *xPtr, char **endPtr, int base ); = converte la stringa xPtr in un long;

unsigned long strtoul(const char *xPtr, char **endPtr, int base); = converte la stringa xPtr
in un unsignede long;

-----------------------------------------------------------------------------------------------

Input/Outuput standard: <stdio.h>

int getchar( void ); = legge il primo carattere e lo restituisce come valore intero;
char *gets( char *s ); = legge i caratteri e li immaganizza nel vettore s, finche non incontra
un carattere di nullo di terminazione o di fine del file;

int putchar( int c ); = visualizza il carattere immagazinato in c;
int puts( const char *s ); = visualliza la stringa seguita da un carattere di newline;
int sprintf( char *s, const char *format, ...); = uguale a printf ma l'output non viene
visualizzato ma viene immagazinato in s;

int sscanf( char *s, const char *format, ...); = uguale a scanf solo che l'input viene letto
dal vettore s;

-----------------------------------------------------------------------------------------------

Manipolazione di stringhe: <string.h>

char *strcpy( char *s1, const char *s2 ); = Copia la stringa s2 nel vettore s1, restiruisce s1;
char *strncpy( char *s1, const char *s2, size_t n); = copia un massimo di caratteri n dalla
stringa s2 nel vettore s1, restiruisce s1;

char *strcat( char *s1, const char *s2 ); = accoda la stringa s2 al vettore s1, il primo
carattere di di s2 si sostituisce al carattere nullo di terminazione di s1, restituisce s1;

char *strncat( char *s1, const char *s2, size_t n ) = accoda un massimo di caratteri dalla
stringa s2 al vettore s1. Il primo carattere di s2 si sostituira' al carattere nullo di
terminazione, restituisce s1;

-----------------------------------------------------------------------------------------------

Gestione delle stringhe: <string.h>

int strcmp( const char *s1, const char *s2 ); = confronta le stringhe, la funzione restiruira'
0, un valore minore di 0 o maggiore di 0 qualora s1 sia rispettivamente uguale, minore o
maggiore di s2.

int strncmp( const char *s1, const char *s2, size_t n ) = confronta un massimo di caratteri n,
di s1 con la stringa s2 , restituira' 0, un valore minore di 0 o maggiore di 0, qualora s1 sia
rispettivamente uguale, minore o maggiore di s2;

-----------------------------------------------------------------------------------------------

Funzioni di ricerca per la gestione delle stringhe: <string.h>

char *strchr( const char *s, int c ); = indiviadua la prima occorenza del carattere c nella
stringa s qualora c sia stato trovato, sara' restituito un puntatore a alla locazione di c in s,
altrimenti restituira' NULL.

size_t strcspn( const char *s1, const char *s2 ); = determina e restituisce la lunghezza del
segmento iniziale della stringa s1 che non contenga nessuno dei caratteri inclusi in s2.

size_t strspn( const char *s1, const char *2 ); = determina e restituisce la lunghezza del
segmento iniziale della stringa s1 che contenga soltanto i caratteri inclusi in s2;

char *strpbrk( const char *s1, const char *s2 ); = individua nella stringa s1 la prima occorenza
di uno qualsiasi dei caratteri inclusi in s2, qualora un carattere della stringa s2 sia
ritrovato in s1, sara' restituito un puntatore alla locazione di quel carrater in s1,
altrimenti un puntatore NULL;

char * strrchr( const char *s, int c ); = individua l'ultima occorenza di c nella stringa s,
qualora c sia stato trovato, sara' restituito un puntatore alla locazione di c nella stringa s,
in caso contrario sara' restituito un puntatore NULL;

char *strstr( const char *s1, const char *s2 ); = individua la prima occorenza della stringa s2
in s2, qualora la stringa sia stata trovata, sara' restituito un puntatore alla locazione di s2
nella stringa s1. In caso contratio sara' restituito un puntatore NULL;

char *strtok( char *s1, const char *s2 ); = una sequenza di invocazioni di strtok dividera' la
stringa s1 in "token" separati da caratteri contenuti ella stringa s2. La prima invocazione
dovra' contenere s1 come primo argomento, mentre quelle susseccessive dovranno contenere NULL,
qualora si voglia suddividere la stessa stringa. Ogni invocazione restituira' un puntatore al
token corrente. Nel caso non ci fossero piu' token la funzione restituira' NULL.

-----------------------------------------------------------------------------------------------

Funzioni per la manipolazione della memoria per la gestione delle stringhe: <string.h>

void *memcpy( void *s1, const void *s2, size_t n ); = copia un n caratteri dall'oggeto puntato
da s1, restituisce un puntatore all'ogetto risultante.

void *memmove( void *s1, const void *s2, size_t n ); = copia n caratteri dall'oggetto puntato
da s2 in quello puntato da s1, restituisce un puntatore all'oggeto risultante;

int memcmp( const void *s1, const void *s2, size_t n ); = confronta i primi n caratteri degli
oggetti puntati da s1 e da s2, la funzione restituisce un valore uguale, minore o maggiore
di 0 qualora s1 sia rispettivamente uguale, minore o maggiore di s2;

void *memchr( const void *s, int c, size_t n ); = individua la prima occorenza di c (
convertito in un unsignd char) nei primi n caratteri dell'oggeto puntato da s, qualora c sia
stato ritrovato, sara' restituito un puntatore alla locazione di c nell'oggetto, in caso
contrario sara' restituito un puntatore NULL;

coid *memset( void *s, int c, size_t n ); = copia c( convertito in un unsigned char ) nei primi
n caratteri dell'oggetto puntato da s. Restituisce un puntatore all'oggetto risultante;

-----------------------------------------------------------------------------------------------

Altre funzioni per la gestione delle stringhe:

char *trerror( int errornum ); = traduce errornum in una stringa di testo dipendente dal
sistema, restiuisce un puntarore alla stringa;

size_t( const char *s ); = determina la lunghezza della stringa s, restituendo il numero
caratteri che precedono il carattere nullo di terminazione;

-----------------------------------------------------------------------------------------------

Operare coi bit:

Operatori Bitwise:

& = i bit del risultato sono impostati a 1, se quelli corrispondenti nei operandi sono entrambi
1;

| = i bit del risultato sono impostati a 1, se almeno una dei bit corrispondneti nei due
operandi e' 1;

^ = i bit del risultato sono impostati a 1, se sol uno dei bit corrispondenti nei due operandi
e' 1;

<< = fa scorrere a sinistra i bit del primo operando, per un numero di volte specificato dal
secondo operando, i bit rimasti vuoti a destra sono riempiti con 0;

>> = l'opposto di <<;
~ = tutti i bit a 0 sono impostati a 1 e tutti i bit a 1 sono impostati a 0;

-----------------------------------------------------------------------------------------------

Operatori di assegnamento bitwise:

&= = operatore di assegnamento bitwise AND;
|= = operatore di assegnamento bitwise OR inclusivo;
^= = operatore di assegnamento bitwise OR esclusivo;
<<= = operatore di assegnamento scorimento a sinistra;
>>= = operatore di assegnamento scorrimento a destra;

Nelle operazioni con bitwise si possono utilizzare tutti gli operatori usuali(unari, logici ecc
..);
Alcuni sistemi non supportano le operazione in bit che vengono solitamente usate per
applicazioni con un alto grado di efficienza.

-----------------------------------------------------------------------------------------------

Scrivere e leggere file: <stdio.h>

int dato = 13;

FILE *xPtr; = inizializza il puntatore a un file;

xPtr=fopen( "dati.dat", "w" ); = apre il file, assegnandolo al puntatore, "dati.dat" e' la path
assoluta del file, mentre "w" e' il metodo di scrittura;

fprintf( xPtr, "%d", dato ); = scrive nel file aperto in precedenza con fopen cio' che e'
racchiuso fra gli apici doppi ";

fscanf( xPtr, "%d", dato ); = legge dal file aperto in precedenza con fopen cio' che viene
indicato all'interno degli apici dooppi ";

In C non viene definita una struttura per la scrittura e la lettura dei file;

-----------------------------------------------------------------------------------------------

Metodi di scrittura e lettura:

r = apre un file in lettura;
w = crea un file per la scrittura, se esiste gia eliminera' il suo contenuto;
a = accoda, apre o crea un file per scrivere alla fine dello stesso;

r+= apre un file in aggiornamento(lettura e scrittura);
w+ = crea un file per l'aggiornamento, se esiste gia ne eliminera' il contenuto;
a+ = accoda, apre o crea un file per l'accodamento;

rb = apre un file in lettura in modalita' binaria;
wb = crea un file per la scrittura in modalita' binaria, se esiste gia ne elimina' il contenuto;
ab = accoda, apre o crea un file per scrivere alla fine dello stesso in modalita' binaria;

rb+ = apre un file in aggiornamento (lettura e scrittura) in modalita' binaria;
wb+ = crea un file per la scrittura in modalita' bianria, se esiste gia ne elimina il contenuto;
ab+ = accoda, apre o crea un file per l'accodamento in modalita' binaria, la scrittura sara'
eseguita alla fine del file;

-----------------------------------------------------------------------------------------------

Strutture:
una struttura crea un nuovo tipo di dato;

struct esempio {
char *facce;
int *numeri;
};

typedef esempio Es;

Es carta[20];

carta[2].facce = "picche";
carta[2].numeri = 2;

-----------------------------------------------------------------------------------------------

Unioni:
creano un nuovo tipo di dato , come le strutture, la differenza e' che condividera' la stessa
area della memoria ma sara' visibile in piu' tipi di dato:

union numero{
int x;
double y;
};

union numero valore ={ 10 };

printf("%d\t%.2f", valore.x, valore.y");

mostrera' 10 e 10.00;

------------------------------------------------------------------------------------------------

Costanti di enumerazione:
E' l'ultimo tipo di dato definibile dall'utente.

enum mesi { GEN, FEB, MAR , APR , MAG, GIU, LUG, AGO, SET, OTT, NOV, DIC};

la struttura e' quella di un vettore costante, conterra 12 membri, da 0 a 11;
si puo' decidere il valore dei membri che pero' dovra' essere univoco;

enum mesi { GEN = 1, FEB, MAR , APR , MAG, GIU, LUG, AGO, SET, OTT, NOV, DIC};

in questo caso saranno assegnati dei valori da 1 a 12;

-----------------------------------------------------------------------------------------------

Strutture ricorsive:
una strttura ricorsiva e' un struttura che contiene un puntatore a una copia di se stessa.

struct nodo{
int dato;
struct node *nextPtr;
};

-----------------------------------------------------------------------------------------------

Allocazione della memoria:

Ptr = malloc( typedef ( struct nodo ) ); = alloca un n byte pari a quelli della struttura;
free( Ptr ) = libera la memoria allocata per Ptr;

void *calloc( size_t nmemb, size_t size ); = nmemb e' il numero degli elementi, memntre size
loro dimensione, serve a allocare dinamicamente la memoria di un vettore;

void *realloc( void *Ptr, size_t size ); = Ptr e' un puntatore all'oggetto originale, mentre
size e' la nuova dimensione dello stesso;

-----------------------------------------------------------------------------------------------

Direttive al processore:
vengono eseguite solo i nfase di compilazione;
tutto cio' che sussegue # e' una direttiva al porcessore;

#define CIAO 4 = definisce una costante, ma e' possibile definire anche funzioni con la stessa
sintassi;

#include "ciao.h" = include una libreria presente nella cartella;
#include <stdio.h> = include una libreria di sistema;
#ifdef CIAO = se ciao e' definito esegui le istruzioni;
istruzioni;
#endif

#if !defined(CIAO) = se ciao non e' definito esegue le istruzioni;
istruzioni;
#endif;

#if 0 = fra le direttive non si possono inserire commenti;
codice per commenti;
#endif

#error token = visualizza un messaggio dipendente dall'implementazione con all'interno token;
#pragma token = provoca un'azione definita dall'implementazione;

## = concatena due elementi;

#line 100 "file1.c" = indica che le prossime righe saranno numerate da 100 e che i messaggi di
errore dovranno far riferimento a file.c.

assert( x <= 10 ) = se x e' maggiore di 10 ferma le'secuzione del programma visualizzando un
messaggio di errore, se viene definito #define NDEBUG tutti gli assert presenti nel sorgente
varranno ignorati da dove e' stato definito;
