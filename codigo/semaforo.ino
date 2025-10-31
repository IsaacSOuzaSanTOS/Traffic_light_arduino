// C++ code
//
class Led {
private:
  int pin;
  int time;
  bool state;
  String color;
  
public:
  Led(int p, int t, String c) {
  	pin = p;
    time = t;
    color = c;
    state = false;
    pinMode(pin, OUTPUT);
  }
  
  void turnOn(){
    state = true;
    digitalWrite(pin, state);
  }
  
  void turnOff(){
    state = false;
    digitalWrite(pin, state);
  }
  
  void blinkOnce(){
  	turnOn();
    delay(time);
    turnOff();
    delay(time);
  }
  
  void blink(int times){
    for (int i = 0; i < times; i++){
    	blinkOnce();
    }
  }
};

Led* red;
Led* green;
Led* yellow;

void setup()
{
  red = new Led(13, 6000, "vermelho");
  green = new Led(11, 4000, "verde");
  yellow = new Led(12, 2000, "amarelo");

}

void loop()
{
  red->turnOn();
  delay(6000);
  red->turnOff();
  
  green->turnOn();
  delay(4000);
  green->turnOff();
  
  yellow->turnOn();
  delay(2000);
  yellow->turnOff();
}