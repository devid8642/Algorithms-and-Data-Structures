import os
import sys
from pathlib import Path


def main():
    if len(sys.argv) < 2:
        print('Uso: python create_problem.py <link-do-problema>')
        sys.exit(1)

    link = sys.argv[1]
    problems_dir = Path('problems')
    problems_dir.mkdir(exist_ok=True)

    # pega o maior número de diretório existente
    existing_dirs = [
        p
        for p in problems_dir.iterdir()
        if p.is_dir() and p.name.startswith('problem')
    ]
    max_number = 0
    for d in existing_dirs:
        try:
            number = int(d.name.replace('problem', ''))
            max_number = max(max_number, number)
        except ValueError:
            continue

    new_problem_number = max_number + 1
    new_problem_dir = problems_dir / f'problem{new_problem_number}'
    new_problem_dir.mkdir()

    main_file = new_problem_dir / 'main.py'
    with open(main_file, 'w') as f:
        f.write(f'# Problem: {link}\n\n\nclass Solution:\n    pass\n')

    print(f'🛠️ Criado: {new_problem_dir}/main.py')


if __name__ == '__main__':
    main()
