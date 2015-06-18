char BYTE;
int led[] = {
  2,3,4};

void setup(){

  Serial.begin(9600);

  for(int i=0; i<=2; i++){
    pinMode(led[i], OUTPUT);
  } //for

} //setup

void loop(){

  Serial.println("Please Type 2, 3, 4 or 0");
  while (!Serial.available());
  BYTE = Serial.read();
  Serial.print(BYTE);
  chooseLED(BYTE);

} //loop

void chooseLED(char myChar){

  if(myChar == '2'){
    digitalWrite(led[0], HIGH);
  } //if2

  if(myChar == '3'){
    digitalWrite(led[1], HIGH);
  } //if3

  if(myChar == '4'){
    digitalWrite(led[2], HIGH);
  } //if4

  if(myChar == '0'){
    clearAll();
  } //if0

} //chooseLED

void clearAll(){

  for(int i=0; i<=2; i++){
    digitalWrite(led[i], LOW);
  } //for

} //clearAll

