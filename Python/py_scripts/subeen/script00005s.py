import turtle


print(
    "Choose shape: ", "\n", 
    "   1. square", "\n", 
    "   2. triangle", "\n"
)

chooseShape = input("Answer: ")
print("\n")

if chooseShape == "1" or chooseShape == "square":
    shape = 1
    shapeName = "square"
elif chooseShape == "2" or chooseShape == "triangle":
    shape = 2
    shapeName = "triangle"
else:
    print("Invalid Answer!!!", "\n", "Defaulting to square")
    shape = 1
    shapeName = "square"


size = int(input("Enter the size of the shape: "))
print("\n")
speed = int(input("Enter speed value [0 - 10]: "))
print("\n")

if not(speed >= 0 and speed <=10):
    print("Invalid speed number...")
    print("Setting as 2...")
    speed = 2



print("Alright!!!")
print("Shape is", shapeName)
print("Size value is", size, "px")
print("Speed value is", speed)


turtle.shape("turtle")
if shape == 1:

    turtle.forward(size)
    turtle.left(90)

    turtle.forward(size)
    turtle.left(90)

    turtle.forward(size)
    turtle.left(90)

    turtle.forward(size)

else:
    turtle.forward(size)
    turtle.left(120)

    turtle.forward(size)
    turtle.left(120)

    turtle.forward(size)

turtle.exitonclick()