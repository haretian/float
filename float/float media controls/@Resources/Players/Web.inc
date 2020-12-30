[Player]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover

[Cover]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover
CoverPath =#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Title
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Artist
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Album
Substitute="":"N/A"

[Progress]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Duration

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Position]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Position

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=State
DynamicVariables=1
IfCondition  =(PlayerState=1)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
