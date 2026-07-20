# exoARM - Code

Arduino code used to control the linear actuator through an L298N motor driver. The actuator movement is controlled using a rocker switch.

## Files
- `actuator-control-v1.ino` - first version of the code. This was made before the wiring and switch issues were fixed (refer to the main README and Week 6-7 log).
- `actuator-control-v2.ino` - final working version. Controls the actuator extension and retraction based on the rocker switch input.

## Running it
1. Open the `.ino` file in the Arduino IDE.
2. Select the board as Arduino Uno R3.
3. Connect the rocker switch, L298N motor driver, and linear actuator according to the circuit diagram in the main README.
4. Upload the code to the Arduino and power the system using the 12V battery pack (or a 12V bench supply for testing).

No additional libraries are needed.

## Note
This code was created for a VCE Systems Engineering folio project. It is not a maintained software package.