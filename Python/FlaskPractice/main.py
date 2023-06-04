from flask import Flask, render_template, request, redirect, url_for, Response
import cv2

app = Flask(__name__)
camera = cv2.VideoCapture(0)

@app.route('/')
def index():
    return render_template('index01.html')

@app.route('/video')
def video():
    return Response(func(), mimetype='multipart/x-mixed-replace; boundary=frame')


if __name__ == '__main__':
    app.run(debug=True)

