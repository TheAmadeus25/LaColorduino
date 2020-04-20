/*
  ┌────────────────────────────────────────────────────┐
  │ LaColorduino by TheAmadeus25                                                     ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/LaColorduino/                                     ┃
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! Read the Wiki on GitHub. Otherwise you will not understand how to     ┃
  │ install all THREE Sourcecodes. For problems, the Wiki is a good place to find    ┃
  │ out, how to solve it.                                                            ┃
  ├────────────────────────────────────────────────────┤
  │ InitBME280(): Configuration of                                                   ┃
  │ GetBME280() :                                                                    ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 24.Dec.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitUDP2() {
  Udp2.begin(Power.localUdpPort);
  
  return;
}


bool GetUDP2() {
  Power.UDP_Input = false;
  Power.packetSize = Udp2.parsePacket();
  if (Power.packetSize) {
    digitalWrite(ESP_Led, LOW);
    Power.UDP_Input = true;
    Power.len = Udp2.read(Power.incomingPacket, 128);
    if (Power.len > 0) {
      Power.incomingPacket[Power.len] = 0;
    }
    
    //Serial.println(incomingPacket);

    // send back a reply, to the IP address and port we got the packet from
    //Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
    //Udp.write(replyPacket);
    Udp2.endPacket();
    digitalWrite(ESP_Led, HIGH);
    Parsing2();
  }

  return Power.UDP_Input;
}

void Parsing2() {
  //char Buffer[payload.length() + 1];
  //payload.toCharArray(Buffer, (payload.length() + 1) );
/*
  Player.health   = atoi( strtok(CSGO.incomingPacket, ";") );
  Player.armor    = atoi( strtok(NULL,           ";") );
  Player.helmet   = strtok(NULL,                 ";");
  Round.win_team  = strtok(NULL,                 ";");
  Player.flashed  = atoi( strtok(NULL,           ";") );
  Player.smoked   = atoi( strtok(NULL,           ";") );
  Player.activity = strtok(NULL,                 ";");
*/
  Power.Transmitting = atof( strtok(Power.incomingPacket, ";") );
  Power.Unit         = atoi( strtok(NULL,           ";") );

  //Refresh.last_refresh = millis();

  return;
}
