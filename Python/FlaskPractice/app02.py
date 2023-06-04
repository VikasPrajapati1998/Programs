### Building URL Dynamically
### Flask Variable Rules and URL Building

from flask import Flask, redirect, url_for
# redirect : it will redirect some success or fail page
# url_for : make url dynamically. display the different page

app = Flask(__name__)

# decorator
@app.route('/')  # url
def welcome():
    msg = "Welcome to the world of engineer."
    return msg

# decorator
@app.route('/success/<int:score>')
def success(score):
    msg = 'The person has passed and the marks is ' + str(score)
    return msg

# decorator
@app.route('/fail/<int:score>')
def fail(score):
    msg = "The person has fail and the marks is "+str(score)
    return msg

# decorator
@app.route("/name/<name>")
def student_name(name):
    msg = "The name of the student is "+name
    return msg

# decorator
@app.route("/result/<int:marks>")
def resultChecker(marks):
    result = ""
    if marks>=0 and marks<=100:
        if marks<40:
            result="fail"
        else:
            result="success"

        msg = f"Ths student is {result} with the marks of {marks}."
    else:
        msg = f"Invalid score {marks}."

    return msg


if __name__ == '__main__':
    app.run(debug=True)
