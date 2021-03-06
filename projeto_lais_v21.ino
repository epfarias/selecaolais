/*
  Botoes de Alimentação, Sede, Calor, Frio e Pânico.
 
 Liga e desliga um LED conectado aos pinos digitais quando pressionado algum botao conectado ao seu respectivo pino.
 
 O Circuito:
 * LED conectados aos pinos 8,9,10,11,12 e 13 e ao GND.
 * botoes conectados aos pinos 2,3,4,5,6 e 7 desde 5V
 * resistor de 100 conectados aos pinos 2,3,4,5 e 6 desde o terra
*/

// constantes nao sao alteradas.
// Sao usadas aqui para definir os numeros dos pinos:
int pinBuz = 1;         // Buzzer
const int buttonPin2 = 2;     // Botão de Alimentação
const int ledPin2 =  13;      // LED de Alimentação
const int buttonPin3 = 3;     // Botão de Sede
const int ledPin3 =  12;      // LED de Sede
const int buttonPin4 = 4;     // Botão de Calor
const int ledPin4 =  11;      // LED de Calor
const int buttonPin5 = 5;     // Botão  de Frio
const int ledPin5 =  10;      // LED de Frio
const int buttonPin6 = 6;     // Botão de TV
const int ledPin6 =  9;       // LED de TV
const int buttonPin7 = 7;     // Botão de Pânico
const int ledPin7 =  8;       // LED de Pânico


// variaveis que devem mudar:
int button2State = 0;         // variavel para ler o estado do botao de alimentação
int button3State = 0;         // variavel para ler o estado do botao de sede
int button4State = 0;         // variavel para ler o estado do botao de calor
int button5State = 0;         // variavel para ler o estado do botao de frio
int button6State = 0;         // variavel para ler o estado do botao de tv
int button7State = 0;         // variavel para ler o estado do botao de pânico

void setup() {
  // inicializa o pino do LED como saida:
  pinMode(ledPin2, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin2, INPUT);
    // inicializa o pino do LED como saida:
  pinMode(ledPin3, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin3, INPUT); 
    // inicializa o pino do LED como saida:
  pinMode(ledPin4, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin4, INPUT);
    // inicializa o pino do LED como saida:
  pinMode(ledPin5, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin5, INPUT);
    // inicializa o pino do LED como saida:
  pinMode(ledPin6, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin6, INPUT);
  // inicializa o pino do LED como saida:
  pinMode(ledPin7, OUTPUT);     
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin7, INPUT);
  // inicializa o pino do buzzer como saida:
  pinMode(pinBuz, OUTPUT);
}
void loop(){
  // faz a leitura do valor do botao:
  button2State = digitalRead(buttonPin2);
    // faz a leitura do valor do botao:
  button3State = digitalRead(buttonPin3);
    // faz a leitura do valor do botao:
  button4State = digitalRead(buttonPin4);
    // faz a leitura do valor do botao:
  button5State = digitalRead(buttonPin5);
    // faz a leitura do valor do botao:
  button6State = digitalRead(buttonPin6);
   // faz a leitura do valor do botao:
  button7State = digitalRead(buttonPin7);

  // verifica se o botao esta pressionado.
  // em caso positivo, buttonState e HIGH:
  if (button2State == HIGH) {   
    // liga o LED:   
    digitalWrite(ledPin2, HIGH);
    tone(pinBuz,2999,800);// esta linha de código é usada especialmente para o buzzer
                      //O seu funcionamento é : o pino(buz = 8), a frequência e o tempo de duração em milissegundos
    delay(10000);      //delay (ms)
  }
  else {
    // desliga o LED:
    digitalWrite(ledPin2, LOW);
  }
  
  if (button3State == HIGH) {   
    // liga o LED:   
    digitalWrite(ledPin3, HIGH);
    tone(pinBuz,2999,800);// esta linha de código é usada especialmente para o buzzer
                      //O seu funcionamento é : o pino(buz = 8), a frequência e o tempo de duração em milissegundos
    delay(10000);      //delay (ms)
  }
  else {
    // desliga o LED:
    digitalWrite(ledPin3, LOW);
  }
  
  if (button4State == HIGH) {   
    // liga o LED:   
    digitalWrite(ledPin4, HIGH);
    tone(pinBuz,2999,800);// esta linha de código é usada especialmente para o buzzer
                      //O seu funcionamento é : o pino(buz = 8), a frequência e o tempo de duração em milissegundos
    delay(10000);      //delay (ms)
  }
  else {
    // desliga o LED:
    digitalWrite(ledPin4, LOW);
  }
  
  if (button5State == HIGH) {   
    // liga o LED:   
    digitalWrite(ledPin5, HIGH);
    tone(pinBuz,2999,800);// esta linha de código é usada especialmente para o buzzer
                      //O seu funcionamento é : o pino(buz = 8), a frequência e o tempo de duração em milissegundos
    delay(10000);      //delay (ms)
  }
  else {
    // desliga o LED:
    digitalWrite(ledPin5, LOW);
  }
  
  if (button6State == HIGH) {   
    // liga o LED:   
    digitalWrite(ledPin6, HIGH);
    tone(pinBuz,2999,800);// esta linha de código é usada especialmente para o buzzer
                      //O seu funcionamento é : o pino(buz = 8), a frequência e o tempo de duração em milissegundos
    delay(10000);      //delay (ms)
  }
  else {
    // desliga o LED:
    digitalWrite(ledPin6, LOW);
  }
  
  if (button7State == HIGH) {   
    // ligao LED:   
    digitalWrite(ledPin7, HIGH);
    tone(pinBuz,2999,800);// esta linha de código é usada especialmente para o buzzer
                      //O seu funcionamento é : o pino(buz = 8), a frequência e o tempo de duração em milissegundos
    delay(10000);      //delay (ms)
  }
  else {
    // desliga o LED:
    digitalWrite(ledPin7, LOW);
  }
 
}