[Player]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover

[Progress]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Progress

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]