import subprocess
from pathlib import Path

def format(files):
    for file in files:
        subprocess.run(["clang-format", "-style=file", "-i", str(file)])

cpps = Path('src').rglob('*.cpp')
hpps = Path('src').rglob('*.hpp')

format(cpps)
format(hpps)
