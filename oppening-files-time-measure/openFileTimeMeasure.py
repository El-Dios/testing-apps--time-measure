import subprocess
import time
from datetime import datetime


def open_file_time_measure(file_type, file_path):
    """
    Print time of opening file of some type at file path

    Parameters:
        file_type (string): Type of opening file
        file_path (string): Path to file to open
    Returns:
        res_time (str): String of opening file time
    """
    start_time = datetime.now()
    subprocess.call(["xdg-open", file_path])
    res_time = datetime.now() - start_time
    return file_type + ": " + res_time.__str__() + "\n"


with open('FileOpeningTimes.txt', 'a') as fp:
    fp.write(datetime.now().strftime("%m/%d/%Y, %H:%M:%S") +
             "\n--------------------\n")
    ## fp.write(open_file_time_measure('HTML', "python.html"))
    fp.write(open_file_time_measure('DOCX', "fileDoc.docx"))
    fp.write(open_file_time_measure('TXT', "fileText.txt"))
    ## fp.write(open_file_time_measure('IMG', "imageFile.jpg"))
    ## fp.write(open_file_time_measure('VIDEO', "VideoFile.mp4"))
    ## time.sleep(1)
    ## fp.write(open_file_time_measure('AUDIO', "AUDIO.mp3"))
    fp.write("\n")
