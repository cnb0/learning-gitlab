<?php
global $base_url;
global $base_path;
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
    "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
    <?php global $base_url; ?>

<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
    <head profile="<?php print $grddl_profile; ?>">
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <?php print $head; ?>
        <title><?php print $head_title; ?></title>
        <?php print $styles; ?>
        <link rel="stylesheet" href="<?php print $base_url . $base_path . drupal_get_path('theme', 'jointDisability'); ?>/fonts/font-awesome/css/font-awesome.min.css">
        <!-- HTML5 element support for IE6-8 -->
        <!--[if lt IE 9]>
          <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
        <![endif]-->

        <?php print $scripts; ?>

        <script>
            (function (i, s, o, g, r, a, m) {
                i['GoogleAnalyticsObject'] = r;
                i[r] = i[r] || function () {
                    (i[r].q = i[r].q || []).push(arguments)
                }, i[r].l = 1 * new Date();
                a = s.createElement(o),
                        m = s.getElementsByTagName(o)[0];
                a.async = 1;
                a.src = g;
                m.parentNode.insertBefore(a, m)
            })(window, document, 'script', 'https://www.google-analytics.com/analytics.js', 'ga');

            ga('create', 'UA-1359839-4', 'auto');
            ga('send', 'pageview');

        </script>
        <?php
        if (arg(0) == 'node' && arg(1) == 1301) {
            print '<!-- Google Code for &#1492;&#1502;&#1512;&#1493;&#1514; &#1491;&#1497;&#1493;&#1512; &#1504;&#1514;&#1502;&#1498; &#1490;&#39;&#1493;&#1497;&#1504;&#1496; &#1497;&#1513;&#1512;&#1488;&#1500; Conversion Page -->
<script type="text/javascript">
/* <![CDATA[ */
var google_conversion_id = 852050978;
var google_conversion_label = "upv6CP696nMQooillgM";
var google_remarketing_only = false;
/* ]]> */
</script>
<script type="text/javascript" src="//www.googleadservices.com/pagead/conversion.js">
</script>
<noscript>
<div style="display:inline;">
<img height="1" width="1" style="border-style:none;" alt="" src="//www.googleadservices.com/pagead/conversion/852050978/?label=upv6CP696nMQooillgM&amp;guid=ON&amp;script=0"/>
</div>
</noscript>
';
            ?>    
            <script>
                !function (f, b, e, v, n, t, s)
                {
                    if (f.fbq)
                        return;
                    n = f.fbq = function () {
                        n.callMethod ?
                                n.callMethod.apply(n, arguments) : n.queue.push(arguments)
                    };
                    if (!f._fbq)
                        f._fbq = n;
                    n.push = n;
                    n.loaded = !0;
                    n.version = '2.0';
                    n.queue = [];
                    t = b.createElement(e);
                    t.async = !0;
                    t.src = v;
                    s = b.getElementsByTagName(e)[0];
                    s.parentNode.insertBefore(t, s)
                }(window, document, 'script',
                        'https://connect.facebook.net/en_US/fbevents.js');
                fbq('init', '821531471348979');
                fbq('track', 'PageView');
            </script>
        <noscript><img height="1" width="1" style="display:none"
                       src="https://www.facebook.com/tr?id=821531471348979&ev=PageView&noscript=1"
                       /></noscript>
        <!-- End Facebook Pixel Code -->
        <script>
            fbq('track', 'CompleteRegistration');
        </script>
    <?php }
    ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes; ?>>
    <div id="skip-link">
        <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>

</body>
</html>


