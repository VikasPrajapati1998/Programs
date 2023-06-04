from flask import Flask, render_template, redirect, request, url_for

app = Flask(__name__)

@app.route('/')
@app.route('/home')
def index():
    users = ['Rosalia', 'Adrianna', 'Victoria']
    return render_template('home.html', title='Welcome', members=users)


if __name__ == "__main__":
    app.run(host='128.70.0.0' ,port=81, debug=True)

