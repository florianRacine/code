import time
import pyautogui
import pyperclip

time.sleep(3);

pyperclip.copy("@")

with open("inp", "r") as filin:
    email = filin.readline()
    while email != "":
        print(email)
        email = filin.readline()
        time.sleep(0.25);
        pyautogui.moveTo(830, 485)
        pyautogui.click()
        time.sleep(0.25);
        pyautogui.write(email, interval=0.04)
        time.sleep(0.25);
        pyautogui.hotkey('ctrl', 'r')
        time.sleep(1.5);
        pyautogui.hotkey('ctrl', 'r')
        time.sleep(1.5);

        # pyautogui.moveTo(880, 490)
        # pyautogui.click()
        # time.sleep(0.25);
        # # find = 'Retour'
        # # pyautogui.hotkey('ctrl', 'f')
        # # time.sleep(0.05);
        # # pyautogui.write(find, interval=0.5)
        # # time.sleep(0.05);
        # # pyautogui.press('escape')
        # # time.sleep(0.05);
        # # pyautogui.press('enter')
        # # time.sleep(0.05);


        # pyautogui.moveTo(1080, 650)
        # pyautogui.click()
        # time.sleep(0.25);
        # find = 'Verify Your Account'
        # pyautogui.hotkey('ctrl', 'f')
        # time.sleep(0.07);
        # pyautogui.write(find, interval=0.07)
        # time.sleep(0.07);
        # pyautogui.press('escape')
        # time.sleep(0.07);
        # pyautogui.hotkey('shift', 'enter')
        # time.sleep(3);
        time.sleep(4);
