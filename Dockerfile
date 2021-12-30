FROM gcc:9.2.0

WORKDIR /usr/src/app

COPY . .

RUN mkdir obj
RUN make

CMD [ "./main" ]