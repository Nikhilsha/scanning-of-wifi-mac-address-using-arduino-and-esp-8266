int x = 0;
int count = 0;
int temp = 1;
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
 //  Serial1.print("AT+CWLAP\r\n");

}
void loop()
{
  if (temp == 1) {
    Serial1.print("AT+CWLAP\r\n");
  }
  temp = 2;
  String response = "";
  while (Serial1.available()) {
    response = Serial1.readStringUntil('\n');
    Serial.println( "in"+response);
  }

  int count = 0;
  if (response != "") {
    //Serial.print(response);
    for (int j = 0; j < response.length(); j++)
    {
      if (response.charAt(j) == '"')
      {
        count++;
      }
      if (count == 3)
      {
        //Serial.println(response.substring(j+1,j+18));
        String y = comparision(response.substring(j + 1, j + 18));
        Serial.println(y + " is present");
        j = response.length() + 1;

      }
    }
  }

}
String comparision(String m)
{
  String macadd[10] = {
    /*[1]*/   "c8:d7:79:4f:e6:7a",
    /*[2]*/   "c8:3a:35:27:5d:30",
    /*[3]*/   "                                                          e4:5d:75:40:10:3f",
    /*[4]*/   "b6:ce:f6:f2:fc:8c",
    /*[5]*/   "1c:5f:2b:65:ac:1c",
    /*[6]*/   "78:02:f8:c4:bc:51",
    /*[7]*/   "74:91:1a:20:14:59",
    /*[8]*/   "ac:c1:ee:63:84:01",
    /*[9]*/   "d8:55:a3:96:fd:bb",
    /*[10]*/  "a0:63:91:07:a4:72"
  };
  String nam[10] = {
    /*[1]*/    "vibhor",
    /*[2]*/    "rishabh",
    /*[3]*/    "sagar",
    /*[4]*/    "sharda",
    /*[5]*/    "lokender",
    /*[6]*/    "abcd",
    /*[7]*/    "sag",
    /*[8]*/    "rishabh",
    /*[9]*/    "ankit"
   /*[10]*/    "nikhil"
  };

  for (int i = 0; i <= 10; i++)
  {
    if (m == macadd[i])
    {
      return (nam[i]);
    }
  }
}
