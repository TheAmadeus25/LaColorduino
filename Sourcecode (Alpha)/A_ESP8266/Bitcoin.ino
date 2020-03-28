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
  │ GetBitcoin(): Parsing Information                                                ┃
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

void GetBitcoin() {

  // printTickerData("bitcoin");
  // printTickerData("ethereum");
  // printTickerData("dogecoin");

  // Currency is optional, so you can pass only ticker if you want.
  // Check out the currency drop down on CoinMarketCap.com to get available values

  CMCTickerResponse response = api2.GetTickerInfo("bitcoin", "eur");
  if (response.error == "") {
    Bitcoin.ID               = response.id;
    Bitcoin.Name             = response.name;
    Bitcoin.Symbol           = response.symbol;
    Bitcoin.Rank             = response.rank;
    Bitcoin.Value_to_USD     = response.price_usd;
    Bitcoin.Value            = response.price_btc;
    Bitcoin.Supply_Available = (long)response.available_supply;
    Bitcoin.Supply_Max       = (long)response.total_supply;
    Bitcoin.Change_1h        = response.percent_change_1h;
    Bitcoin.Change_24h       = response.percent_change_24h;
    Bitcoin.Change_7d        = response.percent_change_7d;
    Bitcoin.Last_Update      = (long)response.last_updated;

    if (Debug_Serial == true) {
      Serial.println("----------------------------------");
      Serial.print("Bitcoin ID     : ");
      Serial.println(Bitcoin.ID);

      Serial.print("Bitcoin Name   : ");
      Serial.println(Bitcoin.Name);

      Serial.print("Bitcoin Symbol : ");
      Serial.println(Bitcoin.Symbol);

      Serial.print("Bitcoin Rank   : ");
      Serial.println(Bitcoin.Rank);

      Serial.print("Bitcoin USD    : ");
      Serial.println(Bitcoin.Value_to_USD);

      Serial.print("Bitcoin        : ");
      Serial.println(Bitcoin.Value);

      Serial.print("Bitcoin Availab: ");
      Serial.println(Bitcoin.Supply_Available);

      Serial.print("Bitcoin Max    : ");
      Serial.println(Bitcoin.Supply_Max);

      Serial.print("Bitcoin 1h     : ");
      Serial.println(Bitcoin.Change_1h);

      Serial.print("Bitcoin 24h    : ");
      Serial.println(Bitcoin.Change_24h);

      Serial.print("Bitcoin 7d     : ");
      Serial.println(Bitcoin.Change_7d);

      Serial.print("Bitcoin Update : ");
      Serial.println(Bitcoin.Last_Update);


    } else {
      if (Debug_Serial == true) {
        Serial.println("----------------------------------");
        Serial.print("Error getting data: ");
        Serial.println(response.error);
      }
    }
    //Serial.println("---------------------------------");
  }

  return;
}
