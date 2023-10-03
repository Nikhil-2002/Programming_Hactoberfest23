import turtle

# Create the game window
wn = turtle.Screen()
wn.title("Turtle Game")
wn.bgcolor("white")

# Create the player turtle
player = turtle.Turtle()
player.shape("turtle")
player.color("blue")
player.speed(0)
player.penup()
player.goto(0, 0)
player.direction = "stop"

# Functions to control the player's movement
def move_up():
    player.direction = "up"

def move_down():
    player.direction = "down"

def move_left():
    player.direction = "left"

def move_right():
    player.direction = "right"

# Keyboard bindings
wn.listen()
wn.onkeypress(move_up, "Up")
wn.onkeypress(move_down, "Down")
wn.onkeypress(move_left, "Left")
wn.onkeypress(move_right, "Right")

# Main game loop
while True:
    wn.update()

    # Move the player
    if player.direction == "up":
        y = player.ycor()
        player.sety(y + 20)

    if player.direction == "down":
        y = player.ycor()
        player.sety(y - 20)

    if player.direction == "left":
        x = player.xcor()
        player.setx(x - 20)

    if player.direction == "right":
        x = player.xcor()
        player.setx(x + 20)

# Close the game window when done (unreachable in this example)
wn.mainloop()
