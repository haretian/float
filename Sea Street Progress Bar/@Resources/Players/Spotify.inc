[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify

[Cover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
CoverPath=#@#Images\Cover.png

[Track]
Measure   =Plugin
Plugin    =SpotifyPlugin
Type      =TrackName
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Album]
Measure   =Plugin
Plugin    =SpotifyPlugin
Type      =AlbumName
Substitute="":"N/A"

[Artist]
Measure   =Plugin
Plugin    =SpotifyPlugin
Type      =ArtistName
Substitute="":"N/A"

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Progress]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Progress


OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Duration]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Duration

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[Position]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Position

OnChangeAction=[!UpdateMeter #CurrentSection#Display][!Redraw]

[PlayerState]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=State

[PlayerStateCalc]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Playing
DynamicVariables=1
IfCondition  =(PlayerState=0)
IfTrueAction =[!ShowMeter PauseShape][!HideMeter PlayShape]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape]
