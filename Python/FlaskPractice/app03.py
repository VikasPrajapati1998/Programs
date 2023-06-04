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
    msg=''
    if score>=40 and score<=100:
        msg = f"The person has passed and the marks is {score}."
    else:
        msg = 'Invalid Marks.'
    return msg

# decorator
@app.route('/fail/<int:score>')
def fail(score):
    msg=''
    if score>=0 and score<40:
        msg = f"The person has failed and the marks is {score}."
    else:
        msg = 'Invalid Marks.'
    return msg

@app.route('/invalid/<int:score>')
def invalid(score):
    msg=f'Invalid Score {score}.'
    return msg

# decorator
@app.route("/result/<int:marks>")
def result_Checker(marks):
    if marks>=0 and marks<=100:
        if marks<40:
            result="fail"   # fail url
        else:
            result="success"    # success url
    else:
        result="invalid"   # success url

    return redirect(url_for(result, score=marks))  # url_for(url, input)
    # Two possibility for redirect(url_for(result, marks))
        # url_for(success, marks)
        # url_for(fail, marks)


if __name__ == '__main__':
    app.run(debug=True)
