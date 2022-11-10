// Board
var blockSize = 25;
var rows = 20;
var cols = 20;
var board;
var context;

//snake head
var startSnakeX = 5;
var startSnakeY = 5;
var snakeX = blockSize * startSnakeX;
var snakeY = blockSize * startSnakeY;

//food
var foodX;
var foodY;

window.onload = function() {
    board = document.getElementById("board");
    board.height = rows * blockSize;
    board.width = cols * blockSize;
    context = board.getContext("2d"); // Used for drawing on the board

    placeFood();
    //document.addEventListener("keyup", changeDirection);
    update();
}

function update() {
    context.fillStyle="black";
    context.fillRect(0, 0, board.width, board.height);

    context.fillStyle="lime";
    context.fillRect(snakeX, snakeY, blockSize, blockSize);

    context.fillStyle="red";
    context.fillRect(foodX, foodY, blockSize, blockSize);
}

function placeFood() {
    foodX = Math.floor(Math.random() * cols) * blockSize;
    foodY = Math.floor(Math.random() * rows) * blockSize;
}
