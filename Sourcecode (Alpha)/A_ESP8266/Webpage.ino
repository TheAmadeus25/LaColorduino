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
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

/*void InitWebpage() {
  if (MDNS.begin("esp8266")) {              // Start the mDNS responder for esp8266.local
    //Serial.println("mDNS responder started");
  } else {
    //Serial.println("Error setting up MDNS responder!");
  }

  SPIFFS.begin();
  server.onNotFound([]() {                              // If the client requests any URI
    if (!handleFileRead(server.uri()))                  // send it if it exists
      server.send(404, "text/plain", "404: Not Found"); // otherwise, respond with a 404 (Not Found) error
  });

  server.begin();                           // Actually start the server
}

bool handleFileRead(String path) { // send the right file to the client (if it exists)
  //Serial.println("handleFileRead: " + path);
  if (path.endsWith("/")) path += "index.html";         // If a folder is requested, send the index file
  String contentType = getContentType(path);            // Get the MIME type
  if (SPIFFS.exists(path)) {                            // If the file exists
    File file = SPIFFS.open(path, "r");                 // Open it
    size_t sent = server.streamFile(file, contentType); // And send it to the client
    file.close();                                       // Then close the file again
    return true;
  }
  //Serial.println("\tFile Not Found");
  return false;                                         // If the file doesn't exist, return false
}

String getContentType(String filename) {
  if (filename.endsWith(".htm"))        return "text/html";
  else if (filename.endsWith(".html"))  return "text/html";
  else if (filename.endsWith(".css"))   return "text/css";
  else if (filename.endsWith(".js"))    return "application/javascript";
  else if (filename.endsWith(".png"))   return "image/png";
  else if (filename.endsWith(".gif"))   return "image/gif";
  else if (filename.endsWith(".jpg"))   return "image/jpeg";
  else if (filename.endsWith(".ico"))   return "image/x-icon";
  else if (filename.endsWith(".xml"))   return "text/xml";
  else if (filename.endsWith(".pdf"))   return "application/x-pdf";
  else if (filename.endsWith(".zip"))   return "application/x-zip";
  else if (filename.endsWith(".gz"))    return "application/x-gzip";
  return "text/plain";
}
*/
