<div class="image">
    <?php
    //print_r(array_keys($fields));
    if ($fields['field_homepagesliderimage']) {
        $field = $fields['field_homepagesliderimage'];
        if (!empty($field->separator)) {
            print $field->separator;
        }
        print $field->wrapper_prefix;
        print $field->label_html;
        print $field->content;
        print $field->wrapper_suffix;
    }
    ?>
</div>
<div class="decription">
    <?php
    if ($fields['title']) {

        $field = $fields['title'];
        if (!empty($field->separator)) {
            print $field->separator;
        }
        print $field->wrapper_prefix;
        print $field->label_html;
        print $field->content;
        print $field->wrapper_suffix;
    }
    if ($fields['body']) {
        if (!empty($field->separator)) {
            print $field->separator;
        }
        $field = $fields['body'];
        print $field->wrapper_prefix;
        print $field->label_html;
        print $field->content;
        print $field->wrapper_suffix;
    }
    ?>
</div>

