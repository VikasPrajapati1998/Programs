### How to integrate HTML with Flask
### http verb GET and POST

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
    if score>80.0 and score<=100.0:
        res = "First Division"
    elif score>70.0 and score<=80.0:
        res = "Second Division"
    elif score>60.0 and score<=70.0:
        res = "Third Division"
    elif score>=40.0 and score<=60.0:
        res = "Passed"
    else:
        res = " "
    return render_template('infoResult.html', result=res, marks=score)

# decorator fail
@app.route('/fail/<int:score>')
@app.route('/fail/<float:score>')
def fail(score):
    if score<40.0 and score>=0:
        res = "Failed"
    else:
        res = " "
    return render_template('infoResult.html', result=res, marks=score)

# decorator invalid
@app.route('/invalid/<int:score>')
@app.route('/invalid/<float:score>')
def invalid(score):
    res = "Invalid"
    return render_template('infoResult.html', result=res, marks=score)

# decorator
# result checker html page
@app.route('/submit', methods=['POST', 'GET'])
def submit():
    total_score=0.0
    url=''
    if request.method=='POST':
        s=float(request.form['science'])    # name=science
        maths=float(request.form['maths'])  # name=maths
        c=float(request.form['c_programming'])  # name=c_programming
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

