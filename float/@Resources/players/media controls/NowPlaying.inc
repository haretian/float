[Player]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=#Player#
PlayerType=FILE

[Progress]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Progress

[PlayerState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
DynamicVariables=1
PlayerType=State
IfCondition  =(PlayerState=1)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
