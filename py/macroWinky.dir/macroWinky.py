import time
import keyboard
import pyautogui
import pyperclip

time.sleep(3);

pyperclip.copy("@")

with open("inp", "r") as filin:
    email = filin.readline()
    while email != "":
        email = filin.readline()
        # You can define what you want to search
        find = 'Winkyverse'

        # Use keys below
        pyautogui.hotkey('ctrl', 'f')

        pyautogui.write(find, interval=0.03)

        pyautogui.press('escape')

        pyautogui.press('enter')

        time.sleep(0.25);

        pyautogui.press('tab')
        pyautogui.press('tab')

        pyautogui.press('enter')

        time.sleep(0.3);
        pyautogui.write(email, interval=0.04)
        time.sleep(0.07);
        pyperclip.copy("@")
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.07);
        pyautogui.write("grr", interval=0.04)
        pyperclip.copy(".")
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.07);
        pyautogui.write("la", interval=0.04)
        time.sleep(0.07);
        pyautogui.press('tab')
        time.sleep(0.05);
        pyperclip.copy("1227827387233456")
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.05);
        pyautogui.press('tab')
        time.sleep(0.05);
        pyautogui.hotkey('ctrl', 'v')
        time.sleep(0.05);
        pyautogui.moveTo(980, 580)
        time.sleep(0.05);
        pyautogui.click()
        time.sleep(0.05);
        pyautogui.moveTo(1080, 650)
        time.sleep(0.05);
        pyautogui.click()
        time.sleep(0.3);
        pyautogui.press('escape')
        time.sleep(0.06);
        pyautogui.press('escape')
        time.sleep(0.4);
        # You can define what you want to search
        find = 'My account'

        # Use keys below
        pyautogui.hotkey('ctrl', 'f')

        pyautogui.write(find, interval=0.04)
        time.sleep(0.03);
        pyautogui.press('escape')
        time.sleep(0.03);
        pyautogui.press('enter')
        time.sleep(0.03);
        pyautogui.press('tab')
        time.sleep(0.03);
        pyautogui.press('tab')
        time.sleep(0.03);
        pyautogui.press('enter')
        time.sleep(0.5);
filin.close()
