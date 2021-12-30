## Buiding docker image
docker build -t project .

## Running docker image
docker run --name=rubik -v $PWD/cpp:/usr/src/app/cpp -it --rm project bash -l

## Buiding and Running docker image
docker build -t project . && docker run --name=rubik -v $PWD/cpp:/usr/src/app/cpp -it --rm project bash -l