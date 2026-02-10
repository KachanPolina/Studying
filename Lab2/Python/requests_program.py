import requests

response = requests.get('https://restful-booker.herokuapp.com/ping')

print(f'ping status code: {response.status_code}')
# ping status code: 201

print(f'ping header Content-Type: {response.headers["Content-Type"]}')
# ping header Content-Type: text/plain; charset=utf-8

print(f'ping body: {response.text}')
# ping body: Created