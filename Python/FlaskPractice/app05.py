### How to integrate HTML with Flask
### http varb GET and POST

from flask import Flask, redirect, url_for, render_template
# render_template : render you to html page

app = Flask(__name__)

# decorator home
@app.route('/')
def home():
    return render_template('index.html')

# decorator success
@app.route('/success/<float:score>')
@app.route('/success/<float:score>')
def success(score):
    msg = f"You have passed the exam with the score of {score}. Best Wishes for Your Future."
    return msg

# decorator fail
@app.route('/fail/<int:score>')
@app.route('/fail/<float:score>')
def fail(score):
    msg = f"You are failed in exam with the score of {score}. Best of Luck for Next Time."
    return msg

# decorator invalid
@app.route('/invalid/<int:score>')
@app.route('/invalid/<float:score>')
def invalid(score):
    msg = f"Invalid marks entered {score}. Try again."
    return msg

# decorator result
@app.route('/result/<int:marks>')
@app.route('/result/<float:marks>')
def result(marks):
    url='invalid'
    if marks>=40.0 and marks<=100.0:
        url='success'
    elif marks>=0.0 and marks<40.0:
        url='fail'
    else:
        url='invalid'
    return redirect(url_for(url, score=marks))


if __name__ == '__main__':
    app.run(debug=True)

