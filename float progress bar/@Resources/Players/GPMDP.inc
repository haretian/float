[Player]
Measure=Plugin
Plugin =GPMDPPlugin

[Cover]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Cover
CoverPath=#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Title
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Artist
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Album
Substitute="":"N/A"

[Progress]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Duration

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Position]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=Position

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure   =Plugin
Plugin    =GPMDPPlugin
PlayerInfo=State
DynamicVariables=1
IfCondition  =(PlayerState=1)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
