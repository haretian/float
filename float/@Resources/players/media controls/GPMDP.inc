[Player]
Measure=Plugin
Plugin =GPMDPPlugin

[Progress]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Progress

[PlayerState]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=State
DynamicVariables=1
IfCondition  =(PlayerState=1)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
