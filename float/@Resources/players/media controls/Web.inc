[Player]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover

[Progress]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Progress

[PlayerState]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=State
DynamicVariables=1
IfCondition  =(PlayerState=1)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
