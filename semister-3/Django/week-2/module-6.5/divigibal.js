let friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

let newFriend = [];

for (let i = 0; i < friends.length; i++) {
    const element = friends[i];
    // console.log(element.length);
    if (element.lenght % 3 == 0 || element.length % 5 == 0) {
        newFriend.push(element);
    }
}
console.log(newFriend);