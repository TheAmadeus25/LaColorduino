void InitUDP() {
  udp.beginPacket(udpAddress,udpPort);
  
  return;
}

void SendUDP() {
  InitUDP();

  switch(Setting.Page) {
    case 0: udp.printf("%f;0;", Messuring.VBS); break;
    case 1: udp.printf("%f;1;", Messuring.ShA); break;
    case 2: udp.printf("%f;2;", Messuring.VPW); break;
  }
  
  udp.endPacket();
  
  return;
}
