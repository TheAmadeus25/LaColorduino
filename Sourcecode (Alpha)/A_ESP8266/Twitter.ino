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
  │ InitTwitter(): Configuration of Twitter                                          ┃
  │ GetTwitter() : Parsing Information                                               ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 29.Apr.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + New Feature                                                                    ┃  
  └────────────────────────────────────────────────────┘
*/

void InitTwitter() {
  api3.setBearerToken(BEARER_TOKEN);
  haveBearerToken = true;
}

void GetTwitter() {
  String responseString = api3.getUserStatistics(screenName);
  DynamicJsonBuffer jsonBuffer;
  JsonObject& response = jsonBuffer.parseObject(responseString);
  if (response.success() ) {
    Twitter.Follower  = response["followers_count"];
    Twitter.Friends   = response["friends_count"];
    Twitter.Favorites = response["favourites_count"];
    Twitter.Tweets    = response["statuses_count"];
    Twitter.Last_Retweet  = response["status"]["retweet_count"];
    Twitter.Last_Favorite = response["status"]["favorite_count"];
    
  } else {
    // Ignore Error atm
  }//END IF-ELSE

  response.invalid();
  
}
