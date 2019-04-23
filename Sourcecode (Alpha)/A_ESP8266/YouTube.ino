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
  │ GetYouTube(): Parsing Information                                                ┃
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

void GetYouTube() {
  if ( api.getChannelStatistics(CHANNEL_ID) ) {
    YouTube.Subscriber = api.channelStats.subscriberCount;
    YouTube.View       = api.channelStats.viewCount;
    YouTube.Comment    = api.channelStats.commentCount;
    YouTube.Video      = api.channelStats.videoCount;
  }

  if (Debug_Serial == true) {
    Serial.println("----------------------------------");

    Serial.print("Subscriber     : ");
    Serial.println(YouTube.Subscriber);

    Serial.print("View           : ");
    Serial.println(YouTube.View);

    Serial.print("Comment        : ");
    Serial.println(YouTube.Comment);

    Serial.print("Video          : ");
    Serial.println(YouTube.Video);
  }

  return;
}
