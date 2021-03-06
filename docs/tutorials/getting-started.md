# Getting Started

## Step 1 @fullscreen

Welcome to the @boardname@! Let's start with your first coding challenge on the board. Grab a **forever** loop found in **CONTROL** and place a **set D0 ON** block from **LIGHTS** inside of it.

```blocks
loops.forever(function() {
    lights.set(DigitalPin.D0, 1)
})
```

Try to upload your code now. Did you see what happened?
You made your LED to turn on with code!
Well, we don't want it shining forever, so, let's add more code to make your first project a little more interesting.

## Step 2 @fullscreen

Find the **pause** block located in **CONTROL**, and drag it under your **set D0 ON** block. Let's create a pause in this function so that after it turns on, it has a little time to think! Let's change the value of the block to ``1 second``. This will appear as ``1000`` milliseconds (ms) after you select it.

```blocks
loops.forever(function() {
    lights.set(DigitalPin.D0, 1)
    loops.pause(1000)
})
```

## Step 3

Now that we have a pause, what could we do next? We can ask the board to turn off the LED after turning it on and pausing! Take a **set D0 ON** block from **LIGHTS** and place it in your **forever** loop. Change the **ON** to **OFF** by clicking on the toggle.

```blocks
loops.forever(function() {
    lights.set(DigitalPin.D0, 1)
    loops.pause(1000)
    lights.set(DigitalPin.D0, 0)
})
```

## Step 4

Alright, we just need to add one more thing: a last pause block to create a blinking effect. Take another **pause** block and add it to your loop at the end. Set the value of the block to ``1 second`` just like before.

```blocks
loops.forever(function() {
    lights.set(DigitalPin.D0, 1)
    loops.pause(1000)
    lights.set(DigitalPin.D0, 0)
    loops.pause(1000)
})
```

## Step 5 @fullscren

Let's upload and run the code on your @boardname@. Congratulations, you've finished coding your first activity! Is the LED blinking on and off?