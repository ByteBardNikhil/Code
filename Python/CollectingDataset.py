import os


def display(file_path):
    with open(file_path, 'r') as file:
        content = file.read()
        list.append(content)


def display_files_in_folder(folder_path):
    file_names = os.listdir(folder_path)
    for file_name in file_names:
        file_path = os.path.join(folder_path, file_name)
        if (os.path.isfile(file_path)):
            display(file_path)


list = []

folder_path = "/home/nikhil/Desktop/Datasets/op_spam_v1.4/negative_polarity/deceptive_from_MTurk/fold1/"
display_files_in_folder(folder_path)
