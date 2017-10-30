FROM gcc:latest
WORKDIR /app
ADD . /app
RUN mkdir /Users
RUN mkdir /Users/jzhang201
RUN mkdir /Users/jzhang201/csci5573
VOLUME /Users/jzhang201/csci5573
RUN g++ -o testContainer main.cpp
CMD ["/app/testContainer"]
