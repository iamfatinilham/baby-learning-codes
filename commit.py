import shutil
import subprocess
from pathlib import Path

# ==============================================================================
# TARGET DIRECTORIES LIST
# Add, remove, or edit relative paths here (relative to where this script lives).
# ==============================================================================
TARGET_DIRECTORIES = [
    r"C_C++/cpp_sources/broCode",
    r"C_C++/cpp_sources/codeWithMosh",
    r"C_C++/cpp_sources/freeCodeCamp",
    r"C_C++/cpp_sources/subeen",
    r"C_C++/c_sources/subeen",
    r"JavaScript/js_scripts/zonayed",
    r"Python/py_scripts/codeWithMosh",
    r"Python/py_scripts/subeen",
]

# Base paths relative to this script's location
SCRIPT_DIR = Path(__file__).parent.resolve()
SOURCE_VSCODE = SCRIPT_DIR / ".vscode"


def sync_vscode():
    if not SOURCE_VSCODE.exists() or not SOURCE_VSCODE.is_dir():
        print(f"  [ERROR] Root '.vscode' directory not found at: {SOURCE_VSCODE}")
        return False

    print(f"  Source directory: {SOURCE_VSCODE}\n")
    updated_count = 0

    for rel_path in TARGET_DIRECTORIES:
        target_parent = SCRIPT_DIR / rel_path
        target_vscode = target_parent / ".vscode"

        # Create target directory structure if it doesn't exist
        if not target_parent.exists():
            print(f"  [CREATE] Creating missing directory: {rel_path}")
            target_parent.mkdir(parents=True, exist_ok=True)

        print(f"  [SYNC] Copying to -> {rel_path}\\.vscode")
        
        # Overwrite/replace files inside target .vscode directory
        shutil.copytree(SOURCE_VSCODE, target_vscode, dirs_exist_ok=True)
        updated_count += 1

    print(f"\n  [SUCCESS] Updated {updated_count} .vscode directory/directories.")
    return updated_count > 0


def git_commit():
    print("\n  [GIT] Staging changes and opening commit message editor...")
    try:
        # Stage changed files
        #subprocess.run(["git", "add", "."], check=True, cwd=SCRIPT_DIR)

        # Triggers interactive git commit editor
        subprocess.run(["git", "commit"], check=True, cwd=SCRIPT_DIR)

    except subprocess.CalledProcessError:
        print("\n  [GIT NOTICE] Commit process was cancelled or failed.")

def main():
    if sync_vscode():
        git_commit()
    

if __name__ == "__main__":
    main()
