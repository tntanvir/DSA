var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
let name = '';
for (let i = 0; i < friends.length; i++) {
    const element = friends[i];
    if (element.length > name.length) name = element;



}
console.log(name);