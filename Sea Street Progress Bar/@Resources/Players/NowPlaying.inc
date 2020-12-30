[Player]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=#Player#
PlayerType=FILE

[Cover]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=COVER

[Track]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=TITLE
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Artist]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=ARTIST
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=ALBUM
Substitute="":"N/A"

[Progress]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Duration

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Position]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=Position

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[Player]
DynamicVariables=1
PlayerType=State
IfCondition  =(PlayerState=1)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
