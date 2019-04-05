void eepWrite(int value) {
  EEPROM.write(x,value);
}
void eepRead(){
  current_position = EEPROM.read(x);
}

