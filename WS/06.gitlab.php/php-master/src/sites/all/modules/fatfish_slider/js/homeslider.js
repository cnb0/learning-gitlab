(function($){
    $(function(){
        $('.view-homepageslider .item-list ul').cycle({
            pagerAnchorBuilder:buildNav,
            pager:'.switcher',
            timeout:10000
        });
    });
})(jQuery);


function buildNav(index,domElement){    //
    var title=jQuery('.view-homepageslider .views-row-'+(index+1)+' .views-field-title a').text();
    return '<a href="#" class="anav-'+index+'">'+title+'</a>';
}
