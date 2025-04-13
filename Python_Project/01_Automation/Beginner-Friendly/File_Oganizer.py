import os
import shutil

# Define file categories
FILE_CATEGORIES = {
    "Images": [".jpg", ".jpeg", ".png", ".gif", ".bmp"],
    "Documents": [".pdf", ".docx", ".txt", ".xlsx", ".pptx"],
    "Videos": [".mp4", ".mkv", ".avi", ".mov"],
    "Music": [".mp3", ".wav", ".aac"],
    "Archives": [".zip", ".rar", ".tar", ".gz"],
    "Programs": [".exe", ".msi", ".apk"],
    "Scripts": [".py", ".js", ".html", ".css"]
}

# Folder path to organize (Change this path)
FOLDER_PATH = "C:\\Users\\ramanand\\"

def organize_files():
    for file in os.listdir(FOLDER_PATH):
        file_path = os.path.join(FOLDER_PATH, file)
        
        # Skip directories
        if os.path.isdir(file_path):
            continue
        
        # Get file extension
        _, ext = os.path.splitext(file)
        
        # Find the right category for the file
        for category, extensions in FILE_CATEGORIES.items():
            if ext.lower() in extensions:
                category_path = os.path.join(FOLDER_PATH, category)
                
                # Create category folder if it doesn't exist
                if not os.path.exists(category_path):
                    os.makedirs(category_path)
                
                # Move the file to the category folder
                shutil.move(file_path, os.path.join(category_path, file))
                print(f"Moved: {file} → {category}/")
                break  # Stop checking once a category is found

if __name__ == "__main__":
    organize_files()
    print("✅ File organization complete!")
