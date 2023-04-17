import time
import keyboard
import pyautogui
import pyperclip

time.sleep(3);

pyperclip.copy("@")

with open("inp", "r") as filin:
    email = filin.readline()
    while email != "":
        print(email)
        email = filin.readline()
        time.sleep(0.07);
        # You can define what you want to search
        find = 'Winkyverse'

        # Use keys below
        pyautogui.hotkey('ctrl', 'f')
        time.sleep(0.07);

        pyautogui.write(find, interval=0.06)
        time.sleep(0.07);

        pyautogui.press('escape')
        time.sleep(0.07);

        pyautogui.press('enter')

        time.sleep(0.6);

        pyautogui.press('tab')
        time.sleep(0.06);
        pyautogui.press('tab')
        time.sleep(0.06);

        pyautogui.press('enter')

        time.sleep(0.6);
        pyautogui.write(email, interval=0.05)
        time.sleep(0.1);
        pyperclip.copy("@")
        time.sleep(0.07);
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.1);
        pyautogui.write("gmail", interval=0.07)
        time.sleep(0.07);
        pyperclip.copy(".")
        time.sleep(0.07);
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.1);
        pyautogui.write("com", interval=0.06)
        time.sleep(0.1);
        pyautogui.press('tab')
        time.sleep(0.07);
        pyperclip.copy("1227827387233456")
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.07);
        pyautogui.press('tab')
        time.sleep(0.07);
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.07);
        pyautogui.moveTo(980, 580)
        time.sleep(0.1);
        pyautogui.click()
        time.sleep(0.1);
        pyautogui.moveTo(1080, 650)
        time.sleep(0.1);
        pyautogui.click()
        time.sleep(0.5);
        pyautogui.press('escape')
        time.sleep(0.1);
        pyautogui.press('escape')
        time.sleep(0.6);
        # You can define what you want to search
        find = 'My account'

        # Use keys below
        pyautogui.hotkey('ctrl', 'f')

        pyautogui.write(find, interval=0.06)
        time.sleep(0.07);
        pyautogui.press('escape')
        time.sleep(0.07);
        pyautogui.press('enter')
        time.sleep(0.07);
        pyautogui.press('tab')
        time.sleep(0.07);
        pyautogui.press('tab')
        time.sleep(0.07);
        pyautogui.press('enter')
        time.sleep(0.8);
filin.close()
