const std::string navteqTypemap =
"<polygonTypes>\n"
"	<polygonType id=\"Stadtgrenze\" name=\"city\" color=\"0,0,0\" fill=\"false\" layer=\"1\"/>\n"
"	<polygonType id=\"Waldgebiet\" name=\"forest\" color=\".3,1,0\" layer=\"-2\"/>\n"
"	<polygonType id=\"Park\" name=\"park\" color=\".2,1,.3\" layer=\"-2\"/>\n"
"	<polygonType id=\"Flughafen\" name=\"airport\" color=\".5,.5,.5\" layer=\"-1\"/>\n"
"	<polygonType id=\"Bahn\" name=\"train\" color=\"1,0.3,0.3\" fill=\"false\" layer=\"1\"/>\n"
"	<polygonType id=\"Oro8\" name=\"unknown\" fill=\"false\" color=\"1,1,0\" layer=\"-1\"/>\n"
"	<polygonType id=\"Island\" name=\"island\" fill=\"true\" color=\".2,1,.3\" layer=\"1\"/>\n"
"</polygonTypes>"
;
const std::string osmTypemap =
"<polygonTypes>\n"
"\n"
"    <polygonType id=\"traffic_sign\"            name=\"traffic_sign\" color=\".0,.0,.0\" layer=\"0\"/>\n"
"    <polygonType id=\"waterway\"                name=\"water\"       color=\".71,.82,.82\" layer=\"-4\"/>\n"
"    <polygonType id=\"natural\"                 name=\"natural\"     color=\".55,.77,.42\" layer=\"-4\"/>\n"
"    <polygonType id=\"natural.water\"           name=\"water\"       color=\".71,.82,.82\" layer=\"-4\"/>\n"
"    <polygonType id=\"natural.wetland\"         name=\"water\"       color=\".71,.82,.82\" layer=\"-4\"/>\n"
"    <polygonType id=\"natural.wood\"            name=\"forest\"      color=\".55,.77,.42\" layer=\"-4\"/>\n"
"    <polygonType id=\"natural.land\"            name=\"land\"        color=\".98,.87,.46\" layer=\"-4\"/>\n"
"\n"
"    <polygonType id=\"landuse\"                 name=\"landuse\"     color=\".76,.76,.51\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.forest\"          name=\"forest\"      color=\".55,.77,.42\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.park\"            name=\"park\"        color=\".81,.96,.79\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.residential\"     name=\"residential\" color=\".92,.92,.89\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.commercial\"      name=\"commercial\"  color=\".82,.82,.80\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.industrial\"      name=\"industrial\"  color=\".82,.82,.80\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.military\"        name=\"military\"    color=\".60,.60,.36\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.farm\"            name=\"farm\"        color=\".95,.95,.80\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.greenfield\"      name=\"farm\"        color=\".95,.95,.80\" layer=\"-3\"/>\n"
"    <polygonType id=\"landuse.village_green\"   name=\"farm\"        color=\".95,.95,.80\" layer=\"-3\"/>\n"
"\n"
"    <polygonType id=\"tourism\"                 name=\"tourism\"     color=\".81,.96,.79\" layer=\"-2\"/>\n"
"    <polygonType id=\"military\"                name=\"military\"    color=\".60,.60,.36\" layer=\"-2\"/>\n"
"    <polygonType id=\"sport\"                   name=\"sport\"       color=\".31,.90,.49\" layer=\"-2\"/>\n"
"    <polygonType id=\"leisure\"                 name=\"leisure\"     color=\".81,.96,.79\" layer=\"-2\"/>\n"
"    <polygonType id=\"leisure.park\"            name=\"tourism\"     color=\".81,.96,.79\" layer=\"-2\"/>\n"
"    <polygonType id=\"aeroway\"                 name=\"aeroway\"     color=\".50,.50,.50\" layer=\"-2\"/>\n"
"    <polygonType id=\"aerialway\"               name=\"aerialway\"   color=\".20,.20,.20\" layer=\"-2\"/>\n"
"    <polygonType id=\"highway.services\"        name=\"services\"    color=\".93,.78,1.0\" layer=\"-2\"/>\n"
"\n"
"    <!-- some amenities describe areas rather than buildings and require a lower layer -->\n"
"    <polygonType id=\"amenity.kindergarten\"       name=\"kindergarten\"       color=\".93,.78,.78\" layer=\"-2\"/>\n"
"    <polygonType id=\"amenity.school\"             name=\"school\"             color=\".93,.78,.78\" layer=\"-2\"/>\n"
"    <polygonType id=\"amenity.college\"            name=\"college\"            color=\".93,.78,.78\" layer=\"-2\"/>\n"
"    <polygonType id=\"amenity.university\"         name=\"university\"         color=\".93,.78,.78\" layer=\"-2\"/>\n"
"    <polygonType id=\"amenity.clinic\"             name=\"clinic\"             color=\".93,.78,.78\" layer=\"-2\"/>\n"
"    <polygonType id=\"amenity.research_institute\" name=\"research_institute\" color=\".93,.78,.78\" layer=\"-2\"/>\n"
"    <polygonType id=\"amenity.graveyard\"          name=\"graveyard\"          color=\".93,.78,.78\" layer=\"-2\"/>\n"
"\n"
"    <polygonType id=\"shop\"                    name=\"shop\"        color=\".93,.78,1.0\" layer=\"-1\"/>\n"
"    <polygonType id=\"historic\"                name=\"historic\"    color=\".50,1.0,.50\" layer=\"-1\"/>\n"
"    <polygonType id=\"man_made\"                name=\"man_made\"    color=\"1.0,.90,.90\" layer=\"-1\"/>\n"
"    <polygonType id=\"man_made.pipeline\"       name=\"pipeline\"    color=\"1.0,.90,.90\" layer=\"-1\"/>\n"
"    <polygonType id=\"building\"                name=\"building\"    color=\"1.0,.90,.90\" layer=\"-1\"/>\n"
"    <polygonType id=\"amenity\"                 name=\"amenity\"     color=\".93,.78,.78\" layer=\"-1\"/>\n"
"    <polygonType id=\"amenity.parking\"         name=\"parking\"     color=\".72,.72,.70\" layer=\"-1\"/>\n"
"\n"
"    <polygonType id=\"barrier\"                 name=\"barrier\"     color=\"1.0,.3,.3\" layer=\"0\" fill=\"false\" discard=\"true\"/>\n"
"    <polygonType id=\"power\"                   name=\"power\"       color=\".10,.10,.30\" layer=\"-1\" discard=\"true\"/>\n"
"    <polygonType id=\"highway\"                 name=\"highway\"     color=\".10,.10,.10\" layer=\"-1\" discard=\"true\"/>\n"
"\n"
"    <polygonType id=\"boundary\"                name=\"boundary\"    color=\"1.0,.33,.33\" layer=\"0\" fill=\"false\" discard=\"true\"/>\n"
"    <polygonType id=\"admin_level\"             name=\"admin_level\" color=\"1.0,.33,.33\" layer=\"0\" fill=\"false\" discard=\"true\"/>\n"
"    <polygonType id=\"place\"                   name=\"admin_level\" color=\"1.0,.9,.0\"   layer=\"0\" fill=\"false\" discard=\"true\"/>\n"
"\n"
"    <polygonType id=\"railway\"                 name=\"railway\"     color=\".10,.10,.10\" layer=\"-1\" discard=\"true\"/>\n"
"    <polygonType id=\"railway:position\"        name=\"railway.position\"        color=\"blue\"  layer=\"1\" discard=\"true\"/>\n"
"    <polygonType id=\"railway:position:exact\"  name=\"railway.position.exact\"  color=\"green\" layer=\"2\" discard=\"true\"/>\n"
"\n"
"</polygonTypes>\n"
;
const std::string visumTypemap =
"<polygonTypes>\n"
"	<polygonType id=\"district\" name=\"district\" color=\"1,0,0\" fill=\"f\" layer=\"-1\"/>\n"
"	<polygonType id=\"area\" name=\"area\" color=\"0,1,0\" fill=\"f\" layer=\"-2\"/>\n"
"\n"
"	<polygonType id=\"Det\" name=\"detector\" color=\"0,1,0\" fill=\"f\" layer=\"2\"/>\n"
"	<polygonType id=\"Knot\" name=\"node\" color=\"0,0,1\" fill=\"f\" layer=\"1\"/>\n"
"\n"
"</polygonTypes>"
;
