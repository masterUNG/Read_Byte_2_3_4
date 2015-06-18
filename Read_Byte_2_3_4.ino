char BYTE;
int led[] = {2,3,4};

void setup(){

  Serial.begin(9600);
  
  for(int i=0; i<=2; i++){
  pinMode(led[i], OUTPUT);
  } //for

} //setup

void loop(){

  Serial.println("Please Type 2, 3, 4 or 0");

} //loop
