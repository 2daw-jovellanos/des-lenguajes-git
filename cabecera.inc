<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title><?=$titulo?></title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.2.1/css/bootstrap.min.css"
        integrity="sha384-GJzZqFGwb1QTTN6wy59ffF1BuGJpLSa9DkKMp0DgiMDm4iYMj70gZWKYbI706tWS" crossorigin="anonymous">
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js"
        integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous">
    </script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.6/umd/popper.min.js"
        integrity="sha384-wHAiFfRlMFy6i5SRaxvfOCifBUQy1xHdJ/yoi7FRNXMRBu5WHdZYu1hA6ZOblgut" crossorigin="anonymous">
    </script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.2.1/js/bootstrap.min.js"
        integrity="sha384-B0UglyR+jN6CkvvICOB2joaf5I4l3gm9GU6Hc1og6Ls7i6U/mkkaduKaBhlAXv9k" crossorigin="anonymous">
    </script>
</head>

<body>
    <div class="container">
        <!-- Un jumbotron de Cabecera -->
        <div class="jumbotron">
            <h1 class="display-4">El site de los lenguajes <small>de Víctor</small></h1>
            <p class="lead">Esta es una página de demo para la asignatura de despliegue</p>
            <hr class="my-4">
            <p>Nos va a servir para aprender la base de git</p>
            <a class="btn btn-primary btn-lg" href="#" role="button">Estoy en un repo</a>
        </div>
        <!-- un navbar de menú de navegación -->
        <nav class="navbar navbar-expand-lg navbar-light bg-light">
            <a class="navbar-brand" href="index.php">Lenguajes:</a>
            <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav"
                aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navbarNav">
                <ul class="navbar-nav">
                    <li class="nav-item">
                        <a class="nav-link" href="index.php">Home</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="python.php">Python</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="node.php">node.js</a>
                    </li>
                </ul>
            </div>
        </nav>
        <!-- una fila con dos columnas responsive -->
        <div class="row">
            <!-- anchura 4 sobre 12 en md (medium device) -->
            <div class="col-md-4">
                <img class="img-fluid" src="https://media.giphy.com/media/XreQmk7ETCak0/giphy.gif" alt="brent">
                <br>
                Loren ipsum dolor sit amet
            </div>
            <!-- anchura 8 sobre 12 en md (medium device) -->
            <div class="col-md-8">