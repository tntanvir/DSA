const btn = document.querySelector(".submit-btn")
const input = document.querySelector("#input-field")
const closeBtn = document.querySelector("#close");
const alldata = document.querySelector("#alldata");
const first = document.querySelector("#fst-div");
const secoend = document.querySelector("#sec-div");

let alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];
let num = Math.random() * (26 - 0) + 0;
// alert();
function fst(a) {

    fetch(`https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${a}`)

        .then(res => res.json())
        .then(data => {
            // console.log(data.player)
            if (data.player) {
                data.player.map(player => {
                    first.innerHTML += `
                        <div class="card" style="width: 17rem;">
                <img src="${player.strThumb ? player.strThumb : "man-22.png"}"
                    class="card-img-top"
                    alt="${player.strThumb}">
                <div class="card-body">
                    <h5 class="card-title">Name: ${player.strPlayer}</h5>
                    <h5 class="card-title">ID: ${player.idPlayer}</h5>

                    <p class="card-title">Nationality: ${player.strNationality}</p>
                    <p class="card-title">Team: ${player.strTeam}</p>
                    <p class="card-title">Sport: ${player.strSport}</p>
                    <p class="card-title">Gender: ${player.strGender}</p>
                    <div class="d-flex">
                        <a href="https://${player.strFacebook}" target="_blank"
                            rel="noopener noreferrer" >
                            <h3 class="px-3"><i class="fa-brands fa-facebook"></i></h3>
                        </a>
                        
                        <a href="https://${player.strInstagram}" target="_blank" rel="noopener noreferrer"
                            class="text-danger " >
                            <h3 class="px-3"><i class="fa-brands fa-instagram"></i></h3>
                        </a>
                    </div>
                    <p class="card-text">${player.strDescriptionEN.slice(0, 90)}..</p>
                    <button onclick="details('${player.idPlayer}')"  class="btn btn-primary">Details</button>
                    <button onclick='addGroup("${player.strPlayer}")' class="btn btn-primary">Add Cart</button>
                </div>
            </div>
                        `

                })
            }
        })
}
fst(alpha[Number.parseInt(num)])

btn.addEventListener("click", () => {
    if (input.value) {
        document.querySelector("#fst-div").innerHTML = ''
        fetch(`https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${input.value}`)

            .then(res => res.json())
            .then(data => {
                // console.log(data.player)
                if (data.player) {
                    data.player.map(player => {
                        first.innerHTML += `
                        <div class="card" style="width: 17rem;">
                <img src="${player.strThumb ? player.strThumb : "man-22.png"}"
                    class="card-img-top"
                    alt="${player.strThumb}">
                <div class="card-body">
                    <h5 class="card-title">Name: ${player.strPlayer}</h5>
                    <h5 class="card-title">ID: ${player.idPlayer}</h5>
                    <p class="card-title">Nationality: ${player.strNationality}</p>
                    <p class="card-title">Team: ${player.strTeam}</p>
                    <p class="card-title">Sport: ${player.strSport}</p>
                    <p class="card-title">Gender: ${player.strGender}</p>
                    <div class="d-flex">
                    <a href="https://${player.strFacebook}" target="_blank"
                            rel="noopener noreferrer">
                            <h3 class="px-3"><i class="fa-brands fa-facebook"></i></h3>
                        </a>
                        
                        <a href="https://${player.strInstagram}" target="_blank" rel="noopener noreferrer"
                            class="text-danger">
                            <h3 class="px-3"><i class="fa-brands fa-instagram"></i></h3>
                        </a>
                        </div>
                    <p class="card-text">${player.strDescriptionEN.slice(0, 90)}..</p>
                    <button onclick="details('${player.idPlayer}')"  class="btn btn-primary">Details</button>
                    <button onclick='addGroup("${player.strPlayer}")' class="btn btn-primary">Add Cart</button>
                </div>
            </div>
                        `

                    })
                }
            })

    }
    else {
        const div = document.querySelector('#noText');
        div.classList.add('show');
        div.style.display = "block";
        const body = document.querySelector('.modal-body');
        body.innerHTML = `
                    <h2>No text Found</h2>
                    `
    }
})

closeBtn.addEventListener("click", () => {

    const div = document.querySelector('#noText');
    div.classList.remove('show');
    div.style.display = "none";
});

const details = (id) => {
    // alert(id);
    fetch(`https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${id}`)
        .then(res => res.json())
        .then(data => {
            // console.log(data)

            const div = document.querySelector('#noText');
            div.classList.add('show');
            div.style.display = "block";
            const body = document.querySelector('.modal-body');
            body.innerHTML = `
                    <div class="card" style="width: 100%; justify-content: center;
                    display: flex;
                    align-items: center">
                        <img src="${data.players[0].strThumb ? data.players[0].strThumb : "man-22.png"}"
                            class="card-img-top"
                            alt="${data.players[0].strThumb}" style="width:300px !important">
                            <div class="card-body">
                                <h5 class="card-title">Name: ${data.players[0].strPlayer}</h5>
                                <h5 class="card-title">ID: ${data.players[0].idPlayer}</h5>
                                <p class="card-title">Nationality: ${data.players[0].strNationality}</p>
                                <p class="card-title">Team: ${data.players[0].strTeam}</p>
                                <p class="card-title">Sport: ${data.players[0].strSport}</p>
                                <p class="card-title">Gender: ${data.players[0].strGender}</p>
                                <p class="card-text">${data.players[0].strDescriptionEN.slice(0, 90)}..</p>
                                
                                <button onclick='addGroup("${data.players[0].strPlayer}")' class="btn btn-primary">Add Cart</button>
                            </div>
                    </div>
                                `
        }
        );
}



const len = document.querySelector("#len");
const player = document.querySelector("#player");
let data = [];
let count = data.length;

const found = (name) => {
    let bool = false;
    for (let i = 0; i < data.length; i++) {
        const element = data[i];
        if (element === name) {
            bool = true;
        }
        else {
            bool = false;
        }

    }
    return bool;
}
const addGroup = (name) => {
    // alert(data.find(name))


    if (found(name) == false) {
        if (count < 11) {
            count++;
            data.push(name);
            len.innerText = `${count}`
            player.innerHTML += `<li>${name}</li>`;


        }
        else {
            const div = document.querySelector('#noText');
            div.classList.add('show');
            div.style.display = "block";
            const body = document.querySelector('.modal-body');
            body.innerHTML = `<h1>Card is full</h1>`
        }
    }
    else {
        const div = document.querySelector('#noText');
        div.classList.add('show');
        div.style.display = "block";
        const body = document.querySelector('.modal-body');
        body.innerHTML = `<h1>Alrady added</h1>`
    }
}