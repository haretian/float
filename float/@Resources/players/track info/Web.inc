[Player]
Measure   =Plugin
Plugin    =WebNowPlaying
PlayerType=Cover

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