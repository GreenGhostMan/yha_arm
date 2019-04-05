void setupServo()
{
  j1.attach(5);
  j2.attach(6);
  j1.write(90);
  j2.write(90);
  //delay(3000);
}

void movej1(float rad)
{
  int deg=radToDeg(rad);
  //ji min and and j1 max because radan is limit -1.57 to +1.57
  if(deg<0 || deg>180) errorRobot();
  else(j1.write(deg));
}

void movej2(float rad)
{
  int deg=radToDeg(rad);
  if(deg<0 || deg>180) errorRobot();
  else(j2.write(deg));
}
