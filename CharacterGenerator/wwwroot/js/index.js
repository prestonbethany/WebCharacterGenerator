$(document).ready(function () {
    $("#statsRollButton").on("click", function () {
        $.get("home/statRoller", function (data) {
            for (let i = 0; i < 6; i++) {
                $("#roll" + i).val(data[i]);
            }
        });
    });
});