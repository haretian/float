[Player]
Measure=Plugin
Plugin =GPMDPPlugin

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