function Hotel(name, rooms, booked) {
    this.name = name;
    this.rooms = rooms;
    this.booked = booked;
    this.checkAvailability =function (){
        return this.rooms-this.booked;
    };
}
var quayHotel = new Hotel ('Quay', 40, 25);
var parkHotel = new Hotel('park', 120, 77);
var details1=quayHotel.name + 'room';
details1+=quayHotel.checkAvailability();
var elHotel1=document.getElementById('hotel1');
elHotel1.textContent = details1;
var detaisl2=parkHotel.name + 'rooms';
detaisl2+=parkHotel.checkAvailability();
var elHotel2 = document.getElementById('hotel2');
elHotel2.textContent=detaisl2;