//int radToStep(float rad)
//{
// int steps=int(rad*(200/6.2830));
// return steps;
//}

int radToStep(float rad)
{
  int newrad=int(rad*100);
  int steps=map(newrad,-314,314,-100,100);
//  Serial.print(rad);
//  Serial.print("=");
//  Serial.print(newrad);
//  Serial.print("=");
//  Serial.println(steps);
  return steps;
  
}

int radToDeg(float srad)
{
  int newsrad=int(srad*100);
  int deg=map(newsrad,-314,314,0,180);
//  Serial.print(srad);
//  Serial.print("=");
//  Serial.print(newsrad);
//  Serial.print("=");
//  Serial.println(deg);
  return deg;
  
}

