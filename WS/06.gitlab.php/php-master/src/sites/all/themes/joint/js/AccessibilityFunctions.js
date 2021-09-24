(function ($, Drupal, window, document, undefined) {
$(document).ready(function() {
		
	// -------------- Globals: -------------------------
	var MAX_FONT_SIZE 				= 20;
	
	var IMAGES_PATH  = "/sites/all/themes/joint/images/accessibilty_icons";
	
	var SLIDER_CLASS 						= "flexslider";
	var SLIDER_UL_CLASS 				= "slides";
	var SLIDER_NAV_CLASS 				= "flex-control-paging";
	var SLIDER_CONTROL_CLASS 	= "flex-pauseplay";
	
	var STATEMENT_PATH = "/he/accessibility-statement/";
	//----------------------------------------------------

	var menuID = "#block-lang-dropdown-language";
	
	var language = $('html').attr('lang');

	if (language == "he") {
		$("body").prepend('<div class="accessibility-wrapper"><input type="image" class="accessibility-button"  src="'+IMAGES_PATH+'/disa_neche-08.png" alt="תפריט נגישות סגור, לחץ אנטר לפתיחה."></input><div id="colorAndFontsButtons" style="display:none"><ul><li><input type="image" id="biggerFont" class="bigger" src="'+IMAGES_PATH+'/disability-06.png" alt="לחץ להגדלת הטקסט" /><label for="biggerFont" tabindex="0">הגדלת הטקסט</label></li><li><input type="image" id="resetFont" class="reset" src="'+IMAGES_PATH+'/disability-07.png" alt="לחץ לאיפוס גודל הטקסט" title=""/><label for="resetFont" tabindex="0" >הקטנת הטקסט</label></li><li><input type="image" id="btnMagnifyingGlassForText" src="'+IMAGES_PATH+'/disability-magnifying.png" title="לחץ להגדלת הטקסט בעזרת זכוכית מגדלת"  alt="זכוכית מגדלת"/><label id="btnMagnifyingGlassForText_label" for="btnMagnifyingGlassForText" tabindex="0">זכוכית מגדלת</label></li><li><input type="image" src="'+IMAGES_PATH+'/contrast-03.png" id="black" alt="שינוי הרקע לכהה" title="" /><label for="black" tabindex="0">שינוי הרקע לכהה</label></li><li><input type="image" id="nornal" src="'+IMAGES_PATH+'/OriginalColors.png"  alt="חזרה לצבעים מקוריים" title="" /><label for="nornal" tabindex="0">חזרה לצבעים מקוריים</label></li><li><input type="image" src="'+IMAGES_PATH+'/font_arial.png" id="arial-font" alt="שינוי לפונט קריא"  /><label for="arial-font" tabindex="0">שינוי לפונט קריא</label></li><li><input type="image" src="'+IMAGES_PATH+'/font_default.png" id="reset-font-style" alt="חזרה לפונט מקורי" /><label for="reset-font-style" tabindex="0">חזרה לפונט מקורי</label></li><li><input type="image" src="'+IMAGES_PATH+'/disa-02.png" id="accessibleSlider" alt="הנגשת הסליידר" /><label id="accessibleSlider_label" for="accessibleSlider" tabindex="0">הנגשת הסליידר</label></li><li><input type="image" src="'+IMAGES_PATH+'/disa-03.png" id="accessibleLinks" alt="הדגשת לינקים" /><label id="accessibleLinks_label" for="accessibleLinks" tabindex="0">הדגשת לינקים</label></li><!--<li><a href="'+STATEMENT_PATH+'">הצהרת נגישות</a></li>--></ul></div></div>');
	}
	else {
		$("body").prepend('<div class="accessibility-wrapper"><input type="image" class="accessibility-button" src="'+IMAGES_PATH+'/disa_neche-08.png" alt="Accessibility menu closed, Press Enter to open."></input><div id="colorAndFontsButtons" style="display:none"><ul><li><input type="image" id="biggerFont" class="bigger" src="'+IMAGES_PATH+'/disability-06.png" alt="Click to increase text size" /><label for="biggerFont" tabindex="0">Increase text size</label></li><li><input type="image" id="resetFont" class="reset" src="'+IMAGES_PATH+'/disability-07.png" alt="Click to reset text size"/><label for="resetFont" tabindex="0" >Decrease text size</label></li><li><input type="image" id="btnMagnifyingGlassForText" src="'+IMAGES_PATH+'/disability-magnifying.png" alt="Click to enlarge the text with a magnifying glass"/><label id="btnMagnifyingGlassForText_label" for="btnMagnifyingGlassForText" tabindex="0">Magnifying glass</label></li><li><input type="image" src="'+IMAGES_PATH+'/contrast-03.png" id="black" alt="Change background to dark mode" /><label for="black" tabindex="0">Dark mode</label></li><li><input type="image" id="nornal" src="'+IMAGES_PATH+'/OriginalColors.png" alt="Back to original colors" /><label for="nornal" tabindex="0">Back to original colors</label></li><li><input type="image" src="'+IMAGES_PATH+'/font_arial.png" id="arial-font" alt="Change to readable font"/><label for="arial-font" tabindex="0">Change to readable font</label></li><li><input type="image" src="'+IMAGES_PATH+'/font_default.png" id="reset-font-style" alt="Back to original font" /><label for="reset-font-style" tabindex="0">Back to original font</label></li><li><input type="image" src="'+IMAGES_PATH+'/disa-02.png" id="accessibleSlider" alt="accessible Slider" /><label id="accessibleSlider_label" for="accessibleSlider" tabindex="0">Accessible Slider</label></li><li><input type="image" src="'+IMAGES_PATH+'/disa-03.png" id="accessibleLinks" alt="Highlighting links" /><label id="accessibleLinks_label" for="accessibleLinks" tabindex="0">Highlighting links</label></li><!--<li><a href="'+STATEMENT_PATH+'">Accessibility Statement</a></li>--></ul></div></div>');
	}


	$(".accessibility-button").click(function (){
		if ($("#colorAndFontsButtons").css("display") =="none" )
		{	
			$("#colorAndFontsButtons").css({"display" : "block"});
                        if (language == "he") { 
			   $(".accessibility-button").attr("alt", "תפריט נגישות פתוח, לחץ אנטר לסגירה");
                        }
                        else {	
                           $(".accessibility-button").attr("alt", "Accessibility menu opened, Press Enter to close.");
                        }
		}
		else {	
			$("#colorAndFontsButtons").css({"display" : "none"});
                        if (language == "he") { 
			   $(".accessibility-button").attr("alt", "תפריט נגישות סגור, לחץ אנטר לפתיחה.");
                        }
                       else {	
                          $(".accessibility-button").attr("alt", "Accessibility menu closed, Press Enter to open.");
                       }
		}
	});

    allElmWithBGImages = [];
    allbackgroundImages = [];
    var backgroundColor = getCookies("changeBackgroundColor");
    if (backgroundColor == "black") {
        blackBackground()
    }
    if (backgroundColor == "white") {
        whiteBackground()
    }
    $("#white").click(function() {
        whiteBackground()
    });
    $("#nornal").click(function() {
        defaultBackground()
    });
    $("#black").click(function() {
        blackBackground()
    });
    $("#resetFont").click(function() {
        changeFontSize(0);
		$("#biggerFont").attr('disabled', false) ;
    });
    $("#biggerFont").click(function() {
		if ($("#biggerFont").attr('disabled') == "disabled")
			return false;
		else {
			changeFontSize(1);
			$("#biggerFont").attr('disabled', "disabled") ;
		}
    });
	$("#arial-font").click(function(){
		changeFontType(1, true);
		
	});
	$("#reset-font-style").click(function(){
		changeFontType(-1, true);
		
	});	
	
	
	$("#accessibleSlider").click(function () {
		if (!$("."+SLIDER_CLASS).hasClass("accessible_slider")) {
			
			$("."+SLIDER_CLASS).addClass("accessible_slider"); 
			$("."+SLIDER_UL_CLASS).addClass("accessible_slider_ul"); 
			$("."+SLIDER_NAV_CLASS+", ."+SLIDER_CONTROL_CLASS).addClass("accessible_slider_controls"); 
                          if (language == "he") { 
			     $("#accessibleSlider").attr("alt", "חזרה לסליידר המקורי");
			     $("#accessibleSlider_label").text("חזרה לסליידר המקורי");
                         }
                          else {
                             $("#accessibleSlider").attr("alt", "Back to original Slider");
			     $("#accessibleSlider_label").text("original Slider");	
                         }
			
		} 
		else {	
			$("."+SLIDER_CLASS).removeClass("accessible_slider"); 
			$("."+SLIDER_UL_CLASS).removeClass("accessible_slider_ul"); 
			$("."+SLIDER_NAV_CLASS+", ."+SLIDER_CONTROL_CLASS).removeClass("accessible_slider_controls"); 
                        if (language == "he") { 
			  $("#accessibleSlider").attr("alt", "הנגשת הסליידר");
			  $("#accessibleSlider_label").text("הנגשת הסליידר"); 
                        }
                        else { 
			  $("#accessibleSlider").attr("alt", "Accessible Slider");
			  $("#accessibleSlider_label").text("Accessible Slider"); 
                        }
		}
	});
	
	$("#accessibleLinks").click(function () {
		$("a").toggleClass("accessible-link");
	});
	
	var cookieVal = getCookies("fontSizes");
	cookieVal = parseFloat(cookieVal);
	if (cookieVal) {
		changeFontSize(cookieVal);
	}
    
	var cookieValFont = getCookies("fontType");
	changeFontType(parseFloat(cookieValFont), false);
	
    function getCookies(a) {
        var b = a + "=";
        var d = document.cookie.split(";");
        for (var i = 0; i < d.length; i++) {
            var c = d[i];
            while (c.charAt(0) == " ") c = c.substring(1);
            if (c.indexOf(b) != -1) return c.substring(b.length, c.length)
        }
        return ""
    }

    function changeFontSize(input) {

        if (input == 0) {
            $("*").each(function() {
                var a = parseFloat($(this).css("font"));
                $(this).css("font-size", "")
            });
        } else {
            $("*").each(function() {
                var nodeName = $(this).get(0).nodeName;
                if (nodeName != "TD" && nodeName != "TR" && nodeName != "TBODY" && nodeName != "TABLE") {
					
                    var currFontSize = parseFloat($(this).css("font-size"));					
					NewElmFontSize = currFontSize*0.2 + currFontSize;
					
					//גודל פונט מקסימלי
					if (NewElmFontSize >= MAX_FONT_SIZE) {
						NewElmFontSize = currFontSize;
					}

					if (currFontSize < MAX_FONT_SIZE){
						$(this).css("font-size", NewElmFontSize + "px");
					}
                }
            })
        }
		
		var cookieDate = new Date;
		cookieDate.setFullYear(cookieDate.getFullYear() + 1);			
		document.cookie = "fontSizes=" + input + ";expires=" + cookieDate.toGMTString() + ";path=/";

    }

	function changeFontType(input, createCookie){
		if (input == 1) {
			$("body, h1, h2, h3, h4, h5, h6, .h1, .h2, .h3, .h4, .h5, .h6").css("font-family", "Arial", "important");
		}
		else if (input == -1) { // return to original font
			$("body, h1, h2, h3, h4, h5, h6, .h1, .h2, .h3, .h4, .h5, .h6").css("font-family", "");
		}
		if (createCookie) {
			var cookieDate = new Date;
			cookieDate.setFullYear(cookieDate.getFullYear() + 1);			
			document.cookie = "fontType=" + input + ";expires=" + cookieDate.toGMTString() + ";path=/";
		}
	}
    function whiteBackground() {
        $("*").each(function() {
            if ($(this).hasClass("borderBlack")) {
                $(this).removeClass("borderBlack");
                var a = this.style.cssText;
                var b = a.replace("border-color: rgb(255, 255, 0) ! important", "");
                this.style.cssText = b
            }
            if ($(this).hasClass("backgroungBlack")) {
                $(this).removeClass("backgroungBlack");
                var a = this.style.cssText;
                var b = a.replace("background-color: rgb(255, 255, 0) ! important", "");
                this.style.cssText = b
            }
            if ($(this).hasClass("colorBlack")) {
                $(this).removeClass("colorBlack");
                var a = this.style.cssText;
                var b = a.replace("color: rgb(255, 255, 0) ! important", "");
                this.style.cssText = b
            }
            if ($(this).hasClass("outlineBlack")) {
                $(this).removeClass("outlineBlack");
                var a = this.style.cssText;
                var b = a.replace("outline-color: yellow ! important", "");
                this.style.cssText = b
            }
        });
        var k = new Date;
        k.setFullYear(k.getFullYear() + 1);
        document.cookie = "changeBackgroundColor=white;expires=" + k.toGMTString() + ";";
        $("a").each(function() {
            $(this).addClass("colorWhite")
        });
        $("body *").each(function() {
            if (!$(c).is("script") && !$(c).is("style") && !$(c).is("br") && !$(c).is("iframe") && !$(c).is("html")) {
                var c = $(this);
                var d = $(this).css("background-color");
                var e = $(this).css("color");
                var f = $(this).css("outline-color");
                var g = $(this).css('background-image');
                var h = (c[0].textContent);
                var i = $(this).attr("class");
                if (i == undefined) {
                    i = ""
                } else {
                    i += " "
                } if (d != "transparent") {
                    $(this).addClass(i + "backgroungWhite");
                    $("body").addClass("backgroungWhite");
                    var j = this.style.cssText;
                    this.style.cssText = j + " background-color:#fff !important"
                }
                if (h.trim() != '') {
                    var i = $(this).attr("class");
                    if (i == undefined) {
                        i = ""
                    } else {
                        i += " "
                    }
                    $(this).addClass(i + "colorWhite");
                    if (g != 'none' && !$(c).is("input[type='button']") && !$(c).is("input[type='submit']")) {
                        allElmWithBGImages.push(this);
                        allbackgroundImages.push($(this).css('background-image'));
                        $(this).css('background-image', 'none')
                    }
                    var j = this.style.cssText;
                    this.style.cssText = j + "color:#000 !important"
                }
                $.fn.hasBorder = function() {
                    if ((this.outerWidth() - this.innerWidth() > 0) || (this.outerHeight() - this.innerHeight() > 0)) {
                        return true
                    } else {
                        return false
                    }
                };
                if ($(this).hasBorder()) {
                    var i = $(this).attr("class");
                    if (i == undefined) {
                        i = ""
                    } else {
                        i += " "
                    }
                    $(this).addClass(i + "borderWhite");
                    var j = this.style.cssText;
                    this.style.cssText = j + "border-color:#000 !important"
                }
                $(this).focus(function() {
                    if (f != "transparent") {
                        var a = $(this).attr("class");
                        if (a == undefined) {
                            a = ""
                        } else {
                            a += " "
                        }
                        $(this).addClass(a + "outlineWhite")
                    }
                });
                $(this).blur(function() {
                    if (f != "transparent") {
                        $(this).removeClass("outlineWhite");
                        var a = this.style.cssText;
                        if (a.indexOf("outline-color: rgb(0, 0, 0) ! important") != -1) {
                            var b = a.replace("outline-color: rgb(0, 0, 0) ! important", "")
                        } else {
                            var b = a.replace("outline-color: rgb(0, 0, 0) !important", "")
                        }
                        this.style.cssText = b
                    }
                })
            }
        })
    }

    /*function getCookies(a) {
        var b = a + "=";
        var d = document.cookie.split(";");
        for (var i = 0; i < d.length; i++) {
            var c = d[i];
            while (c.charAt(0) == " ") c = c.substring(1);
            if (c.indexOf(b) != -1) return c.substring(b.length, c.length)
        }
        return ""
    }*/

    function blackBackground() {
        $("a").removeClass("colorBlack");
		$("body").css("background-color","black", "!important");
        $("*").each(function() {
            if ($(this).hasClass("borderWhite")) {
                $(this).removeClass("borderWhite");
                var a = this.style.cssText;
                var b = a.replace("border-color: rgb(0, 0, 0) ! important", "");
                this.style.cssText = b
            }
            if ($(this).hasClass("backgroungWhite")) {
                $(this).removeClass("backgroungWhite");
                var a = this.style.cssText;
                var b = a.replace("background-color: rgb(255, 255, 255) ! important", "");
                this.style.cssText = b
            }
            if ($(this).hasClass("colorWhite")) {
                $(this).removeClass("colorWhite");
                var a = this.style.cssText;
                var b = a.replace("color: rgb(0, 0, 0) ! important", "");
                this.style.cssText = b
            }
            if ($(this).hasClass("outlineWhite")) {
                $(this).removeClass("outlineWhite");
                var a = this.style.cssText;
                var b = a.replace("outline-color: rgb(0, 0, 0) ! important", "");
                this.style.cssText = b
            }
        });
        var k = new Date;
        k.setFullYear(k.getFullYear() + 1);
        document.cookie = "changeBackgroundColor=black;expires=" + k.toGMTString() + ";path=/";
        $('body *').each(function() {
            var c = $(this);
            if (!$(c).is("script") && !$(c).is("style") && !$(c).is("br") && !$(c).is("iframe") && !$(c).is("html")) {
                var d = $(this).css("background-color");
                var e = $(this).css("color");
                var f = $(this).css("outline-color");
                var g = $(this).css('background-image');
                var h = (c[0].textContent);
                var i = $(this).attr("class");
                if (i == undefined) {
                    i = ""
                } else {
                    i += " "
                } if (d != "transparent") {
                    $(this).addClass(i + "backgroungBlack");
                    $("body").addClass("backgroungBlack");
                    var j = this.style.cssText;
                    this.style.cssText = j + "background-color:#000 !important"
                }
                if (g != 'none' && !$(c).is("input[type='button']") && !$(c).is("input[type='submit']")) {
                    allElmWithBGImages.push(this);
                    allbackgroundImages.push($(this).css('background-image'));
                    $(this).css('background-image', 'none')
                }
                if (h.trim() != '') {
                    var i = $(this).attr("class");
                    if (i == undefined) {
                        i = ""
                    } else {
                        i += " "
                    }
                    $(this).addClass(i + "colorBlack");
                    var j = this.style.cssText;
                    this.style.cssText = j + "color: yellow  !important"
                }
                $.fn.hasBorder = function() {
                    if ((this.outerWidth() - this.innerWidth() > 0) || (this.outerHeight() - this.innerHeight() > 0)) {
                        return true
                    } else {
                        return false
                    }
                };
                if ($(this).hasBorder()) {
                    var i = $(this).attr("class");
                    if (i == undefined) {
                        i = ""
                    } else {
                        i += " "
                    }
                    $(this).addClass(i + "borderBlack");
                    var j = this.style.cssText;
                    this.style.cssText = j + "border-color: yellow !important"
                }
                $(this).focus(function() {
                    if (f != "transparent") {
                        var a = $(this).attr("class");
                        if (a == undefined) {
                            a = ""
                        } else {
                            a += " "
                        }
                        $(this).addClass(a + "outlineBlack");
                        var b = this.style.cssText;
                        this.style.cssText = b + "outline-color: yellow !important"
                    }
                });
                $(this).blur(function() {
                    if (f != "transparent") {
                        $(this).removeClass("outlineBlack");
                        var a = this.style.cssText;
                        if (a.indexOf("outline-color: yellow ! important") != -1) {
                            var b = a.replace("outline-color: yellow ! important", "")
                        } else {
                            var b = a.replace("outline-color: yellow !important", "")
                        }
                        this.style.cssText = b
                    }
                })
            }
        })
    }

    function defaultBackground() {
        document.cookie = "changeBackgroundColor=; expires=Thu, 01 Jan 1970 00:00:00 UTC; path=/";
		
		$("body").css("background-color", "white", "!important");
        $("*").each(function() {
            if ($(this).hasClass("borderBlack")) {
                $(this).removeClass("borderBlack");
                var a = this.style.cssText;
                if (a.indexOf("border-color: yellow ! important") != -1) {
                    var b = a.replace("border-color: yellow ! important", "")
                } else {
                    var b = a.replace("border-color: yellow !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("backgroungBlack")) {
                $(this).removeClass("backgroungBlack");
                var a = this.style.cssText;
                if (a.indexOf("background-color: rgb(0, 0, 0) ! important") != -1) {
                    var b = a.replace("background-color: rgb(0, 0, 0) ! important", "")
                } else {
                    var b = a.replace("background-color: rgb(0, 0, 0) !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("colorBlack")) {
                $(this).removeClass("colorBlack");
                var a = this.style.cssText;
                if (a.indexOf("color: yellow ! important") != -1) {
                    var b = a.replace("color: yellow ! important", "")
                } else {
                    var b = a.replace("color: yellow !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("outlineBlack")) {
                $(this).removeClass("outlineBlack");
                var a = this.style.cssText;
                if (a.indexOf("outline-color: yellow ! important") != -1) {
                    var b = a.replace("outline-color: yellow ! important", "")
                } else {
                    var b = a.replace("outline-color: yellow !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("borderWhite")) {
                $(this).removeClass("borderWhite");
                var a = this.style.cssText;
                if (a.indexOf("border-color: rgb(0, 0, 0) ! important") != -1) {
                    var b = a.replace("border-color: rgb(0, 0, 0) ! important", "")
                } else {
                    var b = a.replace("border-color: rgb(0, 0, 0) !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("backgroungWhite")) {
                $(this).removeClass("backgroungWhite");
                var a = this.style.cssText;
                if (a.indexOf("background-color: rgb(255, 255, 255) ! important") != -1) {
                    var b = a.replace("background-color: rgb(255, 255, 255) ! important", "")
                } else {
                    var b = a.replace("background-color: rgb(255, 255, 255) !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("colorWhite")) {
                $(this).removeClass("colorWhite");
                var a = this.style.cssText;
                if (a.indexOf("color: rgb(0, 0, 0) ! important") != -1) {
                    var b = a.replace("color: rgb(0, 0, 0) ! important", "")
                } else {
                    var b = a.replace("color: rgb(0, 0, 0) !important", "")
                }
                this.style.cssText = b
            }
            if ($(this).hasClass("outlineWhite")) {
                $(this).removeClass("outlineWhite");
                var a = this.style.cssText;
                if (a.indexOf("outline-color: rgb(0, 0, 0) ! important") != -1) {
                    var b = a.replace("outline-color: rgb(0, 0, 0) ! important", "")
                } else {
                    var b = a.replace("outline-color: rgb(0, 0, 0) !important", "")
                }
                this.style.cssText = b
            }
        });
        $(allElmWithBGImages).each(function(i) {
            $(this).css('background-image', allbackgroundImages[i])
        })
    }

    function isTextNode(a) {
        return a.nodeType == 3
    }
    $('input').each(function() {
        var a = $(this).attr('type');
        if (a === undefined) {
            $(this).attr('type', 'text')
        }
    });
	
	//טיפול בטפסים
    $('input[type="text"],input[type="password"],textarea').each(function() {
        var a = $(this);
        var b = $(this).prevAll();
        var c = checkForText(b);
        if (c == "") {
            b = $(a).parent().prevAll();
            c = checkForText(b);
            if (c == "") {
                b = $(a).parent().parent().prevAll();
                c = checkForText(b)
            }
        }
        c = c.trim();
        var d = $(a).attr('title');
        if (d !== undefined) {
            $(a).attr('title', d + c)
        } else {
            $(a).attr('title', c)
        }
    });

    function checkForText(a) {
        var b = "";
        for (var i = 0; i < a.length; i++) {
            b = $(a[i]).text();
            if (b.trim() != "") {
                break
            }
        }
        return b
    }
    $("select").each(function() {
        var b = $(this).val().toString() + ",";
        var c = "";
        $(this).children().each(function() {
            var a = $(this).val() + ",";
            $(this).attr("area-selected", b.indexOf(a) != -1)
        })
    });
    $("select").change(function() {
        var b = $(this).val().toString() + ",";
        var c = "";
        $(this).children().each(function() {
            var a = $(this).val() + ",";
            $(this).attr("area-selected", b.indexOf(a) != -1)
        })
    });
    $("input[type=range]").each(function() {
        var a = $(this).attr("id");
        var b = $(this).attr("min");
        var c = $(this).attr("max");
        var d = (" (min is: " + b + ", max is: " + c + ")");
        $("label[for= ' " + a + " ' ]").append(d);
        $(this).attr("aria-valuemin", b);
        $(this).attr("aria-valuemax", c);
        $(this).attr("role", "slider")
    });
    $("[type=range]").change(function() {
        var a = $(this).val();
        $(this).attr("aria-valuenow", a);
        if ($("#corruentValue").length) {
            $("#corruentValue").remove()
        }
        $(this).after("<span id='corruentValue'>the corruent value is: " + a + "</span>")
    });
    $("[type=radio],[type=checkbox]").each(function() {
        var a = $(this).attr("name");
        var b = 'input[name="' + a + ' "] ';
        $(b).each(function() {
            if ($(this).is(":checked")) {
                $(this).attr("aria-checked", "true")
            } else {
                $(this).attr("aria-checked", "false")
            }
        })
    });
    $("[type=radio]").change(function() {
        var a = $(this).attr("name");
        $("input[name='" + a + "']").each(function() {
            if ($(this).is(":checked")) {
                $(this).attr("aria-checked", "true")
            } else {
                $(this).attr("aria-checked", "false")
            }
        })
    });
    $("[type=checkbox]").change(function() {
        var a = $(this).attr("name");
        $("input[name='" + a + "']").each(function() {
            if ($(this).is(":checked")) {
                $(this).attr("aria-checked", "true")
            } else {
                $(this).attr("aria-checked", "false")
            }
        })
    });
    $("select").each(function() {
        if ($(this).attr("multiple") != undefined) {
            $(this).attr({
                "role": "listbox",
                "aria-multiselecttable": "true"
            })
        } else {
            $(this).attr({
                "role": "listbox",
                "aria-multiselecttable": "false"
            })
        }
    });
    $("textarea").each(function() {
        if ($(this).attr("aria-multiline") == undefined) {
            $(this).attr("aria-multiline", "true")
        }
    });
    $("[type=tel],[type=text],[type=url],[type=search],[type=password],[type=email]").each(function() {
        $(this).attr("role", "textbox")
    });
    $("[type=submit],[type=button]").each(function() {
        $(this).attr("role", "button")
    });
    $("[required='required']").each(function() {
        if ($(this).attr("aria-required") == undefined) {
            $(this).attr("aria-required", "true")
        }
    });
    $("[disabled]").each(function() {
        $(this).attr("aria-readonly", "true")
    });
    var m = "he";
    var n = $("html").attr("lang");
    if (n == undefined || n == "") {
        n = $("body").css("direction");
        if (n == "rtl") {
            n = m
        } else {
            n = "en"
        }
    }
	
	//זכוכית מגדלת
   /* $("body").append('<p id="inputBoard"></p>');
    $('[type="text"],textarea').each(function() {
        var e = $(this).attr("id");
        var f = $('label[for="' + e + '"]').text();
        if (f == "" || f.length <= 0) {
            f = $(this).attr('title')
        }
        if (n == "he" || n == "he-il") {
            var g = " הקלדת בתוך השדה <strong>'";
            var h = "'</strong> את הטקסט:  <span style='text-decoration:underline'>"
        }
        if (n == "en") {
            var g = "you type inside <strong>'";
            var h = "'</strong> this text: <span style='text-decoration:underline'>"
        }
        $(this).focus(function(a) {
            var b = $(this).val();
            if (b == "") {
                $("#inputBoard").empty()
            } else {
                var c = $(this);
                Magnifier_For_Input_position_by_language(n, c);
                var d = g + f + h + $(this).val() + "</span>";
                $("#inputBoard").css({
                    "border": "2px solid #000",
                    "position": "absolute",
                    "padding": "5px",
                    "background-color": "#fff"
                }).html(d)
            }
        });
        $(this).blur(function() {
            $("#inputBoard").empty().css({
                "border": "none",
                "position": "absolute",
                "padding": "0",
                "background-color": "#fff"
            })
        });
        $(this).keyup(function(a) {
            var b = $(this);
            Magnifier_For_Input_position_by_language(n, b);
            var c = g + f + h + $(this).val() + "</span>";
            $("#inputBoard").css({
                "border": "2px solid #000",
                "position": "absolute",
                "padding": "5px",
                "background-color": "#fff"
            }).html(c)
        })
    });

    function Magnifier_For_Input_position_by_language(lang, element) {
        if (lang == "en") {
            var c = $(element).offset();
            var d = $(element).css("width");
            var e = parseInt(c.left) + parseInt(d);
            var f = parseInt($(document).width());
            if (f < (e + 300)) {
                e = (e - parseInt(d) - 300)
            }
            $("#inputBoard").css({
                "left": e,
                "top": parseInt(c.top) + parseInt($(element).css("height") + 5)
            })
        }
        if (lang == "he" || lang == "he-il") {
            var c = $(element).offset();
            var d = $(element).css("width");
            var e = $(element).outerWidth() - parseInt(c.left);
            var f = parseInt($(document).width());
            if (0 > (e)) {
                e = (e + 300)
            }
            $("#inputBoard").css({
                "left": e,
                "top": parseInt(c.top) + parseInt($(element).css("height") + 5)
            })
        }
    }
*/
    function getButtonsColorFont() {
        var a = $("#accessibleToolsBar button, #accessibleToolsBar a");
        $(a).last().focusout().keydown(function(e) {
            if (e.keyCode == 9) {
                $("#accessibleToolsBar").slideUp("slow")
            }
        })
    }
	//לינקים
    $('a[target="_blank"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",נפתח בחלון חדש").attr('rel', 'external')
            } else {
                $(this).attr('title', " נפתח בחלון חדש").attr('rel', 'external')
            }
        }
    });
    $('a[href*=".pdf"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", מסמך PDF להורדה או צפייה  ")
            } else {
                $(this).attr('title', " מסמך PDF להורדה או צפייה  ")
            }
        }
    });
    $('a[href*=".txt"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", מסמך מסוג TXT להורדה   ").attr("download", "download")
            } else {
                $(this).attr('title', "מסמך מסוג TXT להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".doc"],a[href*=".docx"],a[href*=".odt"],a[href*=".wps"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", מסמך  וורד להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', "מסמך  וורד להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".xlsx"],a[href*=".ods"],a[href*=".xls"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", מסמך  אקסל להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', "מסמך  אקסל להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".ppt"],a[href*=".pptx"],a[href*=".pptm"],a[href*=".pps"],a[href*=".ppsx"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", מסמך  מצגת להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', "מסמך  מצגת להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".png"],a[href*=".jpg"],a[href*=".bmp"],a[href*=".gif"],a[href*=".jpeg"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", תמונה להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', "תמונה להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".indd"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", קובץ InDesign להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', "קובץ InDesign להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".ai"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", קובץ Illustrator להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', "קובץ Illustrator להורדה").attr("download", "download")
            }
        }
    });
    $('a[href*=".psd"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ", קובץ פוטושופ להורדה").attr("download", "download")
            } else {
                $(this).attr('title', "קובץ פוטושופ להורדה").attr("download", "download")
            }
        }
    });
    $('a[href*=".zip"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג zip להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג zip להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".rar"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג rar להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג rar להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".jar"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג jar להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג jar להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".iso"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג iso להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג iso להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".dmg"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג dmg להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג dmg להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".7z"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג zip להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג zip להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".gz"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג gz להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג gz להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".ace"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג ace להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג ace להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".cab"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג cab להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג cab להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".vcd"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ מקובץ מסוג vcd להורדה ").attr("download", "download")
            } else {
                $(this).attr('title', " קובץ מקובץ מסוג vcd להורדה ").attr("download", "download")
            }
        }
    });
    $('a[href*=".exe"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ ישום להורדה").attr("download", "download")
            } else {
                $(this).attr('title', "קובץ ישום להורדה").attr("download", "download")
            }
        }
    });
    $('a[href*=".ogg"],a[href*=".m4v"],a[href*=".divx"],a[href*=".mpeg"],a[href*=".m4a"],a[href*=".mp4"],a[href*=".mov"],a[href*=".mpg"],a[href*=".avi"],a[href*=".wmv"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ וידאו להורדה").attr("download", "download")
            } else {
                $(this).attr('title', "קובץ וידאו להורדה").attr("download", "download")
            }
        }
    });
    $('a[href*=".amr"],a[href*=".mp2"],a[href*=".ram"],a[href*=".aiff"],a[href*=".aif"],a[href*=".wma"],a[href*=".wav"],a[href*=".m4v"]').each(function() {
        var a = $(this).attr('title');
        if (a !== undefined) {
            if ($(this).attr('title').length >= 1) {
                var b = $(this).attr('title');
                $(this).attr('title', b + ",  קובץ שמע להורדה").attr("download", "download")
            } else {
                $(this).attr('title', "קובץ שמע להורדה").attr("download", "download")
            }
        }
    });
	
	//מטפל בפוקוס נמצא עם תמונה
    /*$('a').focus(function() {
        var a = $(this).children();
        if (a.length != 0) {
            $(this).css({
                "border": "0",
                "outline": "0"
            });
            $(a).css({
                "border": "0",
                "outline": "1px solid #000"
            })
        }
    });*/
    $('a').blur(function() {
        var a = $(this).children();
        if (a.length != 0) {
            $(this).css({
                "border": "",
                "outline": ""
            });
            $(a).css({
                "border": "",
                "outline": ""
            })
        }
    });
	
	//מוסיף ALT ריק
    $("img").each(function() {
        if ($(this).attr("alt") == "undefined") {
            $(this).attr("alt", "")
        }
        if ($(this).attr("alt") == undefined) {
            $(this).attr("alt", "")
        }
        var a = $(this).attr('alt');
        var b = a.length;
        if (b > 100) {
            $(this).attr("aria-label", a);
            $(this).attr('alt', "")
        }
    });
	
	//הגדרת חוקי ARIA לאזורים
    $('table').attr('role', 'presentation');
	//להגדיר אזור תוכן ראשי
    $('#content_mod').attr('role', 'main');
	
	//להגדיר אזור טופס
    $('form').attr('role', 'form');
	//להגדיר אזור חיפוש
    $('').attr('role', 'search');
	//
    $('').attr('role', 'complementary');
    $('').attr('role', 'complementary');
    $('').attr('role', 'complementary');
    $('').attr('role', 'complementary');
    $('').attr('aria-autocomplete', 'none');
    if ($("#myDiv").length) {
        $("#myDiv").show()
    }
//});	
	
  /*  $("#menu").prepend('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink0" href="#skipLink1" tabindex="0" >הגעת לתפריט הראשי , לחץ אינטר כדי לעבור לאזור הבא</a></h5>');
    $('#body').before('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink1" href="#skipLink2" tabindex="0" >הגעת לתוכן הראשי , לחץ אינטר כדי לעבור לאזור הבא</a></h5>');
    $(".sidebar").prepend('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink2" href="#skipLink3" tabindex="0" >הגעת לארכיון , לחץ אינטר כדי לחזור לראש הדף</a></h5>');
    $('.paging').prepend('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink3" href="#skipLink4" tabindex="0" >הגעת לניווט בתוצאות חיפוש לפי מספרי עמודים , לחץ אינטר כדי לעבור לאזור הבא</a></h5>');
    $("#footer").prepend('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink4" href="#skipLink5" tabindex="0" >הגעת kpuyr, לחץ אינטר כדי לעבור לאזור הבא</a></h5>');
    $("body").append('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink5" href="#firstLink" tabindex="0" >הגעת לסוף דף האינטרנט , לחץ אינטר כדי לחזור לראש הדף</a></h5>');
    $(".skipArea").click(function() {
        var a = $(".skipArea");
        var b = $(a).index(this);
        var c = b + 1;
        if (c == a.length) {
            c = 0
        }
        var d = $(this).parent().parent().css("width");
        $(a[c]).css("width", (d)).focus()
    });
    $("a[href*=#]:not([href=#])").click(function() {
        if (location.pathname.replace(/^\//, "") == this.pathname.replace(/^\//, "") && location.hostname == this.hostname) {
            var a = $(this.hash);
            a = a.length ? a : $("[name=" + this.hash.slice(1) + "]");
            if (a.length) {
                $("html,body").animate({
                    scrollTop: a.offset().top
                }, 1000);
                return false
            }
        }
    });
    $("body").prepend('<h5 class="areaHeading"><a id="firstLink" class="skipToMainContent" name="skipLink99" href="#skipLink1" tabindex="0" >תחילת דף אינטרנט, לחץ אינטר כדי לעבור לאזור התוכן המרכזי </a></h5>');
    $(".skipToMainContent").click(function() {
        var a = $('[role="main"]');
        if ($('[name="skipLink2"]').length == 1) {
            $('[name="skipLink2"]').focus()
        } else {
            $(a).focus()
        }
    });
    $('img[onclick^="location"]').each(function() {
        $(this).attr({
            'role': 'link',
            'tabindex': '0'
        }).parent().attr('role', 'application')
    });
    $('img[onclick^=" window.open"]').each(function() {
        $(this).attr({
            'role': 'link',
            'tabindex': '0'
        }).parent().attr('role', 'application')
    })*/
});
$(document).ready(function() {

	var language = $('html').attr('lang');
	
    $('#btnMagnifyingGlassForText').click(function() {
		$('#btnMagnifyingGlassForText').toggleClass("glass-active");
		 // Glass is active
		 if ($('#btnMagnifyingGlassForText').hasClass("glass-active")) {
            $('body').append('<div id="textMagnifyingGlass"></div>');
            $(this).attr({
                'src': '/sites/all/themes/joint/images/accessibilty_icons/disability-08.png'
            });
            $(this).attr('title', "לחץ לביטול הגדלת הטקסט בעזרת זכוכית מגדלת");
            // $(this).attr('alt', "ביטול זכוכית מגדלת");
		    if (language == "he")
				$("#btnMagnifyingGlassForText_label").text("ביטול זכוכית מגדלת");
			else
				$("#btnMagnifyingGlassForText_label").text("Cancel magnifying glass");
            runMagnifyingGlass()
        }
		// Glass is inactive
		else {
            $('#textMagnifyingGlass').remove();
            $(this).attr({
                'src': '/sites/all/themes/joint/images/accessibilty_icons/disability-magnifying.png'
            });
           $(this).attr('title', "לחץ להגדלת הטקסט בעזרת זכוכית מגדלת");
			if (language == "he")
				$("#btnMagnifyingGlassForText_label").text("זכוכית מגדלת");
			else
				$("#btnMagnifyingGlassForText_label").text("Magnifying glass");
            Query('#textMagnifyingGlass span').css('dispaly', 'none');
            document.cookie = "textMagnifyingGlass=; expires=Thu, 01 Jan 1970 00:00:00 UTC"
        }
    });
    var g = getCookies("textMagnifyingGlass");
    if (g == 'yes') {
        runMagnifyingGlass()
    }

    function runMagnifyingGlass() {
        //var d = new Date;
        //d.setFullYear(d.getFullYear() + 1);
        //document.cookie = "textMagnifyingGlass=yes;expires=" + d.toGMTString() + ";";
        allElmWithText = $('a,h1,h2,h3,h4,h5,h6,li,p,td.title');
        $(allElmWithText).attr('tabindex', '0');

        $(allElmWithText).focus(function() {
            if ($(this).css('position') != "none" && $(this).css('opacity') != "0" && $(this).css('visibility') != "hidden" && $('#btnMagnifyingGlassForText').attr('title') == "לחץ לביטול הגדלת הטקסט בעזרת זכוכית מגדלת") {
                var a = $(this).text();
                var a = a.trim();
                if (a.length > 1 && a != "//") {
                    var b = $(this);
                    Magnifier_For_Input_position_by_language(language, b);
                    var c = "<span>" + a + "</span>";
                    $("#textMagnifyingGlass").css({
                        "z-index": "99999999",
                        "border": "1px solid #000",
                        "position": "absolute",
                        "padding": "5px",
                        "background-color": "#fff",
						"font-size" : parseFloat(b.css('font-size'))*2
                    }).html(c)
                }
            }
        });
        $(allElmWithText).blur(function() {
            $('#textMagnifyingGlass').css('dispaly', 'none')
        });
        $(allElmWithText).hover(function() {
            if ($(this).css('position') != "none" && $(this).css('opacity') != "0" && $(this).css('visibility') != "hidden" && $('#btnMagnifyingGlassForText').attr('title') == "לחץ לביטול הגדלת הטקסט בעזרת זכוכית מגדלת") {
                var a = $(this).text();console.log(a);
                var a = a.trim();
                if (a.length > 1 && a != "//") {
                    var b = $(this);
                    Magnifier_For_Input_position_by_language(language, b);
                    var c = "<span>" + a + "</span>";
                    $("#textMagnifyingGlass").css({
                        "z-index": "99999999",
                        "border": "1px solid #000",
                        "position": "absolute",
                        "padding": "5px",
                        "background-color": "#fff",
						"font-size" : parseFloat(b.css('font-size'))*2
                    }).html(c)
                }
            }
        }, function() {
            $('#textMagnifyingGlass').css('dispaly', 'none')
        })
    }
});

function getCookies(a) {
    var b = a + "=";
    var d = document.cookie.split(";");
    for (var i = 0; i < d.length; i++) {
        var c = d[i];
        while (c.charAt(0) == " ") c = c.substring(1);
        if (c.indexOf(b) != -1) return c.substring(b.length, c.length)
    }
    return ""
}

function Magnifier_For_Input_position_by_language(a, b) {
    if (a == "en" || a =="en-US") {
        var c = $(b).offset();
        var d = $(b).css("width");
        var e = parseInt(c.left) + parseInt(d);
        var f = parseInt($(document).width());
        if (f < (e + 300)) {
            e = (e - parseInt(d) - 300)
        }
        $("#textMagnifyingGlass").css({
            "left": e,
            "top": parseInt(c.top) + parseInt($(b).css("height") + 5)
        })		
    }
    if (a == "he" || a == "he-IL") {
        var c = $(b).offset();
        var d = $(b).css("width");
        var e = parseInt(c.left) - (($(b).outerWidth()) / 2);
        var f = parseInt($(document).width());
        if (0 > (e)) {
            e = (e + 300)
        }
        $("#textMagnifyingGlass").css({
            "left": e,
            "top": parseInt(c.top) + (parseInt($(b).css("height")) + 5)
        })
    }
}
$(function() {
    var a = $('.top_storyTitle a');
    var b = $('.top_storyContinue a');
    $(b).each(function(i) {
        $(this).attr('title', $(a[i]).text())
    })
});

// להגדיר אזורים 
/*
$(document).ready(function() {

    jQuery('.headingSkipArea').remove();
    jQuery('.areaHeading').remove();
    areaLInksNavigetion();

    function areaLInksNavigetion() {
        var language = "en";
        var areaLinks = [];
        areaLinks[0] = {
            appand_to: jQuery('#menu'),
            href: jQuery(''),
            text_link: "You have reached the main menu"
        }
        areaLinks[1] = {
            appand_to: jQuery('#body > ul'),
            href: jQuery(''),
            text_link: "You have reached blog - View abstracts of articles "
        }
        areaLinks[2] = {
            appand_to: jQuery('.paging'),
            href: jQuery(''),
            text_link: "Navigating to previous pages "
        }
        areaLinks[3] = {
            appand_to: jQuery('#footer'),
            href: jQuery(''),
            text_link: "Credits and social networks"
        }
        areaLinks[4] = {
            appand_to: jQuery('.sidebar'),
            href: jQuery(''),
            text_link: "Archive Articles"
        }
        areaLinks[5] = {
            appand_to: jQuery('#contactUs'),
            href: jQuery(''),
            text_link: "Contact Form"
        }
        areaLinks[6] = {
            appand_to: jQuery('#colorAndFontsButtons'),
            href: jQuery(''),
            text_link: "accessibility ToolsBar"
        }
        areaLinks[7] = {
            appand_to: jQuery('main'),
            href: jQuery(''),
            text_link: "main content"
        }
		areaLinks[8] = {
            appand_to: jQuery('main'),
            href: jQuery(''),
            text_link: "main content"
        }

        if (language == "en") {
            for (var i = 0; i < areaLinks.length; i++) {
                if (jQuery(areaLinks[i].appand_to).length > 0) {
                    //jQuery(areaLinks[i].appand_to).prepend('<h5 class="headingSkipArea"><a class="skipArea" name="skipLink' + i + '" href="#" tabindex="0" >' + areaLinks[i].text_link + '",<br /> You can press Enter to skip to the next area</a></h5>');
                }
            }
            //jQuery("body").append('<h5 class="areaHeading"><a id="lastLink" class="skipArea" name="lastLink" href="#firstLink" tabindex="0" >End of a Web page, you can press Enter to return to top</a></h5>');
            var mainContentContainerElm = "#body";
            //jQuery("body").prepend('<h5 class="areaHeading"><a id="firstLink" class="skipToMainContent" name="firstLink" href="' + mainContentContainerElm + '" tabindex="0" >The beginning of a web page, click to move to the main Content</a></h5>');
            jQuery(mainContentContainerElm).attr({
                "role": "main-container"
            });
        }

        jQuery(".skipToMainContent").click(function(event) {
            event.preventDefault();
            var elm = jQuery('[role="main"]');
            if (elm != undefined && elm.length == 1) {
                jQuery(elm).attr("tabindex", "0").focus();
            } else {
                var gotoElm = jQuery(this).attr("href");
                jQuery(gotoElm).attr("tabindex", "0").focus();
            }
        });

        jQuery(".skipArea").each(function(i) {
            var arr = jQuery(".skipArea");
            if ((arr.length - 1) == i) {
                jQuery(this).attr({
                    "href": "#firstLink",
                    "name": "skipLink" + i
                });
            } else {
                jQuery(this).attr({
                    "href": "#skipLink" + (i + 1),
                    "name": "skipLink" + i
                });
            }
        });

        jQuery(".skipArea").click(function(event) {
            event.preventDefault();
            nextLink = jQuery(this).attr("href");
            nextLink = nextLink.replace("#", "");
            jQuery('[name="' + nextLink + '"]').focus();
        });

        jQuery("a[href*=#]:not([href=#*])").click(function() {
            if (location.pathname.replace(/^\//, "") == this.pathname.replace(/^\//, "") && location.hostname == this.hostname) {
                var target = jQuery(this.hash);
                target = target.length ? target : jQuery("[name=" + this.hash.slice(1) + "]");
                if (target.length) {
                    jQuery("html,body").animate({
                        scrollTop: (target.offset().top)
                    }, 1000);
                    return false;
                }
            }
        });
    }

});*/
})(jQuery, Drupal, this, this.document);