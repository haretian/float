[Player]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=#Player#
PlayerType=FILE

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