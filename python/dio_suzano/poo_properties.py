class Dog:
    def __init__(self, x):
        self._x = x

    @property
    def x(self):
        return self._x or 0

