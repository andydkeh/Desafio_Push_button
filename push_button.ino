const int led = 13; 
const int botao = 2;
const int led_dois = 7;
const int botao_dois = 12;
const int led_tres = 4;
const int botao_tres = 8;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(led_dois, OUTPUT);
  pinMode(botao_dois, INPUT);
  
}

void loop(){
if (digitalRead(botao)== HIGH) {
        digitalWrite(led, HIGH);
    } else {
    	digitalWrite(led, LOW);
  
  }

if (digitalRead(botao_dois) == HIGH) {
        digitalWrite(led_dois, HIGH);
    } else {
        digitalWrite(led_dois, LOW);

    }

if (digitalRead(botao_tres) == HIGH) {
      	digitalWrite(led, HIGH);
      	digitalWrite(led_dois, HIGH);
        digitalWrite(led_tres, HIGH);
      	delay(1000);
    } else {
      	digitalWrite(led, LOW);
        digitalWrite(led, LOW);
        digitalWrite(led_dois, LOW);
        digitalWrite(led_tres, LOW);
    } 
  }

