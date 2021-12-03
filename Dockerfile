FROM alpine:latest
VOLUME /tmp
COPY bin/area area
ENTRYPOINT ["ls", "-l", "/"] 
