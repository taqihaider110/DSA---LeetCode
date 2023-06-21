from flask import Flask, render_template
import random
app = Flask(__name__)
@app.route('/')
def index():
    # Generate random data
    names = ['Alice', 'Bob', 'Charlie', 'David', 'Eve']
    cities = ['New York', 'London', 'Paris', 'Tokyo', 'Sydney']
    random_name = random.choice(names)
    random_city = random.choice(cities)

    # Render the template with the random data
    return render_template('index.html', name=random_name, city=random_city)

if __name__ == '__main__':
    app.run(debug=True)
