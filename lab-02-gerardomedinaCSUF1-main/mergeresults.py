import json, sys

n = len(sys.argv)
result = {'visibility': 'visible',
     'stdout_visibility': 'visible'}

for i in range(1, n):
  with open(sys.argv[i], 'r') as file:
    data = json.load(file)
    if 'tests' in result:
        result['tests'] += data['tests']
    else:
        if 'tests' in data:
            result['tests'] = data['tests']

with open("results.json", 'wt') as f:
    json.dump(result, f)