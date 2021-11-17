#define BROCHE_IN 2
#define BROCHE_FILPILOTE 1
#define VRAI 1
#define FAUX 0

int g_ecoplus;

void setup() {
  // put your setup code here, to run once:
  g_ecoplus = FAUX ;
  pinMode(BROCHE_IN,INPUT_PULLUP);
}

void signalMoinsUn(int i_numero_broche){
    digitalWrite(i_numero_broche,HIGH);
    delay(3000);
    digitalWrite(i_numero_broche,LOW);
    delay(307000);
}

void signalMoinsDeux(int i_numero_broche){
    digitalWrite(i_numero_broche,HIGH);
    delay(7000);
    digitalWrite(i_numero_broche,LOW);
    delay(303000);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  g_ecoplus=digitalRead(BROCHE_IN);
  if(g_ecoplus == VRAI){
    //Signal pilote -1°C
    signalMoinsUn(BROCHE_FILPILOTE);
  }else{
    //Signal pilote -2°C
    signalMoinsDeux(BROCHE_FILPILOTE);
  }
}
