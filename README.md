# QT popup notification messages

This repository is a fork of [https://github.com/ctin/notification](https://github.com/ctin/notification). Compared to the original implementation, it contains less code but enables only to display messages. It is also easier to integrate into an existing QT project.

All the code needed to display notifications is in the `Notifications/` directory. Other files are given as an example. The only dependencies are QT ones.

## Usage

Integrate notifications into a project is straightforward:

1. Copy-paste the `Notifications/` folder into your project

2. Initialize `NotificationsManager`

   In order to do so, include needed headers to `MainWindow.h`

   ```c++
   #include "Notifications/NotificationLayout.h"
   #include "Notifications/NotificationManager.h"
   ```

   Add a notification layout to your MainWindow

   ```c++
   NotificationLayout* notificationLayout;
   ```

   At the end of the MainWindow constructor, specify to the global NotificationsManager what are the main window and the notification layout notification messages should be sent to

   ```c++
   notificationsLayout = new NotificationLayout();
   notifications.init(this, notificationLayout);
   ```

   

3. Now you can send popup notification messages from anywhere in your project

   ```c++
   #include "Notifications/NotificationManager.h"
   
   // some code
   ...
   	notifications.send("Notification", "This is a notification");
   ...
   ```



## TODOs

- add examples
- change design of notification messages