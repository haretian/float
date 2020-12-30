[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify

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