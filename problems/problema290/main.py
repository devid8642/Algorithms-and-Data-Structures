import textwrap

def wrap(string, max_width):
    wrapper = textwrap.TextWrapper(width = max_width)
    nova_string = '\n'.join(wrapper.wrap(text = string))
    return nova_string


if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)