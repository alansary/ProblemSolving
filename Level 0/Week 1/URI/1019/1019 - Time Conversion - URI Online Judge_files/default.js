$(document).ready(function () {
    //checkStatus();

    activateButtons();
    //tipsyStatus();
    tipsyLevel();
    tipsyBadges();
    tipsyFriends();

    if ($(".flash").length || $(".auth").length) {
        flashMessage();
    }
    if ($("#google-map").length) {
        drawMap()
    }
    if ($("a#inline").length) {
        showAchievement()
    }
});

function checkStatus()
{
    var sp = new StatusPage.page({
        page : 'ql39fw1455d4'
    });

    sp.status({
        success : function (data) {
            $('.status').addClass(data.status.indicator);
        }
    });
}

function flashMessage()
{
    setTimeout(function () {
        $('.flash, .auth').css({
            'top': '50px'
        });
        $('.page').css({
            'margin-top': '105px'
        });
    }, 10);
    
    setTimeout(function () {
        $('.flash, .auth').css({
            'top': '0px'
        });
        $('.page').css({
            'margin-top': '75px'
        });
    }, -1);
}

function ajaxHistory()
{
    $('#table-paging a, th a').bind("click", function (event) {
        event.preventDefault();

        href = $(this).attr('href');

        // Load the content
        loadContent(href);

        // Records the URL
        history.pushState('', href, href);
    });

    window.onpopstate = function (event) {
        loadContent(location.pathname);
    };
}

function loadContent(href)
{
    $('#ajax').fadeIn();

    $.ajax({
        url: href,
        dataType: 'html',
        evalScripts: true,
        success: function (data, textStatus) {
            $('#element').html(data);

            $('#ajax').fadeOut();
        },
        error: function () {
            $('#ajax').fadeOut();
        }
    });

    ajaxHistory();
}

function tipsyStatus()
{
    $(".status").tipsy({
        fade: true,
        title: "alt",
        html: true,
        gravity: "s"
    })
}

function tipsyLevel()
{
    $("#problem-menu").find("h3").tipsy({
        title: function () {
            return $("#problem-menu").find("span").text()
        },
        gravity: "s"
    })
}

function tipsyBadges()
{
    $(".pb-badges").find("li").tipsy({
        title: function () {
            return $(this).find("span").text()
        },
        gravity: "s"
    })
}

function tipsyFriends()
{
    $(".pb-friends").find("li").tipsy({
        title: function () {
            return $(this).find("span").text()
        },
        gravity: "s"
    })
}

function activateButtons()
{
    // Mouse style if link is present on element
    $("#big-buttons li, #category-list li, .v-menu li").each(function() {
        if ($(this).find("a").length) {
            $(this).css("cursor", "pointer");
        }
    });

    $("#big-buttons li, #category-list li, .v-menu li").click(function () {
        
        if ($(this).find("a").length) {
            var b = $(this).find("a").attr("href");
            var c = $(this).find("a").attr("target");

            if (c == "_blank") {
                window.open(b)
            } else {
                window.location = b
            }
        }

        return false;
    })
}

function showAchievement()
{
    $("a#inline").fancybox();
    $("a#inline").trigger("click")
}

function fadeInAjax()
{
    $("#ajax").fadeIn()
}

function fadeOutAjax()
{
    $("#ajax").fadeOut();
    clickButtons();
    //tipsyStatus()
}

function drawMap()
{
    if (coordinates == "") {
        if (navigator.geolocation) {
            navigator.geolocation.getCurrentPosition(mapSuccess, mapError)
        } else {
            mapError("Unfortunatelly your browser does not support GeoLocation.")
        }
    } else {
        $("#google-map").append('<img src="//maps.google.com/maps/api/staticmap?center=' + coordinates + "&zoom=16&markers=size:medium|color:purple|" + coordinates + "&path=color:0x0000FF80|weight:2|" + coordinates + '&size=350x280&sensor=false" />')
    }
};

function mapSuccess(a) {
    var b = a.coords.latitude + "," + a.coords.longitude;

    $("#google-map").append('<img src="//maps.google.com/maps/api/staticmap?center=' + b + "&zoom=16&markers=size:medium|color:purple|" + b + "&path=color:0x0000FF80|weight:2|" + b + '&size=336x270&sensor=false" />');
    $("#UserCoordinates").val(b)
}

function mapError(a) {

}
