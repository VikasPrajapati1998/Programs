### How to integrate HTML with Flask
### http verb GET and POST
### Jinja2 Template
'''
{%...%} for condition, for loops
{{  }} expression to print output
{#.....} this is for comments
'''

from flask import Flask, redirect, url_for, render_template, request
# render_template : render you to html page
# request : help to read the posted value

app = Flask(__name__)

# decorator home
@app.route('/')
def home():
    return render_template('info.html')

# API result
# decorator
@app.route('/result/<float:score>')
@app.route('/result/<float:score>')
def result(score):
    if score>40:
        res = "PASS"
    else:
        res = "FAIL"
    exp={'score':score, 'res':res}
    return render_template('result01.html', result=exp)


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
        url = 'result'

    return redirect(url_for(url, score=total_score))


if __name__ == '__main__':
    app.run(debug=True)

