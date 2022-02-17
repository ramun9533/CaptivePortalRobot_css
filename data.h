const String responseHTML =  R"====(<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title></title>
    <link rel="stylesheet" href="css/styles.css">
    <style media="screen">
  :root {
  --green: #91C631;
  --green-dark: #59972E;
  --blue: #142F3B;
  --blue-dark: #041821;
  --white: #ffffff;
  --laser: #9d0208;
}
body {
  height: 100vh;
  min-height: 600px;
  display: flex;
  align-items: center;
  justify-content: center;
  background: #0d0e11;
}
.container {
  width: 300px;
  height: 420px;
}
/* Head start */
.head {
  background: var(--green);
  height: 185px;
  border-radius: 100px 100px 0 0;
  position: relative;
}
.hair {
  width: 70px;
  height: 80px;
  position: absolute;
  top: -30px;
  left: 65px;
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  grid-gap: 8px;
}
.hair div {
  background: var(--blue);
  border-radius: 10px;
}
.eye {
  background: var(--blue);
  position: absolute;
  width: 85%;
  height: 55px;
  left: 0;
  bottom: 25px;
  border-radius: 0 30px 30px 0;
  overflow: hidden;
}
.eye::before {
  content: '';
  position: absolute;
  width: 80px;
  height: 300%;
  top: -45px;
  left: 50px;
  transform: rotate(40deg);
  background: var(--white);
  opacity: 0.2;
}
.eye::after {
  content: '';
  position: absolute;
  width: 30px;
  height: 300%;
  top: -45px;
  right: 60px;
  transform: rotate(40deg);
  background: var(--white);
  opacity: 0.2;
}
.ear {
  position: absolute;
  right: -30px;
  bottom: 25px;
  width: 60px;
  height: 60px;
  background: var(--green);
  border-radius: 50%;
}
.ear::before {
  content: '';
  position: absolute;
  width: 28px;
  height: 28px;
  opacity: 0.6;
  background: var(--blue);
  top: 0;
  bottom: 0;
  right: 0;
  left: 0;
  margin: auto;
  border-radius: 50%;
}
.nose {
  width: 40px;
  height: 15px;
  position: absolute;
  bottom: 0;
  left: 80px;
}
.nose::before,
.nose::after {
  content: '';
  position: absolute;
  height: 12px;
  width: 12px;
  background: var(--blue);
  opacity: 0.6;
  bottom: 1px;
  border-radius: 50%;
}
.nose::before {
  left: 0;
}
.nose::after {
  right: 0;
}
/* Head end */
/* Body start */
.body {
 background: var(--blue);
  height: 235px;
  border-radius: 0 0 150px 150px;
  position: relative;
}
.mouth {
  background: var(--green);
  width: 170px;
  height: 120px;
  border-radius: 0 0 90px 90px;
  margin-left: 30px;
  position: relative;
  top: -1px;
}
.mouth::after {
  content: '';
  position: absolute;
  top: 0;
  right: 80px;
  bottom: 0;
  margin: auto;
  width: 30px;
  height: 30px;
  background: var(--blue);
  border-radius: 50%;
}
.arm-left {
  width: 220px;
  height: 100px;
  background: var(--green-dark);
  position: absolute;
  left: -95px;
  top: 20px;
  z-index: -2;
  animation: arm-left 3s infinite;
}
@keyframes arm-left {
  0%, 100% { transform: rotate(0); }
  50% { transform: rotate(20deg); }
}
.pistol {
  position: absolute;
  bottom: -10px;
  left: 10px;
  width: 50px;
  border-radius: 30px;
  height: 120px;
  background: var(--blue-dark);
}
.pistol::before {
  content: '';
  position: absolute;
  top: -35px;
  right: -15px;
  width: 150px;
  border-radius: 30px;
  height: 60px;
  background: var(--blue-dark);
}
.pistol::after {
  content: '';
  position: absolute;
  top: -25px;
  right: 40px;
  width: 60px;
  height: 20px;
  border-radius: 30px;
  background: var(--white);
  opacity: 0.5;
}
.laser {
  position: absolute;
  right: 270px;
  top: -30px;
  border-radius: 40px;
  background: var(--laser);
  width: 100px;
  height: 30px;
}
.hand {
  position: absolute;
  left: -30px;
  bottom: 0;
  background: var(--green-dark);
  width: 70px;
  height: 70%;
  border-radius: 20px;
}
.hand::before {
  content: '';
  position: absolute;
  top: -50px;
  right: -45px;
  width: 70px;
  height: 35px;
  background: var(--green-dark);
  border-radius: 20px;
}
.hand::after {
  content: '';
  position: absolute;
  top: -25px;
  left: -20px;
  width: 80px;
  height: 35px;
  background: var(--green);
  border-radius: 20px;
}
.arm-right {
  width: 100px;
  height: 210px;
  background: var(--green);
  position: absolute;
  right: -45px;
  top: 20px;
  border-radius: 50px;
  z-index: 2;
}
.arm-right::before {
  content: '';
  position: absolute;
  height: 90px;
  width: 90px;
  border-radius: 50% 50% 50% 0;
  bottom: 0;
  right: -40px;
  background: var(--green);
}
.arm-right::after {
  content: '';
  position: absolute;
  height: 80px;
  width: 20px;
  background: var(--green-dark);
  left: -20px;
  bottom: 45px;
  border-radius: 20px 0 0 20px;
}
.leg-right,
.leg-left {
  position: absolute;
  width: 80px;
  height: 140px;
  bottom: -50px;
}
.leg-right {
  background: var(--blue-dark);
  left: 20px;
  z-index: -2;
}
.leg-left {
  background: var(--blue);
  right: 20px;
}
.leg-right::after,
.leg-left::after{
  content: '';
  position: absolute;
  bottom: 0;
  width: 100%;
  height: 40px;
  background: var(--green);
  border-radius: 150px 150px 0 0;
}
.leg-right::after {
  right: 20px;
}
.leg-left::after {
  right: 20px;
}
.detail {
  position: absolute;
  bottom: 30px;
  left: 95px;
  height: 76px;
  width: 18px;
  display: grid;
  grid-template-row: repeat(3, 20px);
  grid-gap: 10px;
  opacity: 0.6;
}
.detail div {
  background: var(--white);
  border-radius: 50%;
}

</style>
  </head>
  <body>
    <div class="container">
      <div class="head">
        <div class="hair">
          <div></div>
          <div></div>
          <div></div>
        </div>
        <div class="ear"></div>
        <div class="eye"></div>
        <div class="nose"></div>
      </div>
      <div class="body">
        <div class="mouth"></div>
        <div class="arm-left">
          <div class="pistol"></div>
          <div class="laser"></div>
          <div class="hand"></div>
        </div>
        <div class="arm-right"></div>
        <div class="leg-left"></div>
        <div class="leg-right"></div>
        <div class="detail">
          <div></div>
          <div></div>
          <div></div>
        </div>
      </div>
    </div>
  </body>
</html>
)====";
