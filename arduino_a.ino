bool finished=true 

const int BUTTON1 = 12;
const int BUTTON2 = 11;
const int BUTTON3 = 10;
const int BUTTON4 = 9;
const int BUTTON5 = 6;

const int BUTTONS []= {BUTTON1 ,BUTTON2 ,BUTTON3 ,BUTTON4 ,BUTTON5};




bool N [] = {false ,false,false,false,false};

const int LED=3;
bool running=false ;
int timer=5000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i=0; i<5;i++){
    pinMode(BUTTONS[i],INPUT_PULLUP);
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  if (finished=false){
  button();
  
  my_function();
  
  delay(1);

  

  if(N[0] == true && N[1] == false && N[2] == true && N[3] == false && N[4]==true) {
  Serial.println("you win");
  bool running=false;
  finished=true}
}

}

void button(){ 
    
    for (int i=0; i<5; i++){
      int counter=digitalRead(BUTTONS[i]);
      if (counter==LOW){
        bool running=true ;
        N[i]=true;
        // Serial.println(i);
        }
    } 
}


void my_function(){

  if (!running){
    return;

  }
  
  timer-=1;//increment timer each mili second 
  Serial.println(timer);
  if (timer <= 0){//when time reach 0 reset timer and stored button vaules and  flash light to indcate to user 
    Serial.println("you play");
    timer=5000;
    
    
    for (int i=0;i<5;i++){
      
      N[i]=false;
    
    digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(LED, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second

    

  }

}
}
