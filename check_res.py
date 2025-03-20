# # здесь можно прописать полный путь к директории с собранной библиотекой (с расширением .pyd), чтобы import его нашел
#
# import sys
# path_to_lib = '___'
# sys.path.append(path_to_lib)


# либо можете скопировать .pyd файл в директорию с исполняемым .py файлом.
import my_cpp_lib as mcl


a, b = map(int, input().split())
result = mcl.count_numbers(a, b)
print(f"сумма чисел между {a} и {b} = {result}")

print(f"произведение равно {mcl.prod(a , b)}")
print(f"сумма равна {mcl.add(a, b)}")
