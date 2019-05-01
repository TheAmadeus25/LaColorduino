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
  │ InitADS1115():                                                                   ┃
  │ GetADS1115() :                                                                   ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 14.Apr.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void GetTwitch() {
  UserData user = twitch.getUserData(TWITCH_LOGIN);

  if (!user.error) {
    user.id;                                                      // Own User ID
    user.login;                                                   // Twitch Login (Data from ... User)
    user.displayName;                                             // Twitch Name  (Data from ... User)
    user.broadCasterType;                                         // Broadcaster Type (Partner etc.)
    user.description;                                             // Description
    user.profileImageUrl;                                         // Profile Image
    user.offlineImageUrl;                                         // Offline Image
    Twitch.View = (unsigned long)user.viewCount;                  // --- All Views ever

    FollowerData followerData = twitch.getFollowerData(user.id);

    if (!followerData.error) {
      Twitch.Follower = (unsigned long)followerData.total;        // --- Number of Followers
      followerData.fromId;                                        // Last Follower ID
      followerData.fromName;                                      // Last Follower Name
      followerData.followedAt;                                    // Last Follower at
    }
  }
  
  
  
}
