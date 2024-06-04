﻿body, html {
    margin: 0;
    padding: 0;
    height: 100%;
    font-size: larger;
    background-color: lightpink;
}

#p2 {
    padding-bottom: 20px;
}

#kozep {
    display: flex;
    justify-content: center;
    flex-wrap: wrap;
}

#kartya {
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    margin-top: 120px;
    background-color: white;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.445);
    width: 20%;
    margin-right: 2%;
    padding-bottom: 20px;
}
#navMenu{
    background-color:hotpink;

}

#kartya-szoveg {
    padding-left: 15px;
    padding-right: 35px;
    padding-bottom: 5px;
}

h3 {
    font-size: 20px;
    padding-left: 5px;
    padding-right: 5px;
    background-color: hotpink;
    display: inline-block;
    margin-bottom: 2px;
}

h2 {
    font-size: 15px;
}

#tovabb {
    font-size: 20px;
    padding-right: 10px;
    padding-left: 10px;
    padding-top: 5px;
    padding-bottom: 5px;
    border: 2px;
    border-style: solid;
    border-color: black;
    transition: background-color 0.3s ease;
    align-self: flex-start;
}

    #tovabb:hover {
        background-color: darkred;
        color: white;
    }

a {
    text-decoration: none;
    color: black;
}

#kep, #kep1 {
    width: 100%;
}



.dark-mode #gradient {
    background: linear-gradient(-45deg, #333333, #222222, #111111, #000000);
}

.dark-mode body {
    background-color: black;
}

#sotetModGomb {
    position: fixed;
    bottom: 10px;
    left: 10px;
    cursor: pointer;
    background-color: indianred;
    color: #fff;
    padding: 20px;
    border: 5px outset black;
    border-radius: 30px;
    text-align: center;
}

.dark-mode nav {
    background-color: dimgrey;
    color: #fff;
}

.dark-mode #kartya {
    background-color: #222;
    color: #fff;
    box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.445);
}

.dark-mode h3 {
    background-color: rgb(64, 64, 64);
    color: #fff;
}

.dark-mode #tovabb {
    background-color: #444;
    color: #fff;
}

    .dark-mode #tovabb:hover {
        background-color: #666;
    }

#sotetModGomb {
    background-color: #ffffff30;
    color: darkred;
    border: none;
    border-radius: 50px;
}

.dark-mode #sotetModGomb {
    background-color: #4a4a4a56;
    color: #FFFFFF;
    border: none;
    border-radius: 50px;
}


section {
    background-color: white;
    height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
}

    section:nth-child(odd) {
        background: #ccc;
    }

    section:before {
        content: attr(data-text);
        color: #262626;
        font-size: 8em;
        text-transform: bold;
    }

nav {
    background-color: darkred;
}

ul {
    display: flex;
    flex-wrap: wrap;
    list-style: none;
}

    ul li {
        text-decoration: none;
        margin: 0 0.75em 0 .075em;
    }

    ul:hover a:hover {
        color: silver;
    }

    ul:hover a:hover {
        color: dimgrey;
        box-shadow: 0 2px 0 0 currentColor;
    }

nav ul {
    display: flex;
    list-style: none;
    box-shadow: 0 15px 40px #000;
    justify-content: center;
}

    nav ul li {
        position: relative;
        padding: 20px;
        cursor: pointer;
        transition: .5s;
    }

        nav ul li:after {
            z-index: -2;
            filter: blur(20px);
        }

        nav ul li:hover:before,
        nav ul li:hover:after {
            transform: scaleY(1);
        }

#a2 {
    color: aliceblue;
}

@media all and (max-width: 500px) {
}

#container {
    margin-top: 30px;
}

::selection {
    background-color: #9400D3;
}

#a3 {
    color: rgb(0, 0, 0);
}

@media screen and (max-width: 768px) {
    #kozep {
        flex-direction: column;
        align-items: center;
    }

    #kartya {
        width: 80%;
        margin-right: 0;
        margin-bottom: 20px;
    }
}

img {
    max-width: 100%;
    height: auto;
}


.toast {
    font-size: 20px;
    position: fixed;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    background-color: hotpink;
    color: #fff;
    padding: 20px;
    border: 5px outset darkred;
    text-align: center;
}

    .toast img {
        width: 90px;
        height: 90px;
        margin-bottom: 5px;
    }

.close-btn {
    background-color: snow;
    border-radius: 70px;
    border: none;
    color: indianred;
    font-size: 24px;
    cursor: pointer;
    position: absolute;
    top: 10px;
    right: 10px;
}

.parallax {
   
    background-image: url("virag.jpg");
    min-height: 300px;
    background-attachment: fixed;
    background-position: center;
    background-repeat: no-repeat;
    background-size: cover;
}
.container {
    margin: 0 auto;
    width: 50%;
}

h1 {
    text-align: center;
}
form{
    text-align:center;
}
label {
    display: inline-block;
    margin-right: 10px;
    vertical-align: middle;
}

input[type="text"] {
    text-align:center;
    padding: 5px;
    border: 1px solid darkred;
    font-size: 16px;
}

button {
    font-size: 16px;
    border: 1px;
    border-style: solid;
    border-color: black;
    transition: background-color 0.3s ease;
    align-self: flex-start;
}

    button:hover {
        background-color: darkred;
        color: white;
    }
#list {
    height:1000px;
    background-color:lightpink;
    font-size:20px;
}
.dark-mode #list{
    background-color:black;
}
.dark-mode button {
    background-color: #444;
    color: #fff;
}

.dark-mode button:hover {
    background-color: #666;
}
    
.dark-mode input[type="text"] {
    background-color: black;
    color:white;
    border: 1px solid white;
}
.dark-mode label{
    color:white;
}
.dark-mode .parallax {
    background-image: url("eg.jpg");
}
.dark-mode h1 {
    color: white;
}
.dark-mode .mind{
    background-color:black;
}
.dark-mode #al-p{
    background-color:black;
}
.dark-mode .container{
    background-color:black;
}
.dark-mode #task-list{
    color:white;
}
