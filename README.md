# SZE-MOSZE-2020-import_team_name

## What does the code do?
The characters take turns attacking each other. The damage value of the attacking character is subtracted from the defensive character's health.
This continues in this way alternately until one of them loses. At the end the winner and its remaining health is listed.

*JSON format example:*
```javascript
{
  "name" : "ExampleName",
  "hp" : 100,
  "dmg" : 5
}
```

## How to run the code

First compile it with the following command ***g++ -std=c++17 *.cpp***

*Example:*
***./a.out gates.json page.json***

If the input is not correct then it will throw an exception. 
Otherwise the warriors attack each other back and forth until one of them dies.


 :+1: It's ready to merge! :shipit:
