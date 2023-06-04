# install all the requirements.txt packages
# pip install -r requirements.txt
# or pip install -r ./requirements.txt

from flask import Flask

# WSGI Application
app = Flask(__name__)  # WSGI : Web Server Gateway Interface


# decorator
# rule='/' : root
@app.route('/')  # route(rule : str, options) # rule : URL
def message():
    msg = "Welcome to flask. Using Jinja2 Template. Here Arjun Programmer."
    return msg


# decorator
# rule='/members'
@app.route("/members")
def member():
    msg = "All the members of my class try to become a good coder. There are 90 members in my class."
    return msg


if __name__ == '__main__':
    app.run(debug=True)  # run(host:str, port:int, debug:bool, load_dotenv:bool, options:Any)
    # host=127.0.0.1 : default host
    # port=5000 : default port number
    # debug=True : server auto start and update changed content
