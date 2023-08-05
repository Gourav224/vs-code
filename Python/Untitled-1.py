import turtle

# Create a turtle screen
screen = turtle.Screen()
screen.bgcolor("black")
# Create a turtle object
my_turtle = turtle.Turtle()

# Set turtle speed
my_turtle.speed(2)



# Draw the sky
my_turtle.penup()
my_turtle.goto(-250, 250)
my_turtle.pendown()
my_turtle.color("sky blue")
my_turtle.begin_fill()
for _ in range(4):
    my_turtle.forward(500)
    my_turtle.right(90)
my_turtle.end_fill()
# Draw a sun
my_turtle.penup()
my_turtle.goto(200, 200)
my_turtle.pendown()
my_turtle.color("yellow")
my_turtle.begin_fill()
my_turtle.circle(50)
my_turtle.end_fill()
# Draw a tree
my_turtle.penup()
my_turtle.goto(-100, -250)
my_turtle.pendown()
my_turtle.color("brown")
my_turtle.begin_fill()
my_turtle.forward(20)
my_turtle.right(90)
my_turtle.forward(50)
my_turtle.right(90)
my_turtle.forward(20)
my_turtle.right(90)
my_turtle.forward(50)
my_turtle.end_fill()

# Draw a green leaf
my_turtle.penup()
my_turtle.goto(-130, -200)
my_turtle.pendown()
my_turtle.color("green")
my_turtle.begin_fill()
my_turtle.circle(40)
my_turtle.end_fill()

# Draw a cartoon face
my_turtle.penup()
my_turtle.goto(0, 0)
my_turtle.pendown()
my_turtle.color("yellow")
my_turtle.begin_fill()
my_turtle.circle(100)
my_turtle.end_fill()

# Draw the eyes
my_turtle.penup()
my_turtle.goto(-60, 30)
my_turtle.pendown()
my_turtle.color("white")
my_turtle.begin_fill()
my_turtle.circle(20)
my_turtle.end_fill()

my_turtle.penup()
my_turtle.goto(20, 30)
my_turtle.pendown()
my_turtle.color("white")
my_turtle.begin_fill()
my_turtle.circle(20)
my_turtle.end_fill()

# Draw the mouth
my_turtle.penup()
my_turtle.goto(-30, -10)
my_turtle.pendown()
my_turtle.color("red")
my_turtle.width(5)
my_turtle.right(90)
my_turtle.circle(60, 180)

# Hide the turtle
my_turtle.hideturtle()

# Close the turtle graphics window
turtle.done()

