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

void InitUDP() {
  Udp.begin(CSGO.localUdpPort);
  //Serial.printf("Now listening at IP %s, UDP port %d\n", WiFi.localIP().toString().c_str(), localUdpPort);
  
  return;
}


bool GetUDP() {
  CSGO.UDP_Input = false;
  CSGO.packetSize = Udp.parsePacket();
  if (CSGO.packetSize) {
    digitalWrite(ESP_Led, LOW);
    CSGO.UDP_Input = true;
    CSGO.len = Udp.read(CSGO.incomingPacket, 128);
    if (CSGO.len > 0) {
      CSGO.incomingPacket[CSGO.len] = 0;
    }
    
    //Serial.println(incomingPacket);

    // send back a reply, to the IP address and port we got the packet from
    //Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
    //Udp.write(replyPacket);
    Udp.endPacket();
    digitalWrite(ESP_Led, HIGH);
    Parsing();
  }

  return CSGO.UDP_Input;
}

void Parsing() {
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
  Player.kills    = atoi( strtok(CSGO.incomingPacket, ";") );
  Player.assists  = atoi( strtok(NULL,           ";") );
  Player.deaths   = atoi( strtok(NULL,           ";") );
  Player.health   = atoi( strtok(NULL,           ";") );
  Round.bomb      = strtok(NULL,                 ";");
  Round.win_team  = strtok(NULL,                 ";");
  //strtok(NULL,                 ";");
  
  //Refresh.last_refresh = millis();

  return;
}
