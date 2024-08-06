<h1 align = "center"> Globo de Led </h1>

<div align="center">
    <a href="https://cplusplus.com/reference/" target="_blank" rel="noopener">
      <img src="/globe.jpeg" width="150"/>
    </a>
</div>

## Abstract
<p>
  The work develops an optical LED toy for educational purposes, capable of displaying
supporting images through optics, rotational mechanical movement and LED technology. A solid
wooden board is used as the base, along with a vertical support to enable a stable system, with
a hole for the axis of rotation, where a brushless motor fits in with a rotation speed calibrated
by an optical encoder and controlled by an ESC along with an Arduino; they are powered by
a power supply. A 3D printing model serves as a ring to ensure the alignment of the RGB
LED strip at the moment of rotation, being controlled by an ESP32 development board via
Bluetooth, both powered by a battery that is connected to the ring.
</p>


## Introduction 
<p> The presented work describes the development of an optical toy based on the concept of an LED globe. This device is grounded in the understanding and application of LED optics, combined with the interaction between the rotational mechanical components and the microcontrollers and software. Notably, the user has the ability to control the device via Bluetooth, turning it into a creative educational tool to support students' academic content. This approach aims to make lessons more engaging and interactive, enhancing the educational experience.
</p>
<p>Additional details can be found in the <a href="./Artigo_BrinquedoOpticodeLED.pdf" target="_blank"> document</a>
</p>


## Components
<ul>
  <li><strong>Wood:</strong> Wood for constructing the frame or support structures.</li>
  <li><strong>M8 Threaded Rod:</strong> Metal rod with M8 threading.</li>
  <li><strong>M8 Nuts:</strong> Nuts with M8 threading.</li>
  <li><strong>Flexible Shaft Coupling (5mm to 8mm):</strong> A coupling to connect shafts of different diameters (5mm to 8mm).</li>
  <li><strong>Ball Bearing 6300 or 10x35x11 Metal:</strong> Metal ball bearing with dimensions 10x35x11 mm or part number 6300.</li>
  <li><strong>Bearing Mount:</strong> A support or bracket for mounting the ball bearings.</li>
  <li><strong>Screws:</strong> Fasteners for assembling the components.</li>
  <li><strong>Brushless Motor with 5mm Shaft:</strong> Brushless electric motor with a 5mm diameter shaft.</li>
  <li><strong>60A ESC (Electronic Speed Controller):</strong> Electronic speed controller rated at 60 amps.</li>
  <li><strong>Arduino UNO:</strong> Microcontroller board for controlling the system.</li>
  <li><strong>12V 5A Power Supply:</strong> Power supply providing 12V and 5 amps of current.</li>
  <li><strong>APA102 LED:</strong> Addressable LED strip or module (APA102).</li>
  <li><strong>Optical Encoder and Disk:</strong> Optical encoder with a disk for measuring rotational position.</li>
  <li><strong>ESP32:</strong> A microcontroller with built-in Wi-Fi and Bluetooth</li>
  <li><strong>TLE 4905L Hall Sensor + Magnet:</strong> Hall effect sensor TLE 4905L with a magnet.</li>
  <li><strong>Bearing Ring:</strong> A ring used with bearings for supporting or aligning them.</li>
</ul>

## Result
<h3>Image</h3>
<p> Image demonstrating the components</p>
<div align = "center">
   <a href="https://cplusplus.com/reference/" target="_blank" rel="noopener">
      <img src="/anel.jpeg" width="300"/>
    </a>
    <a href="https://www.arduino.cc" target="_blank" rel="noopener">
         <img src="/base.jpeg" width="400"/>
    </a>
</div>
<h3>Video</h3>
<p>Video showing some scenes of the globe</p>
<div align = "center">
  <a href="https://www.sfml-dev.org" target="_blank" rel="noopener">
      <img src="/video_globoLEDgif.gif" width="300" height="450" alt="Example GIF">
    </a>
</div>

