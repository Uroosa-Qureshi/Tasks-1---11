int ledPin[]={11,10,9,6};   
int i;
int j;
void setup(){ 
  
  for(i=0; i<4; i++){
  pinMode(i, OUTPUT);
 
} 
}


void loop()  { 
   for(j=0; j<4; j++){
  for(int i=0; i<= 255; i++) { 
  analogWrite(ledPin[j], i); 
   
  delay(2);

} 
  for(int i=254; i>=0; i--) {
 analogWrite(ledPin[j], i);  
     
    delay(2);

}
}  
}



