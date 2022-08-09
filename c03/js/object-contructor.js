var hotel = new Object();
hotel.name = 'Hang Hoa';
hotel.Mua = 120;
hotel.ban = 77;
hotel.checkAvailability = function(){
    return this.Mua - this.ban;
}
var elName=document.getElementById('Hang Hoa');
elName.textContent=hotel.name;
var elRooms = document.getElementById('Mua');
elRooms.textContent=hotel.checkAvailability();
