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

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]