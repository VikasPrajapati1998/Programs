### How to integrate HTML with Flask
### http varb GET and POST

from flask import Flask, redirect, url_for, render_template, request
# render_template : render you to html page
# request : help to read the posted value

app = Flask(__name__)

# decorator home
@app.route('/')
def home():
    return render_template('info.html')

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


# decorator
# result checker html page
@app.route('/submit', methods=['POST', 'GET'])
def submit():
    total_score=0.0
    url=''
    if request.method=='POST':
        s=float(request.form['science']) # name=science
        maths=float(request.form['maths']) # name=maths
        c=float(request.form['c_programming']) # name=c_programming
        dsa=float(request.form['data_structure']) # name=data_structure
        ds=float(request.form['data_science'])    # name=data_science
        total_score = (s+maths+c+dsa+ds)/5
        if total_score>=40 and total_score<=100:
            url='success'
        elif total_score>=0 and total_score<40:
            url='fail'
        else:
            url='invalid'

    return redirect(url_for(url, score=total_score))


if __name__ == '__main__':
    app.run(debug=True)

