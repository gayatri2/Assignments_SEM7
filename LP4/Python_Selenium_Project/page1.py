from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
import time



# initialize the Chrome driver
driver = webdriver.Chrome("chromedriver")

#TEST CASE 1

# credentials
email = "username@gmail.com"
password = "password"
# head to login page
driver.get("https://pushkarrjain.github.io/signin/")
# find username/email field and send the username itself to the input field
driver.find_element(By.ID, "inputEmail").send_keys(email)
time.sleep(3)
# find password input field and insert password as well
driver.find_element(By.ID, "inputPassword").send_keys(password)
time.sleep(3)

# click login button
driver.find_element(By.ID, "btn-signin").click()
time.sleep(5)
if email == "username@gmail.com" and password == "password":
    print("Login 1 successful!")
else:
    print("Login 1 failed!")



#TEST CASE 2
# credentials
email2 = "username2@gmail.com"
password2 = "password2"

# find username/email field and send the username itself to the input field
driver.find_element(By.ID, "inputEmail").send_keys(email2)
time.sleep(3)
# find password input field and insert password as well
driver.find_element(By.ID, "inputPassword").send_keys(password2)
time.sleep(3)

# click login button
driver.find_element(By.ID, "btn-signin").click()
time.sleep(2)
if email2 == "username@gmail.com" and password2 == "password":
    print("Login 2 successful!")
else:
    print("Login 2 failed!")



# close the driver
driver.quit()
