# MCCPP

Minecraft server in C++

Full handshaking, login, (online-mode) auth, encryption, and compression is implemented.

Working on Configuration state, then will look at the Play state.

# Changelog

## Update 11/22/1918 PDT

NBT builder generified a bit. Needs more work. Now able to send configuration disconnect, configuration keep alive.
Handles configuration keep alive response. Client can now wait indefinitely in this state.

## Update 11/22/23 0352 PDT

NBT abstract syntax and builder created. Builder could use some work to be more fluent. Next, NBT serde.

## Update 11/21/23 0254 PDT

Handle the two sent configuration packets. I need to write NBT processing tools to send registry data to proceed.

## Update 11/21/23 0224 PDT

Full network rewrite. Handles packet compression/decompression.

## Update 11/20/23 0253 PDT

Handles the full login state now, including auth with Yggdrasil and protocol encryption. Still doesn't do packet
compression, but that shouldn't be hard. Investigating configuration state now.

## Update 11/18/23 0038 PDT

Handles the encryption response, successfully verifies the verify token and accepts the shared secret as valid if
verify token validates. Creates server id hash and sends request to mojang auth server. Auth server is replying with
204 No Content, but I expect content per wiki.vg so need to investigate. But stopping for now.

## Update 11/17/23 1831 PDT

Now accepts login start and sends an encryption request and successfully receives the encryption response.
Next on this list would be to send authentication to Mojang authserver, get that response, and send a
login success to move onto the configuration stage.

## Update: 11/17/23 0358 PDT

Now creates an rsa keypair on startup, shoves networking in own thread, and
handles login start. Investigating proto encryption, then maybe compression. If that goes anywhere, I'll
look into authentication. At that point, I'm kinda deep. I have no idea where I'd start with worldgen
or actually spawning a player in a world, but...we'll see.
