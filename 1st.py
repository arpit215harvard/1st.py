import turtle
pen = turtle.Turtle()
pen.color("blue")
// pen.speed(5)

for i in range(7):
    pen.circle(100,60)
    pen.left(120)
    pen.circle(100,60)
    pen.left(120)
    pen.left(60)

    pen.hideturtle()
