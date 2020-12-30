[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify

[Progress]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Progress


OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]