#pragma once
#include <string>
#include <vector>

// @brief template tool
struct TemplateTool {

    // @brief constructor
    TemplateTool(const std::string name_, const std::string pythonPath_,
        const std::string subfolder_, const std::string templateStr_) :
        name(name_),
        pythonPath(pythonPath_),
        subfolder(subfolder_),
        templateStr(templateStr_) {
    }

    // @brief tool name
    const std::string name;

    // @brief python path
    const std::string pythonPath;

    // @brief subfolder path
    const std::string subfolder;

    // @brief tool template
    const std::string templateStr;
};

const std::vector<TemplateTool> templateTools {

TemplateTool("edgeDataFromFlow", "tools/detector/edgeDataFromFlow.py", "detector",
"<configuration>"
    "<detector-file value=\"None\" type=\"additional_file\" help=\"read detectors from FILE\" category=\"input\"/>"
    "<detector-flow-file value=\"None\" type=\"file\" help=\"read detector flows to compare to from FILE (mandatory)\" category=\"input\"/>"
    "<output-file value=\"None\" type=\"edgedata_file\" help=\"output edgeData FILE (mandatory)\" category=\"output\"/>"
    "<flow-columns value=\"qPKW,qLKW\" type=\"string\" help=\"which columns contains flows (specified via column header)\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"time\" help=\"custom begin time (minutes or H:M:S)\" category=\"processing\"/>"
    "<end value=\"1440\" type=\"time\" help=\"custom end time (minutes or H:M:S)\" category=\"processing\"/>"
    "<interval value=\"1440\" type=\"time\" help=\"custom aggregation interval (minutes or H:M:S)\" category=\"processing\"/>"
    "<cadyts value=\"False\" type=\"bool\" help=\"generate output in cadyts format\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("flowFromEdgeData", "tools/detector/flowFromEdgeData.py", "detector",
"<configuration>"
    "<detector-file value=\"None\" type=\"additional_file\" help=\"read detectors from FILE (mandatory)\" category=\"input\"/>"
    "<edgedata-file value=\"None\" type=\"edgedata_file\" help=\"read edgeData from FILE (mandatory)\" category=\"input\"/>"
    "<detector-flow-file value=\"None\" type=\"file\" help=\"read detector flows to compare to from FILE (mandatory)\" category=\"input\"/>"
    "<flow-column value=\"qPKW\" type=\"string\" help=\"which column contains flows\" category=\"processing\"/>"
    "<respect-zero value=\"False\" type=\"bool\" help=\"respect detectors without data (or with permanent zero) with zero flow\" category=\"processing\"/>"
    "<interval value=\"1440\" type=\"time\" help=\"aggregation interval in minutes\" category=\"processing\"/>"
    "<long-names value=\"False\" type=\"bool\" help=\"do not use abbreviated names for detector groups\" category=\"processing\"/>"
    "<edge-names value=\"False\" type=\"bool\" help=\"include detector group edge name in output\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"time\" help=\"begin time in minutes\" category=\"processing\"/>"
    "<end value=\"None\" type=\"time\" help=\"end time in minutes\" category=\"processing\"/>"
    "<output-file value=\"None\" type=\"file\" help=\"write output to file instead of printing it to console\" category=\"output\"/>"
    "<flow-output value=\"None\" type=\"file\" help=\"write output in flowfile format to FILE\" category=\"output\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("mapDetectors", "tools/detector/mapDetectors.py", "detector",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"define the net file (mandatory)\" category=\"input\"/>"
    "<detector-file value=\"None\" type=\"file\" help=\"csv input file with detector ids and coordinates\" category=\"input\"/>"
    "<delimiter value=\";\" type=\"string\" help=\"the field separator of the detector input file\" category=\"processing\"/>"
    "<output-file value=\"None\" type=\"file\" help=\"define the output file for generated mapped detectors\" category=\"output\"/>"
    "<id-column value=\"id\" type=\"string\" help=\"Read detector ids from the given column\" category=\"processing\"/>"
    "<longitude-column value=\"lon\" type=\"string\" help=\"Read detector x-coordinate (lon) from the given column\" category=\"processing\"/>"
    "<latitude-column value=\"lat\" type=\"string\" help=\"Read detector y-coordinate (lat) from the given column\" category=\"processing\"/>"
    "<vclass value=\"passenger\" type=\"string\" help=\"only consider edges that permit the given vClass\" category=\"processing\"/>"
    "<det-output-file value=\"detector.out.xml\" type=\"file\" help=\"Define the output file that generated detectors shall write to\" category=\"output\"/>"
    "<interval value=\"3600\" type=\"time\" help=\"Define the aggregation interval of generated detectors\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("filterDistricts", "tools/district/filterDistricts.py", "district",
"<configuration>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<net-file value=\"None\" type=\"net_file\" help=\"the network to read lane and edge permissions\" category=\"input\" required=\"true\"/>"
    "<taz-file value=\"None\" type=\"file\" help=\"the district file to be filtered\" category=\"input\" required=\"true\"/>"
    "<output value=\"taz_filtered.add.xml\" type=\"file\" help=\"write filtered districts to FILE (default: %default)\" category=\"output\"/>"
    "<vclass value=\"None\" type=\"string\" help=\"filter taz edges that allow the given vehicle class\" category=\"processing\" required=\"true\"/>"
"</configuration>"
),

TemplateTool("gridDistricts", "tools/district/gridDistricts.py", "district",
"<configuration>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<net-file value=\"None\" type=\"net_file\" help=\"the network to read lane and edge permissions\" category=\"input\" required=\"true\"/>"
    "<output value=\"None\" type=\"file\" help=\"output taz file\" category=\"output\" required=\"true\"/>"
    "<grid-width value=\"100.0\" type=\"float\" help=\"width of gride cells in m\" category=\"processing\"/>"
    "<vclass value=\"None\" type=\"string\" help=\"Include only edges allowing VCLASS\" category=\"processing\"/>"
    "<hue value=\"random\" type=\"string\" help=\"hue for taz (float from [0,1] or 'random')\" category=\"processing\"/>"
    "<saturation value=\"1\" type=\"string\" help=\"saturation for taz (float from [0,1] or 'random')\" category=\"processing\"/>"
    "<brightness value=\"1\" type=\"string\" help=\"brightness for taz (float from [0,1] or 'random')\" category=\"processing\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("stationDistricts", "tools/district/stationDistricts.py", "district",
"<configuration>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<net-file value=\"None\" type=\"net_file\" help=\"the network to read lane and edge permissions\" category=\"input\" required=\"true\"/>"
    "<stop-file value=\"None\" type=\"additional_file\" help=\"the additional file with stops\" category=\"input\" required=\"true\"/>"
    "<output value=\"None\" type=\"additional_file\" help=\"output taz file\" category=\"output\" required=\"true\"/>"
    "<split-output value=\"None\" type=\"file\" help=\"generate splits for edges assigned to multiple stations\" category=\"output\"/>"
    "<poi-output value=\"None\" type=\"file\" help=\"generate a point of interest for every station\" category=\"output\"/>"
    "<vclasses value=\"rail,rail_urban\" type=\"string\" help=\"Include only edges allowing VCLASS\" category=\"processing\"/>"
    "<parallel-radius value=\"100\" type=\"float\" help=\"search radius for finding parallel edges\" category=\"processing\"/>"
    "<merge value=\"False\" type=\"bool\" help=\"merge stations that have a common edge\" category=\"processing\"/>"
    "<hue value=\"random\" type=\"string\" help=\"hue for taz (float from [0,1] or 'random')\" category=\"processing\"/>"
    "<saturation value=\"1\" type=\"string\" help=\"saturation for taz (float from [0,1] or 'random')\" category=\"processing\"/>"
    "<brightness value=\"1\" type=\"string\" help=\"brightness for taz (float from [0,1] or 'random')\" category=\"processing\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("drtOrtools", "tools/drt/drtOrtools.py", "drt",
""),

TemplateTool("citybrain_flow", "tools/import/citybrain/citybrain_flow.py", "import/citybrain",
""),

TemplateTool("citybrain_infostep", "tools/import/citybrain/citybrain_infostep.py", "import/citybrain",
""),

TemplateTool("citybrain_road", "tools/import/citybrain/citybrain_road.py", "import/citybrain",
""),

TemplateTool("gtfs2fcd", "tools/import/gtfs/gtfs2fcd.py", "import/gtfs",
""),

TemplateTool("gtfs2pt", "tools/import/gtfs/gtfs2pt.py", "import/gtfs",
""),

TemplateTool("vissim_parseRoutes", "tools/import/vissim/vissim_parseRoutes.py", "import/vissim",
""),

TemplateTool("visum_convertEdgeTypes", "tools/import/visum/visum_convertEdgeTypes.py", "import/visum",
""),

TemplateTool("abstractRail", "tools/net/abstractRail.py", "net",
""),

TemplateTool("createRoundaboutConnections", "tools/net/createRoundaboutConnections.py", "net",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"Input file name\" category=\"input\" required=\"true\"/>"
"</configuration>"
),

TemplateTool("net2geojson", "tools/net/net2geojson.py", "net",
""),

TemplateTool("net2jpsgeometry", "tools/net/net2jpsgeometry.py", "net",
""),

TemplateTool("net2kml", "tools/net/net2kml.py", "net",
""),

TemplateTool("net2poly", "tools/net/net2poly.py", "net",
""),

TemplateTool("netcheck", "tools/net/netcheck.py", "net",
"<configuration>"
    "<net value=\"None\" type=\"net_file\" help=\"The network file to be checked\" category=\"input\" required=\"true\" positional=\"true\"/>"
    "<source value=\"False\" type=\"edge\" help=\"List edges reachable from the source\" category=\"input\" listSeparator=\",\"/>"
    "<destination value=\"False\" type=\"edge\" help=\"List edges which can reach the destination\" category=\"input\"/>"
    "<selection-output value=\"None\" type=\"file\" help=\"Write output to file(s) as a loadable selection\" category=\"output\"/>"
    "<ignore-connections value=\"False\" type=\"bool\" help=\"Assume full connectivity at each node when computing all connected components\" category=\"processing\"/>"
    "<vclass value=\"None\" type=\"string\" help=\"Include only edges allowing vClass\" category=\"processing\"/>"
    "<component-output value=\"None\" type=\"file\" help=\"Write components of disconnected network to file - not compatible with --source or --destination options\" category=\"processing\"/>"
    "<results-output value=\"None\" type=\"file\" help=\"Write results summary of disconnected network to file - not compatible with --source or --destination options\" category=\"processing\"/>"
    "<print-types value=\"False\" type=\"bool\" help=\"Print edge types used in the component\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("netdiff", "tools/net/netdiff.py", "net",
"<configuration>"
    "<source value=\"None\" type=\"net_file\" help=\"original network\" category=\"input\" required=\"true\" positional=\"true\"/>"
    "<dest value=\"None\" type=\"net_file\" help=\"modified network\" category=\"input\" required=\"true\" positional=\"true\"/>"
    "<outprefix value=\"None\" type=\"file\" help=\"prefix for the diff files\" category=\"output\" required=\"true\" positional=\"true\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"Give more output\" category=\"processing\"/>"
    "<use-prefix value=\"False\" type=\"bool\" help=\"interpret source and dest as plain-xml prefix instead of network names\" category=\"processing\"/>"
    "<direct value=\"False\" type=\"bool\" help=\"compare source and dest files directly\" category=\"processing\"/>"
    "<patch-on-import value=\"False\" type=\"bool\" help=\"generate patch that can be applied during initial network import (exports additional connection elements)\" category=\"processing\"/>"
    "<copy value=\"None\" type=\"string\" help=\"comma-separated list of element names to copy (if they are unchanged)\" category=\"processing\"/>"
    "<path value=\"None\" type=\"string\" help=\"Path to binaries\" category=\"processing\"/>"
    "<remove-plain value=\"False\" type=\"bool\" help=\"avoid saving plain xml files of source and destination networks\" category=\"processing\"/>"
    "<write-selections value=\"False\" type=\"bool\" help=\"Write selection files for created, deleted and changed elements\" category=\"output\"/>"
    "<write-shapes value=\"False\" type=\"bool\" help=\"Write shape files for created, deleted and changed elements\" category=\"output\"/>"
    "<plain-geo value=\"False\" type=\"bool\" help=\"Write geo coordinates instead of network coordinates\" category=\"output\"/>"
"</configuration>"
),

TemplateTool("netmatch", "tools/net/netmatch.py", "net",
"<configuration>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<net1 value=\"None\" type=\"net_file\" help=\"first SUMO network to use (mandatory)\" category=\"input\" required=\"true\"/>"
    "<net2 value=\"None\" type=\"net_file\" help=\"second SUMO network to use (mandatory)\" category=\"input\" required=\"true\"/>"
    "<delta value=\"1\" type=\"float\" help=\"maximum distance between end points\" category=\"processing\"/>"
    "<output value=\"None\" type=\"file\" help=\"(base) name for the output\" category=\"output\" required=\"true\"/>"
    "<edges1 value=\"None\" type=\"file\" help=\"matched edges in net 1\" category=\"output\"/>"
    "<edges2 value=\"None\" type=\"file\" help=\"matched edges in net 2\" category=\"output\"/>"
"</configuration>"
),

TemplateTool("network_statistics", "tools/net/network_statistics.py", "net",
"<configuration>"
    "<net-file value=\"None\" type=\"string\" help=\"The .net.xml file to read\" category=\"processing\"/>"
    "<write-html value=\"True\" type=\"bool\" help=\"Write statistics to HTML output file\" category=\"processing\"/>"
    "<show-png value=\"True\" type=\"bool\" help=\"Render PNG barplot with edge statistics\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("reduceLanes", "tools/net/reduceLanes.py", "net",
""),

TemplateTool("split_at_stops", "tools/net/split_at_stops.py", "net",
""),

TemplateTool("addStopDelay", "tools/route/addStopDelay.py", "route",
""),

TemplateTool("addStops2Routes", "tools/route/addStops2Routes.py", "route",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"define the net filename (mandatory)\" category=\"input\"/>"
    "<route-files value=\"None\" type=\"route_file\" help=\"define the route file separated by comma (mandatory)\" category=\"input\"/>"
    "<output-file value=\"None\" type=\"route_file\" help=\"define the output filename\" category=\"output\"/>"
    "<typesfile value=\"None\" type=\"string\" help=\"Give a typesfile\" category=\"input\"/>"
    "<duration value=\"None\" type=\"string\" help=\"Define duration of vehicle stop (setting 'X-Y' picks randomly from [X,Y[)\" category=\"processing\"/>"
    "<until value=\"None\" type=\"string\" help=\"Define end time of vehicle stop\" category=\"processing\"/>"
    "<parking value=\"False\" type=\"bool\" help=\"Let the vehicle stop beside the road\" category=\"processing\"/>"
    "<relpos value=\"None\" type=\"string\" help=\"relative stopping position along the edge [0,1] or 'random'\" category=\"processing\"/>"
    "<lane value=\"0\" type=\"string\" help=\"set index of stop lane or 'random' (unusable lanes are not counted)\" category=\"processing\"/>"
    "<reledge value=\"1\" type=\"string\" help=\"relative stopping position along the route [0,1] or 'random' (1 indicates the last edge)\" category=\"processing\"/>"
    "<probability value=\"1\" type=\"float\" help=\"app stop with the given probability ]0, 1]\" category=\"processing\"/>"
    "<parking-areas value=\"False\" type=\"additional_file\" help=\"load parkingarea definitions and stop at parkingarea on the arrival edge if possible\" category=\"processing\"/>"
    "<start-at-stop value=\"False\" type=\"bool\" help=\"shorten route so it starts at stop\" category=\"processing\"/>"
    "<rel-occupancy value=\"None\" type=\"float\" help=\"fill all parkingAreas to relative occupancy\" category=\"processing\"/>"
    "<abs-occupancy value=\"1\" type=\"int\" help=\"fill all parkingAreas to absolute occupancy\" category=\"processing\"/>"
    "<abs-free value=\"None\" type=\"int\" help=\"fill all parkingAreas to absolute remaining capacity\" category=\"processing\"/>"
    "<person-duration value=\"None\" type=\"string\" help=\"Define duration of person stop (setting 'X-Y' picks randomly from [X,Y[)\" category=\"processing\"/>"
    "<person-until value=\"None\" type=\"string\" help=\"Define end time of person stop\" category=\"processing\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("addTAZ", "tools/route/addTAZ.py", "route",
""),

TemplateTool("checkStopOrder", "tools/route/checkStopOrder.py", "route",
""),

TemplateTool("implausibleRoutes", "tools/route/implausibleRoutes.py", "route",
""),

TemplateTool("route2OD", "tools/route/route2OD.py", "route",
""),

TemplateTool("routecheck", "tools/route/routecheck.py", "route",
""),

TemplateTool("routecompare", "tools/route/routecompare.py", "route",
"<configuration>"
    "<districts-file value=\"\" type=\"file\" help=\"read districts from FILE\" category=\"input\"/>"
    "<simple-match value=\"False\" type=\"bool\" help=\"use simple matching algorithm\" category=\"processing\"/>"
    "<print-matching value=\"False\" type=\"bool\" help=\"print the resulting matching\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"print more info\" category=\"processing\"/>"
    "<routes1 value=\"None\" type=\"route_file\" help=\"first route file of comparison\" category=\"input\" required=\"true\" positional=\"true\"/>"
    "<routes2 value=\"None\" type=\"route_file\" help=\"second route file of comparison\" category=\"input\" required=\"true\" positional=\"true\"/>"
"</configuration>"
),

TemplateTool("routeStats", "tools/route/routeStats.py", "route",
""),

TemplateTool("scaleTimeLine", "tools/route/scaleTimeLine.py", "route",
"<configuration>"
    "<route-files value=\"None\" type=\"file\" help=\"define the route file separated by comma (mandatory)\" category=\"input\" required=\"true\" listSeparator=\",\"/>"
    "<output-file value=\"None\" type=\"file\" help=\"define the output filename\" category=\"output\"/>"
    "<timeline-list value=\"3600,200,200,200,200,200,200,200,200,200,200,200,200\" type=\"string\" help=\"Define the interval duration and then the scaled percentage for each interval; e.g. 200% of the current demand\" category=\"processing\"/>"
    "<timeline-pair value=\"7200,200;7200,200;7200,200;7200,200;7200,200;7200,200\" type=\"string\" help=\"Define the timeline pairs (duration, scacled percentage)\" category=\"processing\"/>"
    "<random value=\"False\" type=\"bool\" help=\"use a random seed to initialize the random number generator\" category=\"random\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"random\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("sort_routes", "tools/route/sort_routes.py", "route",
"<configuration>"
    "<outfile value=\"None\" type=\"file\" help=\"name of output file\" category=\"output\"/>"
    "<big value=\"False\" type=\"bool\" help=\"Use alternative sorting strategy for large files (slower but more memory efficient)\" category=\"processing\"/>"
    "<routefile value=\"None\" type=\"file\" help=\"route file whose routes should be sorted\" category=\"input\" required=\"true\" positional=\"true\"/>"
"</configuration>"
),

TemplateTool("splitRandom", "tools/route/splitRandom.py", "route",
""),

TemplateTool("splitRouteFiles", "tools/route/splitRouteFiles.py", "route",
""),

TemplateTool("tracegenerator", "tools/route/tracegenerator.py", "route",
"<configuration>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<net value=\"None\" type=\"net_file\" help=\"SUMO network to use (mandatory)\" category=\"input\" required=\"true\"/>"
    "<net2 value=\"None\" type=\"net_file\" help=\"immediately match routes to a second network\" category=\"input\"/>"
    "<routes value=\"None\" type=\"route_file\" help=\"route file to use (mandatory)\" category=\"input\" required=\"true\"/>"
    "<step value=\"10\" type=\"float\" help=\"distance between successive trace points\" category=\"processing\"/>"
    "<delta value=\"1\" type=\"float\" help=\"maximum distance between edge and trace points when matching to the second net\" category=\"processing\"/>"
    "<x-offset value=\"0.0\" type=\"float\" help=\"offset to add to traces\" category=\"processing\"/>"
    "<y-offset value=\"0.0\" type=\"float\" help=\"offset to add to traces\" category=\"processing\"/>"
    "<output value=\"None\" type=\"file\" help=\"trace or route output (mandatory)\" category=\"output\" required=\"true\"/>"
"</configuration>"
),

TemplateTool("tracemapper", "tools/route/tracemapper.py", "route",
""),

TemplateTool("aggregateBatteryOutput", "tools/output/aggregateBatteryOutput.py", "output",
""),

TemplateTool("analyze_pedestrian_jam", "tools/output/analyze_pedestrian_jam.py", "output",
""),

TemplateTool("analyze_teleports", "tools/output/analyze_teleports.py", "output",
"<configuration>"
    "<logfile value=\"None\" type=\"file\" help=\"log file\" category=\"input\" required=\"true\" positional=\"true\"/>"
"</configuration>"
),

TemplateTool("attributeStats", "tools/output/attributeStats.py", "output",
""),

TemplateTool("attributeDiff", "tools/output/attributeDiff.py", "output",
""),

TemplateTool("attributeCompare", "tools/output/attributeCompare.py", "output",
""),

TemplateTool("computeCoordination", "tools/output/computeCoordination.py", "output",
""),

TemplateTool("computePassengerCounts", "tools/output/computePassengerCounts.py", "output",
""),

TemplateTool("computeStoppingPlaceUsage", "tools/output/computeStoppingPlaceUsage.py", "output",
""),

TemplateTool("countLaneChanges", "tools/output/countLaneChanges.py", "output",
"<configuration>"
    "<dumpfile value=\"None\" type=\"string\" help=\"dump file path\" category=\"processing\" required=\"true\" positional=\"true\"/>"
"</configuration>"
),

TemplateTool("edgeDataDiff", "tools/output/edgeDataDiff.py", "output",
"<configuration>"
    "<orig value=\"None\" type=\"string\" help=\"original data file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<new value=\"None\" type=\"string\" help=\"modified data file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<out value=\"None\" type=\"string\" help=\"diff output file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<relative value=\"False\" type=\"bool\" help=\"write relative instead of absolute differences\" category=\"processing\"/>"
    "<geh value=\"False\" type=\"bool\" help=\"write geh value instead of absolute differences\" category=\"processing\"/>"
    "<undefined value=\"-1001\" type=\"float\" help=\"value to use if the difference is undefined\" category=\"processing\"/>"
    "<no-statistics value=\"False\" type=\"bool\" help=\"otherwise: handle attributes starting with 'std_' as standarddeviation and calculate propagated error\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("fcdDiff", "tools/output/fcdDiff.py", "output",
""),

TemplateTool("generateTLSE2Detectors", "tools/output/generateTLSE2Detectors.py", "output",
""),

TemplateTool("parkingSearchTraffic", "tools/output/parkingSearchTraffic.py", "output",
""),

TemplateTool("scheduleStats", "tools/output/scheduleStats.py", "output",
""),

TemplateTool("stopOrder", "tools/output/stopOrder.py", "output",
""),

TemplateTool("tripinfoByType", "tools/output/tripinfoByType.py", "output",
""),

TemplateTool("vehLanes", "tools/output/vehLanes.py", "output",
"<configuration>"
    "<netstate value=\"None\" type=\"string\" help=\"Netstate Dump File\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<out value=\"None\" type=\"string\" help=\"Output file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
"</configuration>"
),

TemplateTool("vehrouteCountValidation", "tools/output/vehrouteCountValidation.py", "output",
""),

TemplateTool("vehrouteDiff", "tools/output/vehrouteDiff.py", "output",
"<configuration>"
    "<orig value=\"None\" type=\"string\" help=\"original routes file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<new value=\"None\" type=\"string\" help=\"new routes file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<out value=\"None\" type=\"string\" help=\"output file\" category=\"processing\" required=\"true\" positional=\"true\"/>"
    "<earliest value=\"None\" type=\"string\" help=\"write time of the first diff per vehicle to FILE\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("walkFactor", "tools/output/walkFactor.py", "output",
"<configuration>"
    "<tripinfos value=\"None\" type=\"file\" help=\"Trip Info file\" category=\"input\" required=\"true\" positional=\"true\"/>"
    "<length value=\"0.1\" type=\"float\" help=\"length threshold (default: 0.1)\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("circlePolygon", "tools/shapes/circlePolygon.py", "shapes",
"<configuration>"
    "<files value=\"None\" type=\"file\" help=\"List of XML files to plot\" category=\"input\" required=\"true\" positional=\"true\" listSeparator=\" \"/>"
    "<radius value=\"100\" type=\"float\" help=\"default radius\" category=\"processing\"/>"
    "<prefix value=\"poly\" type=\"string\" help=\"id prefix\" category=\"processing\"/>"
    "<type value=\"unknown\" type=\"string\" help=\"type string\" category=\"processing\"/>"
    "<color value=\"1,0,0\" type=\"string\" help=\"color string\" category=\"processing\"/>"
    "<fill value=\"False\" type=\"bool\" help=\"fill the polygons\" category=\"processing\"/>"
    "<layer value=\"-1\" type=\"float\" help=\"layer\" category=\"processing\"/>"
    "<corners value=\"100\" type=\"int\" help=\"default number of corners\" category=\"processing\"/>"
    "<output-file value=\"None\" type=\"file\" help=\"output file (default: standard output)\" category=\"output\"/>"
"</configuration>"
),

TemplateTool("createTlsCsv", "tools/tls/createTlsCsv.py", "tls",
""),

TemplateTool("tls_csvSignalGroups", "tools/tls/tls_csvSignalGroups.py", "tls",
""),

TemplateTool("generateTurnRatios", "tools/turn-defs/generateTurnRatios.py", "turn-defs",
""),

TemplateTool("turnCount2EdgeCount", "tools/turn-defs/turnCount2EdgeCount.py", "turn-defs",
""),

TemplateTool("turnFile2EdgeRelations", "tools/turn-defs/turnFile2EdgeRelations.py", "turn-defs",
""),

TemplateTool("plot_csv_bars", "tools/visualization/plot_csv_bars.py", "visualization",
""),

TemplateTool("plot_csv_pie", "tools/visualization/plot_csv_pie.py", "visualization",
""),

TemplateTool("plot_csv_timeline", "tools/visualization/plot_csv_timeline.py", "visualization",
""),

TemplateTool("plot_net_dump", "tools/visualization/plot_net_dump.py", "visualization",
""),

TemplateTool("plot_net_selection", "tools/visualization/plot_net_selection.py", "visualization",
""),

TemplateTool("plot_net_speeds", "tools/visualization/plot_net_speeds.py", "visualization",
""),

TemplateTool("plot_net_trafficLights", "tools/visualization/plot_net_trafficLights.py", "visualization",
""),

TemplateTool("plot_summary", "tools/visualization/plot_summary.py", "visualization",
""),

TemplateTool("plotXMLAttributes", "tools/visualization/plotXMLAttributes.py", "visualization",
""),

TemplateTool("csv2xml", "tools/xml/csv2xml.py", "xml",
""),

TemplateTool("xml2csv", "tools/xml/xml2csv.py", "xml",
""),

TemplateTool("changeAttribute", "tools/xml/changeAttribute.py", "xml",
""),

TemplateTool("filterElements", "tools/xml/filterElements.py", "xml",
""),

TemplateTool("countEdgeUsage", "tools/countEdgeUsage.py", "",
"<configuration>"
    "<output-file value=\"None\" type=\"file\" help=\"name of output file\" category=\"output\"/>"
    "<subpart value=\"None\" type=\"string\" help=\"Restrict counts to routes that contain the given consecutive edge sequence\" category=\"processing\"/>"
    "<subpart-file value=\"None\" type=\"additional_file\" help=\"Restrict counts to routes that contain one of the consecutive edge sequences in the given input file (one sequence per line)\" category=\"processing\"/>"
    "<intermediate value=\"False\" type=\"bool\" help=\"count all edges of a route\" category=\"processing\"/>"
    "<taz value=\"False\" type=\"bool\" help=\"use fromTaz and toTaz instead of from and to\" category=\"processing\"/>"
    "<elements value=\"trip,route,walk\" type=\"string\" help=\"include edges for the given elements in output\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"string\" help=\"collect departures after begin time\" category=\"time\"/>"
    "<end value=\"None\" type=\"string\" help=\"collect departures up to end time (default unlimited)\" category=\"time\"/>"
    "<period value=\"None\" type=\"string\" help=\"create data intervals of the given period duration\" category=\"time\"/>"
    "<min-count value=\"0\" type=\"int\" help=\"include only values above the minimum\" category=\"processing\"/>"
    "<net-file value=\"None\" type=\"net_file\" help=\"parse net for geo locations of the edges\" category=\"processing\"/>"
    "<poi-file value=\"None\" type=\"additional_file\" help=\"write geo POIs\" category=\"processing\"/>"
    "<routefiles value=\"None\" type=\"route_file\" help=\"Set one or more input route files\" category=\"input\" required=\"true\" positional=\"true\" listSeparator=\" \"/>"
"</configuration>"
),

TemplateTool("createVehTypeDistribution", "tools/createVehTypeDistribution.py", "",
"<configuration>"
    "<configFile value=\"None\" type=\"string\" help=\"file path of the config file which defines the car-following parameter distributions\" category=\"input\" required=\"true\" positional=\"true\"/>"
    "<output-file value=\"vTypeDistributions.add.xml\" type=\"string\" help=\"file path of the output file(if the file already exists, the script tries to insert the distribution node into it)\" category=\"output\"/>"
    "<name value=\"vehDist\" type=\"string\" help=\"alphanumerical ID used for the created vehicle type distribution\" category=\"processing\"/>"
    "<size value=\"100\" type=\"int\" help=\"number of vTypes in the distribution\" category=\"processing\"/>"
    "<decimal-places value=\"3\" type=\"int\" help=\"number of decimal places for numeric attribute values\" category=\"processing\"/>"
    "<resampling value=\"100\" type=\"int\" help=\"number of attempts to resample a value until it lies in the specified bounds\" category=\"processing\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("edgesInDistricts", "tools/edgesInDistricts.py", "",
"<configuration>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<complete value=\"False\" type=\"bool\" help=\"assign edges only if they are not in more than one district\" category=\"processing\"/>"
    "<net-file value=\"None\" type=\"string\" help=\"read SUMO network from FILE (mandatory)\" category=\"input\"/>"
    "<taz-files value=\"None\" type=\"string\" help=\"read districts from FILEs\" category=\"input\"/>"
    "<output value=\"districts.taz.xml\" type=\"string\" help=\"write results to FILE\" category=\"output\"/>"
    "<max-speed value=\"1000.0\" type=\"float\" help=\"use lanes where speed is not greater than this (m/s)\" category=\"processing\"/>"
    "<min-speed value=\"0.0\" type=\"float\" help=\"use lanes where speed is greater than this (m/s)\" category=\"processing\"/>"
    "<weighted value=\"False\" type=\"bool\" help=\"Weights sources/sinks by lane number and length\" category=\"processing\"/>"
    "<assign-from value=\"False\" type=\"bool\" help=\"Assign the edge always to the district where the 'from' node is located\" category=\"processing\"/>"
    "<internal value=\"False\" type=\"bool\" help=\"Include internal edges in output\" category=\"processing\"/>"
    "<vclass value=\"None\" type=\"string\" help=\"Include only edges allowing VCLASS\" category=\"processing\"/>"
    "<shapeinfo value=\"False\" type=\"bool\" help=\"write also the shape info in the file\" category=\"processing\"/>"
    "<merge-separator value=\"None\" type=\"string\" help=\"merge edge lists of taz starting with the same string up to the given separator\" category=\"processing\"/>"
    "<merge-param value=\"None\" type=\"string\" help=\"merge edge lists of taz/polygons having the same value for the given parameter\" category=\"processing\"/>"
    "<min-length value=\"0.0\" type=\"float\" help=\"use edges where length is greater than this (m)\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("extractTest", "tools/extractTest.py", "",
"<configuration>"
    "<output value=\".\" type=\"string\" help=\"send output to directory\" category=\"output\"/>"
    "<file value=\"None\" type=\"string\" help=\"read list of source and target dirs from\" category=\"input\"/>"
    "<python-script value=\"None\" type=\"string\" help=\"name of a python script to generate for a batch run\" category=\"input\"/>"
    "<intelligent-names value=\"False\" type=\"bool\" help=\"generate cfg name from directory name\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"more information\" category=\"processing\"/>"
    "<application value=\"None\" type=\"string\" help=\"sets the application to be used\" category=\"processing\"/>"
    "<skip-configuration value=\"False\" type=\"bool\" help=\"skips creation of an application config from the options.app file\" category=\"processing\"/>"
    "<skip-validation value=\"False\" type=\"bool\" help=\"remove all options related to XML validation\" category=\"processing\"/>"
    "<no-subdir value=\"False\" type=\"bool\" help=\"store test files directly in the output directory\" category=\"processing\"/>"
    "<depth value=\"1\" type=\"int\" help=\"maximum depth when descending into testsuites\" category=\"processing\"/>"
    "<test_dir value=\"\" type=\"string\" help=\"read list of source and target dirs from\" category=\"input\" required=\"true\" positional=\"true\" listSeparator=\" \"/>"
"</configuration>"
),

TemplateTool("fcdReplay", "tools/fcdReplay.py", "",
""),

TemplateTool("findAllRoutes", "tools/findAllRoutes.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"string\" help=\"the SUMO net filename\" category=\"input\"/>"
    "<output-file value=\"None\" type=\"string\" help=\"the route output filename\" category=\"output\"/>"
    "<source-edges value=\"None\" type=\"string\" help=\"comma separated list of source edge ids\" category=\"input\"/>"
    "<target-edges value=\"None\" type=\"string\" help=\"comma separated list of target edge ids\" category=\"input\"/>"
"</configuration>"
),

TemplateTool("generateBidiDistricts", "tools/generateBidiDistricts.py", "",
"<configuration>"
    "<outfile value=\"None\" type=\"string\" help=\"name of output file\" category=\"output\"/>"
    "<radius value=\"10.0\" type=\"float\" help=\"maximum air distance around the edge\" category=\"processing\"/>"
    "<travel-distance value=\"None\" type=\"float\" help=\"maximum travel distance in the graph\" category=\"processing\"/>"
    "<symmetrical value=\"False\" type=\"bool\" help=\"extend the bidi-relationship to be symmetrical\" category=\"processing\"/>"
    "<net value=\"None\" type=\"string\" help=\"SUMO network file\" category=\"input\" required=\"true\" positional=\"true\"/>"
"</configuration>"
),

TemplateTool("generateContinuousRerouters", "tools/generateContinuousRerouters.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"define the net file (mandatory)\" category=\"input\" required=\"true\"/>"
    "<output-file value=\"rerouters.xml\" type=\"file\" help=\"define the output rerouter filename\" category=\"output\"/>"
    "<turn-defaults value=\"30,50,20\" type=\"string\" help=\"Use STR[] as default turn probabilities [right,straight,left[,turn]]\" category=\"processing\"/>"
    "<long-routes value=\"False\" type=\"bool\" help=\"place rerouters further upstream (after the previous decision point) to increase overlap of routes when rerouting and thereby improve anticipation of intersections\" category=\"processing\"/>"
    "<vclass value=\"None\" type=\"string\" help=\"only create routes which permit the given vehicle class\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"string\" help=\"begin time\" category=\"processing\"/>"
    "<end value=\"3600\" type=\"string\" help=\"end time (default 3600)\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("generateParkingAreaRerouters", "tools/generateParkingAreaRerouters.py", "",
""),

TemplateTool("generateParkingAreas", "tools/generateParkingAreas.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"string\" help=\"define the net file (mandatory)\" category=\"input\"/>"
    "<output-file value=\"parkingareas.add.xml\" type=\"string\" help=\"define the output filename\" category=\"output\"/>"
    "<probability value=\"1\" type=\"float\" help=\"Probability for an edge to receive a parkingArea\" category=\"processing\"/>"
    "<length value=\"6\" type=\"float\" help=\"Length required per parking space\" category=\"processing\"/>"
    "<space-length value=\"5\" type=\"float\" help=\"visual length of each parking space\" category=\"processing\"/>"
    "<width value=\"None\" type=\"float\" help=\"visual width of each parking space\" category=\"processing\"/>"
    "<random-capacity value=\"False\" type=\"bool\" help=\"Randomize roadsideCapacity\" category=\"processing\"/>"
    "<min value=\"0\" type=\"int\" help=\"Minimum capacity for parkingAreas\" category=\"processing\"/>"
    "<max value=\"1000000000\" type=\"int\" help=\"Maximum capacity for parkingAreas\" category=\"processing\"/>"
    "<edge-type.keep value=\"None\" type=\"string\" help=\"Optional list of edge types to keep exclusively\" category=\"processing\"/>"
    "<edge-type.remove value=\"None\" type=\"string\" help=\"Optional list of edge types to exclude\" category=\"processing\"/>"
    "<keep-all value=\"False\" type=\"bool\" help=\"whether to keep parkingAreas with 0 capacity\" category=\"processing\"/>"
    "<lefthand value=\"False\" type=\"bool\" help=\"whether to place parkingareas on the left of the road\" category=\"processing\"/>"
    "<angle value=\"None\" type=\"float\" help=\"parking area angle\" category=\"processing\"/>"
    "<prefix value=\"pa\" type=\"string\" help=\"prefix for the parkingArea ids\" category=\"processing\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
    "<random value=\"False\" type=\"bool\" help=\"use a random seed to initialize the random number generator\" category=\"processing\"/>"
    "<vclass value=\"passenger\" type=\"string\" help=\"only use edges which permit the given vehicle class\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("generateRailSignalConstraints", "tools/generateRailSignalConstraints.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"string\" help=\"Input network file\" category=\"input\"/>"
    "<additional-file value=\"None\" type=\"string\" help=\"Input additional file (busStops)\" category=\"input\"/>"
    "<trip-file value=\"None\" type=\"string\" help=\"Input trip file (will be processed into a route file)\" category=\"input\"/>"
    "<route-file value=\"None\" type=\"string\" help=\"Input route file (must contain routed vehicles rather than trips)\" category=\"input\"/>"
    "<output-file value=\"constraints.add.xml\" type=\"string\" help=\"Output additional file\" category=\"output\"/>"
    "<begin value=\"0\" type=\"string\" help=\"ignore vehicles departing before the given begin time (seconds or H:M:S)\" category=\"time\"/>"
    "<until-from-duration value=\"False\" type=\"bool\" help=\"Use stop arrival+duration instead of 'until' to compute insertion constraints\" category=\"time\"/>"
    "<delay value=\"0\" type=\"string\" help=\"Assume given maximum delay when computing the number of intermediate vehicles that pass a given signal (for setting limit)\" category=\"time\"/>"
    "<limit value=\"0\" type=\"int\" help=\"Increases the limit value for tracking passed vehicles by the given amount\" category=\"processing\"/>"
    "<abort-unordered value=\"False\" type=\"bool\" help=\"Abort generation of constraints for a stop once the ordering of vehicles by 'arrival' differs from the ordering by 'until'\" category=\"processing\"/>"
    "<premature-threshold value=\"600\" type=\"string\" help=\"Ignore schedule if a train leaves a station ahead of schedule by more than the threshold value\" category=\"processing\"/>"
    "<write-inactive value=\"False\" type=\"bool\" help=\"Export aborted constraints as inactive\" category=\"processing\"/>"
    "<ignore-parking value=\"False\" type=\"bool\" help=\"Ignore unordered timing if the vehicle which arrives first is parking\" category=\"processing\"/>"
    "<skip-parking value=\"False\" type=\"bool\" help=\"Do not generate constraints for a vehicle that parks at the next stop\" category=\"processing\"/>"
    "<redundant value=\"-1\" type=\"string\" help=\"Add redundant constraint within given time range (reduces impact of modifying constraints at runtime)\" category=\"processing\"/>"
    "<bidi-max-range value=\"1\" type=\"float\" help=\"Find bidiStops on sequential edges within the given range in m\" category=\"processing\"/>"
    "<bidi-conflicts value=\"False\" type=\"bool\" help=\"Write bidiPredecessor constraints\" category=\"processing\"/>"
    "<comment.line value=\"False\" type=\"bool\" help=\"add lines of involved trains in comment\" category=\"processing\"/>"
    "<comment.id value=\"False\" type=\"bool\" help=\"add ids of involved trains in comment (when different from tripId)\" category=\"processing\"/>"
    "<comment.switch value=\"False\" type=\"bool\" help=\"add id of the merging switch that prompted the constraint\" category=\"processing\"/>"
    "<comment.stop value=\"False\" type=\"bool\" help=\"add busStop id that was used to determine the train ordering for the constraint\" category=\"processing\"/>"
    "<comment.time value=\"False\" type=\"bool\" help=\"add timing information for the constraint\" category=\"processing\"/>"
    "<comment.all value=\"False\" type=\"bool\" help=\"add all comments\" category=\"processing\"/>"
    "<params value=\"False\" type=\"bool\" help=\"stores comments as params\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<debug-switch value=\"None\" type=\"string\" help=\"print debug information for the given merge-switch edge\" category=\"processing\"/>"
    "<debug-signal value=\"None\" type=\"string\" help=\"print debug information for the given signal id\" category=\"processing\"/>"
    "<debug-stop value=\"None\" type=\"string\" help=\"print debug information for the given busStop id\" category=\"processing\"/>"
    "<debug-vehicle value=\"None\" type=\"string\" help=\"print debug information for the given vehicle id\" category=\"processing\"/>"
    "<debug-foe-vehicle value=\"None\" type=\"string\" help=\"print debug information for the given (foe) vehicle id\" category=\"processing\"/>"
    "<debug-edge value=\"None\" type=\"string\" help=\"print debug information for the given edge id\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("generateRerouters", "tools/generateRerouters.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"define the net file (mandatory)\" category=\"input\" required=\"true\"/>"
    "<output-file value=\"rerouters.xml\" type=\"additional_file\" help=\"define the output rerouter filename\" category=\"output\"/>"
    "<closed-edges value=\"None\" type=\"edge\" help=\"provide a comma-separated list of edges to close\" category=\"input\" listSeparator=\",\"/>"
    "<id-prefix value=\"rr\" type=\"string\" help=\"id prefix for generated rerouters\" category=\"processing\"/>"
    "<vclass value=\"passenger\" type=\"string\" help=\"only consider necessary detours for the given vehicle class (default passenger)\" category=\"processing\"/>"
    "<allow value=\"authority\" type=\"string\" help=\"vClasses that shall be permitted on the closed edge\" category=\"processing\"/>"
    "<disallow value=\"None\" type=\"string\" help=\"vClasses that shall be prohibited on the closed edge\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"float\" help=\"begin time for the closing\" category=\"time\"/>"
    "<end value=\"86400\" type=\"float\" help=\"end time for the closing (default 86400)\" category=\"time\"/>"
"</configuration>"
),

TemplateTool("osmGet", "tools/osmGet.py", "",
"<configuration>"
    "<prefix value=\"osm\" type=\"string\" help=\"for output file\" category=\"processing\"/>"
    "<bbox value=\"None\" type=\"string\" help=\"bounding box to retrieve in geo coordinates west,south,east,north\" category=\"input\"/>"
    "<tiles value=\"1\" type=\"int\" help=\"number of tiles the output gets split into\" category=\"processing\"/>"
    "<output-dir value=\"None\" type=\"string\" help=\"optional output directory (must already exist)\" category=\"output\"/>"
    "<area value=\"None\" type=\"int\" help=\"area id to retrieve\" category=\"processing\"/>"
    "<polygon value=\"None\" type=\"string\" help=\"calculate bounding box from polygon data in file\" category=\"processing\"/>"
    "<url value=\"www.overpass-api.de/api/interpreter\" type=\"string\" help=\"Download from the given OpenStreetMap server\" category=\"processing\"/>"
    "<wikidata value=\"False\" type=\"bool\" help=\"get the corresponding wikidata\" category=\"processing\"/>"
    "<road-types value=\"None\" type=\"string\" help=\"only delivers osm data to the specified road-types\" category=\"processing\"/>"
    "<shapes value=\"False\" type=\"bool\" help=\"determines if polygon data (buildings, areas , etc.) is downloaded\" category=\"processing\"/>"
    "<gzip value=\"False\" type=\"bool\" help=\"save gzipped output\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("plot_trajectories", "tools/plot_trajectories.py", "",
""),

TemplateTool("ptlines2flows", "tools/ptlines2flows.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"string\" help=\"network file\" category=\"input\" required=\"true\"/>"
    "<ptlines-file value=\"None\" type=\"string\" help=\"public transit lines file\" category=\"input\" required=\"true\"/>"
    "<ptstops-file value=\"None\" type=\"string\" help=\"public transit stops file\" category=\"input\" required=\"true\"/>"
    "<output-file value=\"flows.rou.xml\" type=\"string\" help=\"output flows file\" category=\"output\"/>"
    "<stopinfos-file value=\"stopinfos.xml\" type=\"string\" help=\"file from '--stop-output'\" category=\"output\"/>"
    "<routes-file value=\"vehroutes.xml\" type=\"string\" help=\"file from '--vehroute-output'\" category=\"output\"/>"
    "<trips-file value=\"trips.trips.xml\" type=\"string\" help=\"output trips file\" category=\"processing\"/>"
    "<period value=\"600\" type=\"float\" help=\"the default service period (in seconds) to use if none is specified in the ptlines file\" category=\"processing\"/>"
    "<period-aerialway value=\"60\" type=\"float\" help=\"the default service period (in seconds) to use for aerialways if none is specified in the ptlines file\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"float\" help=\"start time\" category=\"processing\"/>"
    "<end value=\"3600\" type=\"float\" help=\"end time\" category=\"processing\"/>"
    "<min-stops value=\"2\" type=\"int\" help=\"only import lines with at least this number of stops\" category=\"processing\"/>"
    "<flow-attributes value=\"\" type=\"string\" help=\"additional flow attributes\" category=\"processing\"/>"
    "<use-osm-routes value=\"False\" type=\"bool\" help=\"use osm routes\" category=\"processing\"/>"
    "<extend-to-fringe value=\"False\" type=\"bool\" help=\"let routes of incomplete lines start/end at the network border if the route edges are known\" category=\"processing\"/>"
    "<random-begin value=\"False\" type=\"bool\" help=\"randomize begin times within period\" category=\"processing\"/>"
    "<seed value=\"None\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
    "<ignore-errors value=\"False\" type=\"bool\" help=\"ignore problems with the input data\" category=\"processing\"/>"
    "<no-vtypes value=\"False\" type=\"bool\" help=\"do not write vtypes for generated flows\" category=\"processing\"/>"
    "<types value=\"None\" type=\"string\" help=\"only export the given list of types (using OSM nomenclature)\" category=\"processing\"/>"
    "<bus.parking value=\"False\" type=\"bool\" help=\"let busses clear the road while stopping\" category=\"processing\"/>"
    "<vtype-prefix value=\"\" type=\"string\" help=\"prefix for vtype ids\" category=\"processing\"/>"
    "<stop-duration value=\"20\" type=\"float\" help=\"Configure the minimum stopping duration\" category=\"processing\"/>"
    "<stop-duration-slack value=\"10\" type=\"float\" help=\"Stopping time reserve in the schedule\" category=\"processing\"/>"
    "<speedfactor.bus value=\"0.95\" type=\"float\" help=\"Assumed bus relative travel speed\" category=\"processing\"/>"
    "<speedfactor.tram value=\"1.0\" type=\"float\" help=\"Assumed tram relative travel speed\" category=\"processing\"/>"
    "<human-readable-time value=\"False\" type=\"bool\" help=\"write times as h:m:s\" category=\"processing\"/>"
    "<night value=\"False\" type=\"bool\" help=\"Export night service lines\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("randomTrips", "tools/randomTrips.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"define the net file (mandatory)\" category=\"input\" required=\"true\"/>"
    "<additional-files value=\"None\" type=\"additional_file\" help=\"define additional files to be loaded by the router\" category=\"input\"/>"
    "<weights-prefix value=\"None\" type=\"file\" help=\"loads probabilities for being source, destination and via-edge from the files named 'prefix'.src.xml, 'prefix'.dst.xml and 'prefix'.via.xml\" category=\"input\"/>"
    "<output-trip-file value=\"trips.trips.xml\" type=\"route_file\" help=\"define the output trip filename\" category=\"output\"/>"
    "<route-file value=\"None\" type=\"route_file\" help=\"generates route file with duarouter\" category=\"output\"/>"
    "<vtype-output value=\"None\" type=\"file\" help=\"Store generated vehicle types in a separate file\" category=\"output\"/>"
    "<weights-output-prefix value=\"None\" type=\"file\" help=\"generates weights files for visualisation\" category=\"output\"/>"
    "<pedestrians value=\"False\" type=\"bool\" help=\"create a person file with pedestrian trips instead of vehicle trips\" category=\"persons\"/>"
    "<personrides value=\"None\" type=\"string\" help=\"create a person file with rides using STR as lines attribute\" category=\"persons\"/>"
    "<persontrips value=\"False\" type=\"bool\" help=\"create a person file with person trips instead of vehicle trips\" category=\"persons\"/>"
    "<persontrip.transfer.car-walk value=\"None\" type=\"string\" help=\"Where are mode changes from car to walking allowed (possible values: 'ptStops', 'allJunctions' and combinations)\" category=\"persons\"/>"
    "<persontrip.walkfactor value=\"None\" type=\"float\" help=\"Use FLOAT as a factor on pedestrian maximum speed during intermodal routing\" category=\"persons\"/>"
    "<persontrip.walk-opposite-factor value=\"None\" type=\"float\" help=\"Use FLOAT as a factor on pedestrian maximum speed against vehicle traffic direction\" category=\"persons\"/>"
    "<from-stops value=\"None\" type=\"string\" help=\"Create trips that start at stopping places of the indicated type(s). i.e. 'busStop'\" category=\"persons\"/>"
    "<to-stops value=\"None\" type=\"string\" help=\"Create trips that end at stopping places of the indicated type(s). i.e. 'busStop'\" category=\"persons\"/>"
    "<prefix value=\"\" type=\"string\" help=\"prefix for the trip ids\" category=\"attributes\"/>"
    "<trip-attributes value=\"\" type=\"string\" help=\"additional trip attributes. When generating pedestrians, attributes for 'person' and 'walk' are supported.\" category=\"attributes\"/>"
    "<fringe-start-attributes value=\"\" type=\"string\" help=\"additional trip attributes when starting on a fringe.\" category=\"attributes\"/>"
    "<vehicle-class value=\"None\" type=\"string\" help=\"The vehicle class assigned to the generated trips (adds a standard vType definition to the output file).\" category=\"processing\"/>"
    "<random-departpos value=\"False\" type=\"bool\" help=\"Randomly choose a position on the starting edge of the trip\" category=\"attributes\"/>"
    "<random-arrivalpos value=\"False\" type=\"bool\" help=\"Randomly choose a position on the ending edge of the trip\" category=\"attributes\"/>"
    "<junction-taz value=\"False\" type=\"bool\" help=\"Write trips with fromJunction and toJunction\" category=\"attributes\"/>"
    "<length value=\"False\" type=\"bool\" help=\"weight edge probability by length\" category=\"weights\"/>"
    "<lanes value=\"False\" type=\"bool\" help=\"weight edge probability by number of lanes\" category=\"weights\"/>"
    "<edge-param value=\"None\" type=\"string\" help=\"use the given edge parameter as factor for edge\" category=\"weights\"/>"
    "<speed-exponent value=\"0.0\" type=\"float\" help=\"weight edge probability by speed^'FLOAT' (default 0)\" category=\"weights\"/>"
    "<fringe-speed-exponent value=\"None\" type=\"string\" help=\"weight fringe edge probability by speed^'FLOAT' (default: speed exponent)\" category=\"weights\"/>"
    "<angle value=\"90.0\" type=\"float\" help=\"weight edge probability by angle [0-360] relative to the network center\" category=\"weights\"/>"
    "<angle-factor value=\"1.0\" type=\"float\" help=\"maximum weight factor for angle\" category=\"weights\"/>"
    "<random-factor value=\"1.0\" type=\"float\" help=\"edge weights are dynamically disturbed by a random factor drawn uniformly from [1,FLOAT]\" category=\"weights\"/>"
    "<fringe-factor value=\"1.0\" type=\"string\" help=\"multiply weight of fringe edges by 'FLOAT' (default 1) or set value 'max' to force all traffic to start/end at the fringe.\" category=\"weights\"/>"
    "<fringe-threshold value=\"0.0\" type=\"float\" help=\"only consider edges with speed above 'FLOAT' as fringe edges (default 0)\" category=\"weights\"/>"
    "<allow-fringe value=\"False\" type=\"bool\" help=\"Allow departing on edges that leave the network and arriving on edges that enter the network (via turnarounds or as 1-edge trips\" category=\"weights\"/>"
    "<allow-fringe.min-length value=\"None\" type=\"float\" help=\"Allow departing on edges that leave the network and arriving on edges that enter the network, if they have at least the given length\" category=\"weights\"/>"
    "<fringe-junctions value=\"False\" type=\"bool\" help=\"Determine fringe edges based on junction attribute 'fringe'\" category=\"weights\"/>"
    "<vclass value=\"passenger\" type=\"string\" help=\"only from and to edges which permit the given vehicle class\" category=\"weights\"/>"
    "<via-edge-types value=\"None\" type=\"string\" help=\"Set list of edge types that cannot be used for departure or arrival (unless being on the fringe)\" category=\"weights\"/>"
    "<allow-roundabouts value=\"False\" type=\"bool\" help=\"Permit trips that start or end inside a roundabout\" category=\"weights\"/>"
    "<seed value=\"42\" type=\"int\" help=\"random seed\" category=\"processing\"/>"
    "<random value=\"False\" type=\"bool\" help=\"use a random seed to initialize the random number generator\" category=\"processing\"/>"
    "<min-distance value=\"0.0\" type=\"float\" help=\"require start and end edges for each trip to be at least 'FLOAT' m apart\" category=\"processing\"/>"
    "<min-distance.fringe value=\"None\" type=\"float\" help=\"require start and end edges for each fringe to fringe trip to be at least 'FLOAT' m apart\" category=\"processing\"/>"
    "<max-distance value=\"None\" type=\"float\" help=\"require start and end edges for each trip to be at most 'FLOAT' m apart (default 0 which disables any checks)\" category=\"processing\"/>"
    "<intermediate value=\"0\" type=\"int\" help=\"generates the given number of intermediate way points\" category=\"processing\"/>"
    "<jtrrouter value=\"False\" type=\"bool\" help=\"Create flows without destination as input for jtrrouter\" category=\"processing\"/>"
    "<maxtries value=\"100\" type=\"int\" help=\"number of attemps for finding a trip which meets the distance constraints\" category=\"processing\"/>"
    "<remove-loops value=\"False\" type=\"bool\" help=\"Remove loops at route start and end\" category=\"processing\"/>"
    "<random-routing-factor value=\"1\" type=\"float\" help=\"Edge weights for routing are dynamically disturbed by a random factor drawn uniformly from [1,FLOAT)\" category=\"processing\"/>"
    "<validate value=\"False\" type=\"bool\" help=\"Whether to produce trip output that is already checked for connectivity\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<begin value=\"0\" type=\"time\" help=\"begin time\" category=\"flow\"/>"
    "<end value=\"3600\" type=\"time\" help=\"end time (default 3600)\" category=\"flow\"/>"
    "<period value=\"None\" type=\"string\" help=\"Generate vehicles with equidistant departure times and period=FLOAT (default 1.0). If option --binomial is used, the expected arrival rate is set to 1/period.\" category=\"flow\" listSeparator=\" \"/>"
    "<insertion-rate value=\"None\" type=\"string\" help=\"How much vehicles arrive in the simulation per hour (alternative to the period option).\" category=\"flow\" listSeparator=\" \"/>"
    "<insertion-density value=\"None\" type=\"string\" help=\"How much vehicles arrive in the simulation per hour per kilometer of road (alternative to the period option).\" category=\"flow\" listSeparator=\" \"/>"
    "<flows value=\"0\" type=\"int\" help=\"generates INT flows that together output vehicles with the specified period\" category=\"flow\"/>"
    "<random-depart value=\"False\" type=\"bool\" help=\"Distribute departures randomly between begin and end\" category=\"flow\"/>"
    "<binomial value=\"None\" type=\"int\" help=\"If this is set, the number of departures per second will be drawn from a binomial distribution with n=N and p=PERIOD/N where PERIOD is the argument given to --period\" category=\"flow\"/>"
"</configuration>"
),

TemplateTool("routeSampler", "tools/routeSampler.py", "",
""),

TemplateTool("runSeeds", "tools/runSeeds.py", "",
""),

TemplateTool("stateReplay", "tools/stateReplay.py", "",
""),

TemplateTool("tileGet", "tools/tileGet.py", "",
"<configuration>"
    "<prefix value=\"tile\" type=\"string\" help=\"for output file\" category=\"output\"/>"
    "<bbox value=\"None\" type=\"string\" help=\"bounding box to retrieve in geo coordinates west,south,east,north\" category=\"input\"/>"
    "<tiles value=\"1\" type=\"int\" help=\"maximum number of tiles the output gets split into\" category=\"processing\"/>"
    "<output-dir value=\".\" type=\"string\" help=\"optional output directory (must already exist)\" category=\"output\"/>"
    "<decals-file value=\"settings.xml\" type=\"string\" help=\"name of decals settings file\" category=\"output\"/>"
    "<layer value=\"0\" type=\"int\" help=\"(int) layer at which the image will appear, default 0\" category=\"processing\"/>"
    "<polygon value=\"None\" type=\"string\" help=\"calculate bounding box from polygon data in file\" category=\"input\"/>"
    "<net value=\"None\" type=\"string\" help=\"get bounding box from net file\" category=\"input\"/>"
    "<key value=\"None\" type=\"string\" help=\"API key to use\" category=\"processing\"/>"
    "<maptype value=\"satellite\" type=\"string\" help=\"map type (roadmap, satellite, hybrid, terrain)\" category=\"processing\"/>"
    "<url value=\"arcgis\" type=\"string\" help=\"Download from the given tile server\" category=\"processing\"/>"
    "<min-file-size value=\"3000\" type=\"int\" help=\"maximum number of tiles the output gets split into\" category=\"processing\"/>"
    "<parallel-jobs value=\"8\" type=\"int\" help=\"Number of parallel jobs to run when downloading tiles. 0 means no parallelism.\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("tlsCoordinator", "tools/tlsCoordinator.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"net_file\" help=\"define the net file (mandatory)\" category=\"input\" required=\"true\"/>"
    "<output-file value=\"tlsOffsets.add.xml\" type=\"file\" help=\"define the output filename\" category=\"output\"/>"
    "<route-file value=\"None\" type=\"route_file\" help=\"define the input route file (mandatory)\" category=\"input\" required=\"true\"/>"
    "<additional-file value=\"None\" type=\"additional_file\" help=\"define replacement tls plans to be coordinated\" category=\"input\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
    "<ignore-priority value=\"False\" type=\"bool\" help=\"ignore road priority when sorting TLS pairs\" category=\"processing\"/>"
    "<speed-factor value=\"0.8\" type=\"float\" help=\"avg ratio of vehicle speed in relation to the speed limit\" category=\"processing\"/>"
    "<evaluate value=\"False\" type=\"bool\" help=\"run the scenario and print duration statistics\" category=\"processing\"/>"
"</configuration>"
),

TemplateTool("tlsCycleAdaptation", "tools/tlsCycleAdaptation.py", "",
"<configuration>"
    "<net-file value=\"None\" type=\"string\" help=\"define the net file (mandatory)\" category=\"input\" required=\"true\"/>"
    "<output-file value=\"tlsAdaptation.add.xml\" type=\"string\" help=\"define the output filename\" category=\"output\"/>"
    "<route-files value=\"None\" type=\"string\" help=\"define the route file separated by comma (mandatory)\" category=\"input\" required=\"true\"/>"
    "<begin value=\"None\" type=\"float\" help=\"begin time of the optimization period with unit second (mandatory)\" category=\"time\"/>"
    "<yellow-time value=\"4\" type=\"int\" help=\"yellow time\" category=\"processing\"/>"
    "<all-red value=\"0\" type=\"int\" help=\"all-red time per cycle\" category=\"processing\"/>"
    "<lost-time value=\"4\" type=\"int\" help=\"lost time for start-up and clearance in each phase\" category=\"processing\"/>"
    "<min-green value=\"4\" type=\"int\" help=\" minimal green time when there is no traffic volume\" category=\"processing\"/>"
    "<green-filter-time value=\"0\" type=\"int\" help=\"when computing critical flows, do not count phases with a green time below INT\" category=\"processing\"/>"
    "<min-cycle value=\"20\" type=\"int\" help=\"minimal cycle length\" category=\"processing\"/>"
    "<max-cycle value=\"120\" type=\"int\" help=\"maximal cycle length\" category=\"processing\"/>"
    "<existing-cycle value=\"False\" type=\"bool\" help=\"use the existing cycle length\" category=\"processing\"/>"
    "<write-critical-flows value=\"False\" type=\"bool\" help=\"print critical flows for each tls and phase\" category=\"processing\"/>"
    "<program value=\"a\" type=\"string\" help=\"save new definitions with this program id\" category=\"processing\"/>"
    "<saturation-headway value=\"2\" type=\"float\" help=\"saturation headway in seconds for calculating hourly saturation flows\" category=\"processing\"/>"
    "<restrict-cyclelength value=\"False\" type=\"bool\" help=\"restrict the max. cycle length as the given one\" category=\"processing\"/>"
    "<unified-cycle value=\"False\" type=\"bool\" help=\"use the calculated max cycle length as the cycle length for all intersections\" category=\"processing\"/>"
    "<sorted value=\"False\" type=\"bool\" help=\"assume the route file is sorted (aborts reading earlier)\" category=\"processing\"/>"
    "<skip value=\"\" type=\"string\" help=\"the tls ids, which are skipped and seperated by comma\" category=\"processing\"/>"
    "<verbose value=\"False\" type=\"bool\" help=\"tell me what you are doing\" category=\"processing\"/>"
"</configuration>"
),

};

const std::string sumoTemplate = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
    "<!-- generated on 2024-11-21 19:13:21 by Eclipse SUMO sumo Version 1.18.0"
    "-->"
    "<configuration xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://sumo.dlr.de/xsd/sumoConfiguration.xsd\">"
    "    <configuration>"
    "        <configuration-file value=\"\" synonymes=\"c configuration\" type=\"FILE\" help=\"Loads the named config on startup\"/>"
    "        <save-configuration value=\"\" synonymes=\"C save-config\" type=\"FILE\" help=\"Saves current configuration into FILE\"/>"
    "        <save-configuration.relative value=\"false\" synonymes=\"save-config.relative\" type=\"BOOL\" help=\"Enforce relative paths when saving the configuration\"/>"
    "        <save-template value=\"\" type=\"FILE\" help=\"Saves a configuration template (empty) into FILE\"/>"
    "        <save-schema value=\"\" type=\"FILE\" help=\"Saves the configuration schema into FILE\"/>"
    "        <save-commented value=\"false\" synonymes=\"save-template.commented\" type=\"BOOL\" help=\"Adds comments to saved template, configuration, or schema\"/>"
    "    </configuration>"
    "    <input>"
    "        <net-file value=\"\" synonymes=\"n net\" type=\"FILE\" help=\"Load road network description from FILE\"/>"
    "        <route-files value=\"\" synonymes=\"r routes\" type=\"FILE\" help=\"Load routes descriptions from FILE(s)\"/>"
    "        <additional-files value=\"\" synonymes=\"a additional\" type=\"FILE\" help=\"Load further descriptions from FILE(s)\"/>"
    "        <weight-files value=\"\" synonymes=\"w weights\" type=\"FILE\" help=\"Load edge/lane weights for online rerouting from FILE\"/>"
    "        <weight-attribute value=\"traveltime\" synonymes=\"measure x\" type=\"STR\" help=\"Name of the xml attribute which gives the edge weight\"/>"
    "        <load-state value=\"\" type=\"FILE\" help=\"Loads a network state from FILE\"/>"
    "        <load-state.offset value=\"0\" type=\"TIME\" help=\"Shifts all times loaded from a saved state by the given offset\"/>"
    "        <load-state.remove-vehicles value=\"\" type=\"STR[]\" help=\"Removes vehicles with the given IDs from the loaded state\"/>"
    "        <junction-taz value=\"false\" type=\"BOOL\" help=\"Initialize a TAZ for every junction to use attributes toJunction and fromJunction\"/>"
    "    </input>"
    "    <output>"
    "        <write-license value=\"false\" type=\"BOOL\" help=\"Include license info into every output file\"/>"
    "        <output-prefix value=\"\" type=\"STR\" help=\"Prefix which is applied to all output files. The special string &apos;TIME&apos; is replaced by the current time.\"/>"
    "        <precision value=\"2\" type=\"INT\" help=\"Defines the number of digits after the comma for floating point output\"/>"
    "        <precision.geo value=\"6\" type=\"INT\" help=\"Defines the number of digits after the comma for lon,lat output\"/>"
    "        <human-readable-time value=\"false\" synonymes=\"H\" type=\"BOOL\" help=\"Write time values as hour:minute:second or day:hour:minute:second rather than seconds\"/>"
    "        <netstate-dump value=\"\" synonymes=\"ndump netstate netstate-output\" type=\"FILE\" help=\"Save complete network states into FILE\"/>"
    "        <netstate-dump.empty-edges value=\"false\" synonymes=\"dump-empty-edges netstate-output.empty-edges netstate.empty-edges\" type=\"BOOL\" help=\"Write also empty edges completely when dumping\"/>"
    "        <netstate-dump.precision value=\"2\" synonymes=\"dump-precision netstate-output.precision netstate.precision\" type=\"INT\" help=\"Write positions and speeds with the given precision (default 2)\"/>"
    "        <emission-output value=\"\" type=\"FILE\" help=\"Save the emission values of each vehicle\"/>"
    "        <emission-output.precision value=\"2\" type=\"INT\" help=\"Write emission values with the given precision (default 2)\"/>"
    "        <emission-output.geo value=\"false\" type=\"BOOL\" help=\"Save the positions in emission output using geo-coordinates (lon/lat)\"/>"
    "        <emission-output.step-scaled value=\"false\" type=\"BOOL\" help=\"Write emission values scaled to the step length rather than as per-second values\"/>"
    "        <battery-output value=\"\" type=\"FILE\" help=\"Save the battery values of each vehicle\"/>"
    "        <battery-output.precision value=\"2\" type=\"INT\" help=\"Write battery values with the given precision (default 2)\"/>"
    "        <elechybrid-output value=\"\" type=\"FILE\" help=\"Save the elecHybrid values of each vehicle\"/>"
    "        <elechybrid-output.precision value=\"2\" type=\"INT\" help=\"Write elecHybrid values with the given precision (default 2)\"/>"
    "        <elechybrid-output.aggregated value=\"false\" type=\"BOOL\" help=\"Write elecHybrid values into one aggregated file\"/>"
    "        <chargingstations-output value=\"\" type=\"FILE\" help=\"Write data of charging stations\"/>"
    "        <overheadwiresegments-output value=\"\" type=\"FILE\" help=\"Write data of overhead wire segments\"/>"
    "        <substations-output value=\"\" type=\"FILE\" help=\"Write data of electrical substation stations\"/>"
    "        <substations-output.precision value=\"2\" type=\"INT\" help=\"Write substation values with the given precision (default 2)\"/>"
    "        <fcd-output value=\"\" type=\"FILE\" help=\"Save the Floating Car Data\"/>"
    "        <fcd-output.geo value=\"false\" type=\"BOOL\" help=\"Save the Floating Car Data using geo-coordinates (lon/lat)\"/>"
    "        <fcd-output.signals value=\"false\" type=\"BOOL\" help=\"Add the vehicle signal state to the FCD output (brake lights etc.)\"/>"
    "        <fcd-output.distance value=\"false\" type=\"BOOL\" help=\"Add kilometrage to the FCD output (linear referencing)\"/>"
    "        <fcd-output.acceleration value=\"false\" type=\"BOOL\" help=\"Add acceleration to the FCD output\"/>"
    "        <fcd-output.max-leader-distance value=\"-1\" type=\"FLOAT\" help=\"Add leader vehicle information to the FCD output (within the given distance)\"/>"
    "        <fcd-output.params value=\"\" type=\"STR[]\" help=\"Add generic parameter values to the FCD output\"/>"
    "        <fcd-output.filter-edges.input-file value=\"\" type=\"FILE\" help=\"Restrict fcd output to the edge selection from the given input file\"/>"
    "        <fcd-output.attributes value=\"\" type=\"STR[]\" help=\"List attributes that should be included in the FCD output\"/>"
    "        <fcd-output.filter-shapes value=\"\" type=\"STR[]\" help=\"List shape names that should be used to filter the FCD output\"/>"
    "        <device.ssm.filter-edges.input-file value=\"\" type=\"FILE\" help=\"Restrict SSM device output to the edge selection from the given input file\"/>"
    "        <full-output value=\"\" type=\"FILE\" help=\"Save a lot of information for each timestep (very redundant)\"/>"
    "        <queue-output value=\"\" type=\"FILE\" help=\"Save the vehicle queues at the junctions (experimental)\"/>"
    "        <queue-output.period value=\"-1\" type=\"TIME\" help=\"Save vehicle queues with the given period\"/>"
    "        <vtk-output value=\"\" type=\"FILE\" help=\"Save complete vehicle positions inclusive speed values in the VTK Format (usage: /path/out will produce /path/out_$TIMESTEP$.vtp files)\"/>"
    "        <amitran-output value=\"\" type=\"FILE\" help=\"Save the vehicle trajectories in the Amitran format\"/>"
    "        <summary-output value=\"\" synonymes=\"summary\" type=\"FILE\" help=\"Save aggregated vehicle departure info into FILE\"/>"
    "        <summary-output.period value=\"-1\" type=\"TIME\" help=\"Save summary-output with the given period\"/>"
    "        <person-summary-output value=\"\" type=\"FILE\" help=\"Save aggregated person counts into FILE\"/>"
    "        <tripinfo-output value=\"\" synonymes=\"tripinfo\" type=\"FILE\" help=\"Save single vehicle trip info into FILE\"/>"
    "        <tripinfo-output.write-unfinished value=\"false\" type=\"BOOL\" help=\"Write tripinfo output for vehicles which have not arrived at simulation end\"/>"
    "        <tripinfo-output.write-undeparted value=\"false\" type=\"BOOL\" help=\"Write tripinfo output for vehicles which have not departed at simulation end because of depart delay\"/>"
    "        <personinfo-output value=\"\" synonymes=\"personinfo\" type=\"FILE\" help=\"Save personinfo and containerinfo to separate FILE\"/>"
    "        <vehroute-output value=\"\" synonymes=\"vehroutes\" type=\"FILE\" help=\"Save single vehicle route info into FILE\"/>"
    "        <vehroute-output.exit-times value=\"false\" synonymes=\"vehroutes.exit-times\" type=\"BOOL\" help=\"Write the exit times for all edges\"/>"
    "        <vehroute-output.last-route value=\"false\" synonymes=\"vehroutes.last-route\" type=\"BOOL\" help=\"Write the last route only\"/>"
    "        <vehroute-output.sorted value=\"false\" synonymes=\"vehroutes.sorted\" type=\"BOOL\" help=\"Sorts the output by departure time\"/>"
    "        <vehroute-output.dua value=\"false\" synonymes=\"vehroutes.dua\" type=\"BOOL\" help=\"Write the output in the duarouter alternatives style\"/>"
    "        <vehroute-output.cost value=\"false\" type=\"BOOL\" help=\"Write costs for all routes\"/>"
    "        <vehroute-output.intended-depart value=\"false\" synonymes=\"vehroutes.intended-depart\" type=\"BOOL\" help=\"Write the output with the intended instead of the real departure time\"/>"
    "        <vehroute-output.route-length value=\"false\" synonymes=\"vehroutes.route-length\" type=\"BOOL\" help=\"Include total route length in the output\"/>"
    "        <vehroute-output.write-unfinished value=\"false\" type=\"BOOL\" help=\"Write vehroute output for vehicles which have not arrived at simulation end\"/>"
    "        <vehroute-output.skip-ptlines value=\"false\" type=\"BOOL\" help=\"Skip vehroute output for public transport vehicles\"/>"
    "        <vehroute-output.incomplete value=\"false\" type=\"BOOL\" help=\"Include invalid routes and route stubs in vehroute output\"/>"
    "        <vehroute-output.stop-edges value=\"false\" type=\"BOOL\" help=\"Include information about edges between stops\"/>"
    "        <vehroute-output.speedfactor value=\"false\" type=\"BOOL\" help=\"Write the vehicle speedFactor (defaults to &apos;true&apos; if departSpeed is written)\"/>"
    "        <vehroute-output.internal value=\"false\" type=\"BOOL\" help=\"Include internal edges in the output\"/>"
    "        <personroute-output value=\"\" synonymes=\"personroutes\" type=\"FILE\" help=\"Save person and container routes to separate FILE\"/>"
    "        <link-output value=\"\" type=\"FILE\" help=\"Save links states into FILE\"/>"
    "        <railsignal-block-output value=\"\" type=\"FILE\" help=\"Save railsignal-blocks into FILE\"/>"
    "        <bt-output value=\"\" type=\"FILE\" help=\"Save bluetooth visibilities into FILE (in conjunction with device.btreceiver and device.btsender)\"/>"
    "        <lanechange-output value=\"\" type=\"FILE\" help=\"Record lane changes and their motivations for all vehicles into FILE\"/>"
    "        <lanechange-output.started value=\"false\" type=\"BOOL\" help=\"Record start of lane change manoeuvres\"/>"
    "        <lanechange-output.ended value=\"false\" type=\"BOOL\" help=\"Record end of lane change manoeuvres\"/>"
    "        <lanechange-output.xy value=\"false\" type=\"BOOL\" help=\"Record coordinates of lane change manoeuvres\"/>"
    "        <stop-output value=\"\" type=\"FILE\" help=\"Record stops and loading/unloading of passenger and containers for all vehicles into FILE\"/>"
    "        <stop-output.write-unfinished value=\"false\" type=\"BOOL\" help=\"Write stop output for stops which have not ended at simulation end\"/>"
    "        <collision-output value=\"\" type=\"FILE\" help=\"Write collision information into FILE\"/>"
    "        <edgedata-output value=\"\" type=\"FILE\" help=\"Write aggregated traffic statistics for all edges into FILE\"/>"
    "        <lanedata-output value=\"\" type=\"FILE\" help=\"Write aggregated traffic statistics for all lanes into FILE\"/>"
    "        <statistic-output value=\"\" synonymes=\"statistics-output\" type=\"FILE\" help=\"Write overall statistics into FILE\"/>"
    "        <save-state.times value=\"\" type=\"STR[]\" help=\"Use TIME[] as times at which a network state written\"/>"
    "        <save-state.period value=\"-1\" type=\"TIME\" help=\"save state repeatedly after TIME period\"/>"
    "        <save-state.period.keep value=\"0\" type=\"INT\" help=\"Keep only the last INT periodic state files\"/>"
    "        <save-state.prefix value=\"state\" type=\"FILE\" help=\"Prefix for network states\"/>"
    "        <save-state.suffix value=\".xml.gz\" type=\"STR\" help=\"Suffix for network states (.xml.gz or .xml)\"/>"
    "        <save-state.files value=\"\" type=\"FILE\" help=\"Files for network states\"/>"
    "        <save-state.rng value=\"false\" type=\"BOOL\" help=\"Save random number generator states\"/>"
    "        <save-state.transportables value=\"false\" type=\"BOOL\" help=\"Save person and container states (experimental)\"/>"
    "        <save-state.constraints value=\"false\" type=\"BOOL\" help=\"Save rail signal constraints\"/>"
    "        <save-state.precision value=\"2\" type=\"INT\" help=\"Write internal state values with the given precision (default 2)\"/>"
    "    </output>"
    "    <time>"
    "        <begin value=\"0\" synonymes=\"b\" type=\"TIME\" help=\"Defines the begin time in seconds; The simulation starts at this time\"/>"
    "        <end value=\"-1\" synonymes=\"e\" type=\"TIME\" help=\"Defines the end time in seconds; The simulation ends at this time\"/>"
    "        <step-length value=\"1\" type=\"TIME\" help=\"Defines the step duration in seconds\"/>"
    "    </time>"
    "    <processing>"
    "        <step-method.ballistic value=\"false\" type=\"BOOL\" help=\"Whether to use ballistic method for the positional update of vehicles (default is a semi-implicit Euler method).\"/>"
    "        <extrapolate-departpos value=\"false\" type=\"BOOL\" help=\"Whether vehicles that depart between simulation steps should extrapolate the depart position\"/>"
    "        <threads value=\"1\" type=\"INT\" help=\"Defines the number of threads for parallel simulation\"/>"
    "        <lateral-resolution value=\"-1\" type=\"FLOAT\" help=\"Defines the resolution in m when handling lateral positioning within a lane (with -1 all vehicles drive at the center of their lane\"/>"
    "        <route-steps value=\"200\" synonymes=\"s\" type=\"TIME\" help=\"Load routes for the next number of seconds ahead\"/>"
    "        <no-internal-links value=\"false\" type=\"BOOL\" help=\"Disable (junction) internal links\"/>"
    "        <ignore-junction-blocker value=\"-1\" type=\"TIME\" help=\"Ignore vehicles which block the junction after they have been standing for SECONDS (-1 means never ignore)\"/>"
    "        <ignore-route-errors value=\"false\" type=\"BOOL\" help=\"Do not check whether routes are connected\"/>"
    "        <ignore-accidents value=\"false\" type=\"BOOL\" help=\"Do not check whether accidents occur\"/>"
    "        <collision.action value=\"teleport\" type=\"STR\" help=\"How to deal with collisions: [none,warn,teleport,remove]\"/>"
    "        <intermodal-collision.action value=\"warn\" type=\"STR\" help=\"How to deal with collisions between vehicle and pedestrian: [none,warn,teleport,remove]\"/>"
    "        <collision.stoptime value=\"0\" type=\"TIME\" help=\"Let vehicle stop for TIME before performing collision.action (except for action &apos;none&apos;)\"/>"
    "        <intermodal-collision.stoptime value=\"0\" type=\"TIME\" help=\"Let vehicle stop for TIME before performing intermodal-collision.action (except for action &apos;none&apos;)\"/>"
    "        <collision.check-junctions value=\"false\" type=\"BOOL\" help=\"Enables collisions checks on junctions\"/>"
    "        <collision.check-junctions.mingap value=\"0\" type=\"FLOAT\" help=\"Increase or decrease sensitivity for junction collision check\"/>"
    "        <collision.mingap-factor value=\"-1\" type=\"FLOAT\" help=\"Sets the fraction of minGap that must be maintained to avoid collision detection. If a negative value is given, the carFollowModel parameter is used\"/>"
    "        <max-num-vehicles value=\"-1\" type=\"INT\" help=\"Delay vehicle insertion to stay within the given maximum number\"/>"
    "        <max-num-teleports value=\"-1\" type=\"INT\" help=\"Abort the simulation if the given maximum number of teleports is exceeded\"/>"
    "        <scale value=\"1\" type=\"FLOAT\" help=\"Scale demand by the given factor (by discarding or duplicating vehicles)\"/>"
    "        <scale-suffix value=\".\" type=\"STR\" help=\"Suffix to be added when creating ids for cloned vehicles\"/>"
    "        <time-to-teleport value=\"300\" type=\"TIME\" help=\"Specify how long a vehicle may wait until being teleported, defaults to 300, non-positive values disable teleporting\"/>"
    "        <time-to-teleport.highways value=\"0\" type=\"TIME\" help=\"The waiting time after which vehicles on a fast road (speed &gt; 69km/h) are teleported if they are on a non-continuing lane\"/>"
    "        <time-to-teleport.highways.min-speed value=\"19.1667\" type=\"FLOAT\" help=\"The waiting time after which vehicles on a fast road (default: speed &gt; 69km/h) are teleported if they are on a non-continuing lane\"/>"
    "        <time-to-teleport.disconnected value=\"-1\" type=\"TIME\" help=\"The waiting time after which vehicles with a disconnected route are teleported. Negative values disable teleporting\"/>"
    "        <time-to-teleport.remove value=\"false\" type=\"BOOL\" help=\"Whether vehicles shall be removed after waiting too long instead of being teleported\"/>"
    "        <time-to-teleport.ride value=\"-1\" type=\"TIME\" help=\"The waiting time after which persons / containers waiting for a pickup are teleported. Negative values disable teleporting\"/>"
    "        <time-to-teleport.bidi value=\"-1\" type=\"TIME\" help=\"The waiting time after which vehicles on bidirectional edges are teleported\"/>"
    "        <waiting-time-memory value=\"100\" type=\"TIME\" help=\"Length of time interval, over which accumulated waiting time is taken into account (default is 100s.)\"/>"
    "        <startup-wait-threshold value=\"2\" type=\"TIME\" help=\"Minimum consecutive waiting time before applying startupDelay\"/>"
    "        <max-depart-delay value=\"-1\" type=\"TIME\" help=\"How long vehicles wait for departure before being skipped, defaults to -1 which means vehicles are never skipped\"/>"
    "        <sloppy-insert value=\"false\" type=\"BOOL\" help=\"Whether insertion on an edge shall not be repeated in same step once failed\"/>"
    "        <eager-insert value=\"false\" type=\"BOOL\" help=\"Whether each vehicle is checked separately for insertion on an edge\"/>"
    "        <emergency-insert value=\"false\" type=\"BOOL\" help=\"Allow inserting a vehicle in a situation which requires emergency braking\"/>"
    "        <random-depart-offset value=\"0\" type=\"TIME\" help=\"Each vehicle receives a random offset to its depart value drawn uniformly from [0, TIME]\"/>"
    "        <lanechange.duration value=\"0\" type=\"TIME\" help=\"Duration of a lane change maneuver (default 0)\"/>"
    "        <lanechange.overtake-right value=\"false\" type=\"BOOL\" help=\"Whether overtaking on the right on motorways is permitted\"/>"
    "        <tls.all-off value=\"false\" type=\"BOOL\" help=\"Switches off all traffic lights.\"/>"
    "        <tls.actuated.show-detectors value=\"false\" type=\"BOOL\" help=\"Sets default visibility for actuation detectors\"/>"
    "        <tls.actuated.jam-threshold value=\"-1\" type=\"FLOAT\" help=\"Sets default jam-threshold parameter for all actuation detectors\"/>"
    "        <tls.actuated.detector-length value=\"0\" type=\"FLOAT\" help=\"Sets default detector length parameter for all actuation detectors\"/>"
    "        <tls.delay_based.detector-range value=\"100\" type=\"FLOAT\" help=\"Sets default range for detecting delayed vehicles\"/>"
    "        <tls.yellow.min-decel value=\"3\" type=\"FLOAT\" help=\"Minimum deceleration when braking at yellow\"/>"
    "        <railsignal-moving-block value=\"false\" type=\"BOOL\" help=\"Let railsignals operate in moving-block mode by default\"/>"
    "        <time-to-impatience value=\"180\" type=\"TIME\" help=\"Specify how long a vehicle may wait until impatience grows from 0 to 1, defaults to 300, non-positive values disable impatience growth\"/>"
    "        <default.action-step-length value=\"0\" type=\"FLOAT\" help=\"Length of the default interval length between action points for the car-following and lane-change models (in seconds). If not specified, the simulation step-length is used per default. Vehicle- or VType-specific settings override the default. Must be a multiple of the simulation step-length.\"/>"
    "        <default.carfollowmodel value=\"Krauss\" synonymes=\"carfollow.model\" type=\"STR\" help=\"Select default car following model (Krauss, IDM, ...)\"/>"
    "        <default.speeddev value=\"-1\" type=\"FLOAT\" help=\"Select default speed deviation. A negative value implies vClass specific defaults (0.1 for the default passenger class\"/>"
    "        <default.emergencydecel value=\"default\" type=\"STR\" help=\"Select default emergencyDecel value among (&apos;decel&apos;, &apos;default&apos;, FLOAT) which sets the value either to the same as the deceleration value, a vClass-class specific default or the given FLOAT in m/s^2\"/>"
    "        <overhead-wire.solver value=\"true\" type=\"BOOL\" help=\"Use Kirchhoff&apos;s laws for solving overhead wire circuit\"/>"
    "        <overhead-wire.recuperation value=\"true\" type=\"BOOL\" help=\"Enable recuperation from the vehicle equipped with elecHybrid device into the overhead wire.\"/>"
    "        <overhead-wire.substation-current-limits value=\"true\" type=\"BOOL\" help=\"Enable current limits of traction substation during solving the overhead wire electrical circuit.\"/>"
    "        <emergencydecel.warning-threshold value=\"1\" type=\"FLOAT\" help=\"Sets the fraction of emergency decel capability that must be used to trigger a warning.\"/>"
    "        <parking.maneuver value=\"false\" type=\"BOOL\" help=\"Whether parking simulation includes maneuvering time and associated lane blocking\"/>"
    "        <use-stop-ended value=\"false\" type=\"BOOL\" help=\"Override stop until times with stop ended times when given\"/>"
    "        <use-stop-started value=\"false\" type=\"BOOL\" help=\"Override stop arrival times with stop started times when given\"/>"
    "        <pedestrian.model value=\"striping\" type=\"STR\" help=\"Select among pedestrian models [&apos;nonInteracting&apos;, &apos;striping&apos;, &apos;remote&apos;]\"/>"
    "        <pedestrian.striping.stripe-width value=\"0.64\" type=\"FLOAT\" help=\"Width of parallel stripes for segmenting a sidewalk (meters) for use with model &apos;striping&apos;\"/>"
    "        <pedestrian.striping.dawdling value=\"0.2\" type=\"FLOAT\" help=\"Factor for random slow-downs [0,1] for use with model &apos;striping&apos;\"/>"
    "        <pedestrian.striping.mingap-to-vehicle value=\"0.25\" type=\"FLOAT\" help=\"Minimal gap / safety buffer (in meters) from a pedestrian to another vehicle for use with model &apos;striping&apos;\"/>"
    "        <pedestrian.striping.jamtime value=\"300\" type=\"TIME\" help=\"Time in seconds after which pedestrians start squeezing through a jam when using model &apos;striping&apos; (non-positive values disable squeezing)\"/>"
    "        <pedestrian.striping.jamtime.crossing value=\"10\" type=\"TIME\" help=\"Time in seconds after which pedestrians start squeezing through a jam while on a pedestrian crossing when using model &apos;striping&apos; (non-positive values disable squeezing)\"/>"
    "        <pedestrian.striping.jamtime.narrow value=\"1\" type=\"TIME\" help=\"Time in seconds after which pedestrians start squeezing through a jam while on a narrow lane when using model &apos;striping&apos;\"/>"
    "        <pedestrian.striping.reserve-oncoming value=\"0\" type=\"FLOAT\" help=\"Fraction of stripes to reserve for oncoming pedestrians\"/>"
    "        <pedestrian.striping.reserve-oncoming.junctions value=\"0.34\" type=\"FLOAT\" help=\"Fraction of stripes to reserve for oncoming pedestrians on crossings and walkingareas\"/>"
    "        <pedestrian.striping.reserve-oncoming.max value=\"1.28\" type=\"FLOAT\" help=\"Maximum width in m to reserve for oncoming pedestrians\"/>"
    "        <pedestrian.striping.legacy-departposlat value=\"false\" type=\"BOOL\" help=\"Interpret departPosLat for walks in legacy style\"/>"
    "        <pedestrian.striping.walkingarea-detail value=\"4\" type=\"INT\" help=\"Generate INT intermediate points to smooth out lanes within the walkingarea\"/>"
    "        <pedestrian.remote.address value=\"localhost:9000\" type=\"STR\" help=\"The address (host:port) of the external simulation\"/>"
    "        <ride.stop-tolerance value=\"10\" type=\"FLOAT\" help=\"Tolerance to apply when matching pedestrian and vehicle positions on boarding at individual stops\"/>"
    "        <persontrip.walk-opposite-factor value=\"1\" type=\"FLOAT\" help=\"Use FLOAT as a factor on walking speed against vehicle traffic direction\"/>"
    "    </processing>"
    "    <routing>"
    "        <routing-algorithm value=\"dijkstra\" type=\"STR\" help=\"Select among routing algorithms [&apos;dijkstra&apos;, &apos;astar&apos;, &apos;CH&apos;, &apos;CHWrapper&apos;]\"/>"
    "        <weights.random-factor value=\"1\" type=\"FLOAT\" help=\"Edge weights for routing are dynamically disturbed by a random factor drawn uniformly from [1,FLOAT)\"/>"
    "        <weights.minor-penalty value=\"1.5\" type=\"FLOAT\" help=\"Apply the given time penalty when computing minimum routing costs for minor-link internal lanes\"/>"
    "        <weights.tls-penalty value=\"0\" type=\"FLOAT\" help=\"Apply scaled travel time penalties based on green split when computing minimum routing costs for internal lanes at traffic lights\"/>"
    "        <weights.priority-factor value=\"0\" type=\"FLOAT\" help=\"Consider edge priorities in addition to travel times, weighted by factor\"/>"
    "        <weights.separate-turns value=\"0\" type=\"FLOAT\" help=\"Distinguish travel time by turn direction and shift a fraction of the estimated time loss ahead of the intersection onto the internal edges\"/>"
    "        <astar.all-distances value=\"\" type=\"FILE\" help=\"Initialize lookup table for astar from the given file (generated by marouter --all-pairs-output)\"/>"
    "        <astar.landmark-distances value=\"\" type=\"FILE\" help=\"Initialize lookup table for astar ALT-variant from the given file\"/>"
    "        <persontrip.walkfactor value=\"0.75\" type=\"FLOAT\" help=\"Use FLOAT as a factor on pedestrian maximum speed during intermodal routing\"/>"
    "        <persontrip.transfer.car-walk value=\"parkingAreas\" type=\"STR[]\" help=\"Where are mode changes from car to walking allowed (possible values: &apos;parkingAreas&apos;, &apos;ptStops&apos;, &apos;allJunctions&apos; and combinations)\"/>"
    "        <persontrip.transfer.taxi-walk value=\"\" type=\"STR[]\" help=\"Where taxis can drop off customers (&apos;allJunctions, &apos;ptStops&apos;)\"/>"
    "        <persontrip.transfer.walk-taxi value=\"\" type=\"STR[]\" help=\"Where taxis can pick up customers (&apos;allJunctions, &apos;ptStops&apos;)\"/>"
    "        <persontrip.default.group value=\"\" type=\"STR\" help=\"When set, trips between the same origin and destination will share a taxi by default\"/>"
    "        <persontrip.taxi.waiting-time value=\"300\" type=\"TIME\" help=\"Estimated time for taxi pickup\"/>"
    "        <railway.max-train-length value=\"1000\" type=\"FLOAT\" help=\"Use FLOAT as a maximum train length when initializing the railway router\"/>"
    "        <replay-rerouting value=\"false\" type=\"BOOL\" help=\"Replay exact rerouting sequence from vehroute-output\"/>"
    "        <device.rerouting.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;rerouting&apos; device\"/>"
    "        <device.rerouting.explicit value=\"\" synonymes=\"device.rerouting.knownveh\" type=\"STR[]\" help=\"Assign a &apos;rerouting&apos; device to named vehicles\"/>"
    "        <device.rerouting.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;rerouting&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.rerouting.period value=\"0\" synonymes=\"device.routing.period\" type=\"TIME\" help=\"The period with which the vehicle shall be rerouted\"/>"
    "        <device.rerouting.pre-period value=\"60\" synonymes=\"device.routing.pre-period\" type=\"TIME\" help=\"The rerouting period before depart\"/>"
    "        <device.rerouting.adaptation-weight value=\"0\" synonymes=\"device.routing.adaptation-weight\" type=\"FLOAT\" help=\"The weight of prior edge weights for exponential moving average\"/>"
    "        <device.rerouting.adaptation-steps value=\"180\" synonymes=\"device.routing.adaptation-steps\" type=\"INT\" help=\"The number of steps for moving average weight of prior edge weights\"/>"
    "        <device.rerouting.adaptation-interval value=\"1\" synonymes=\"device.routing.adaptation-interval\" type=\"TIME\" help=\"The interval for updating the edge weights\"/>"
    "        <device.rerouting.with-taz value=\"false\" synonymes=\"device.routing.with-taz with-taz\" type=\"BOOL\" help=\"Use zones (districts) as routing start- and endpoints\"/>"
    "        <device.rerouting.init-with-loaded-weights value=\"false\" type=\"BOOL\" help=\"Use weight files given with option --weight-files for initializing edge weights\"/>"
    "        <device.rerouting.threads value=\"0\" synonymes=\"routing-threads\" type=\"INT\" help=\"The number of parallel execution threads used for rerouting\"/>"
    "        <device.rerouting.synchronize value=\"false\" type=\"BOOL\" help=\"Let rerouting happen at the same time for all vehicles\"/>"
    "        <device.rerouting.railsignal value=\"true\" type=\"BOOL\" help=\"Allow rerouting triggered by rail signals.\"/>"
    "        <device.rerouting.bike-speeds value=\"false\" type=\"BOOL\" help=\"Compute separate average speeds for bicycles\"/>"
    "        <device.rerouting.output value=\"\" type=\"FILE\" help=\"Save adapting weights to FILE\"/>"
    "        <person-device.rerouting.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a person to have a &apos;rerouting&apos; device\"/>"
    "        <person-device.rerouting.explicit value=\"\" synonymes=\"person-device.rerouting.knownveh\" type=\"STR[]\" help=\"Assign a &apos;rerouting&apos; device to named persons\"/>"
    "        <person-device.rerouting.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;rerouting&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <person-device.rerouting.period value=\"0\" synonymes=\"person-device.routing.period\" type=\"TIME\" help=\"The period with which the person shall be rerouted\"/>"
    "    </routing>"
    "    <report>"
    "        <verbose value=\"false\" synonymes=\"v\" type=\"BOOL\" help=\"Switches to verbose output\"/>"
    "        <print-options value=\"false\" type=\"BOOL\" help=\"Prints option values before processing\"/>"
    "        <help value=\"false\" synonymes=\"?\" type=\"BOOL\" help=\"Prints this screen or selected topics\"/>"
    "        <version value=\"false\" synonymes=\"V\" type=\"BOOL\" help=\"Prints the current version\"/>"
    "        <xml-validation value=\"local\" synonymes=\"X\" type=\"STR\" help=\"Set schema validation scheme of XML inputs (&quot;never&quot;, &quot;local&quot;, &quot;auto&quot; or &quot;always&quot;)\"/>"
    "        <xml-validation.net value=\"never\" type=\"STR\" help=\"Set schema validation scheme of SUMO network inputs (&quot;never&quot;, &quot;local&quot;, &quot;auto&quot; or &quot;always&quot;)\"/>"
    "        <xml-validation.routes value=\"local\" type=\"STR\" help=\"Set schema validation scheme of SUMO route inputs (&quot;never&quot;, &quot;local&quot;, &quot;auto&quot; or &quot;always&quot;)\"/>"
    "        <no-warnings value=\"false\" synonymes=\"W suppress-warnings\" type=\"BOOL\" help=\"Disables output of warnings\"/>"
    "        <aggregate-warnings value=\"-1\" type=\"INT\" help=\"Aggregate warnings of the same type whenever more than INT occur\"/>"
    "        <log value=\"\" synonymes=\"l log-file\" type=\"FILE\" help=\"Writes all messages to FILE (implies verbose)\"/>"
    "        <message-log value=\"\" type=\"FILE\" help=\"Writes all non-error messages to FILE (implies verbose)\"/>"
    "        <error-log value=\"\" type=\"FILE\" help=\"Writes all warnings and errors to FILE\"/>"
    "        <language value=\"C\" type=\"STR\" help=\"Language to use in messages\"/>"
    "        <duration-log.disable value=\"false\" synonymes=\"no-duration-log\" type=\"BOOL\" help=\"Disable performance reports for individual simulation steps\"/>"
    "        <duration-log.statistics value=\"false\" synonymes=\"t\" type=\"BOOL\" help=\"Enable statistics on vehicle trips\"/>"
    "        <no-step-log value=\"false\" type=\"BOOL\" help=\"Disable console output of current simulation step\"/>"
    "        <step-log.period value=\"100\" type=\"INT\" help=\"Number of simulation steps between step-log outputs\"/>"
    "    </report>"
    "    <emissions>"
    "        <emissions.volumetric-fuel value=\"false\" type=\"BOOL\" help=\"Return fuel consumption values in (legacy) unit l instead of mg\"/>"
    "        <phemlight-path value=\"./PHEMlight/\" type=\"FILE\" help=\"Determines where to load PHEMlight definitions from\"/>"
    "        <phemlight-year value=\"0\" type=\"INT\" help=\"Enable fleet age modelling with the given reference year in PHEMlight5\"/>"
    "        <phemlight-temperature value=\"1.79769e+308\" type=\"FLOAT\" help=\"Set ambient temperature to correct NOx emissions in PHEMlight5\"/>"
    "        <device.emissions.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;emissions&apos; device\"/>"
    "        <device.emissions.explicit value=\"\" synonymes=\"device.emissions.knownveh\" type=\"STR[]\" help=\"Assign a &apos;emissions&apos; device to named vehicles\"/>"
    "        <device.emissions.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;emissions&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.emissions.begin value=\"-1\" type=\"STR\" help=\"Recording begin time for emission-data\"/>"
    "        <device.emissions.period value=\"0\" type=\"STR\" help=\"Recording period for emission-output\"/>"
    "    </emissions>"
    "    <communication>"
    "        <device.btreceiver.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;btreceiver&apos; device\"/>"
    "        <device.btreceiver.explicit value=\"\" synonymes=\"device.btreceiver.knownveh\" type=\"STR[]\" help=\"Assign a &apos;btreceiver&apos; device to named vehicles\"/>"
    "        <device.btreceiver.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;btreceiver&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.btreceiver.range value=\"300\" type=\"FLOAT\" help=\"The range of the bt receiver\"/>"
    "        <device.btreceiver.all-recognitions value=\"false\" type=\"BOOL\" help=\"Whether all recognition point shall be written\"/>"
    "        <device.btreceiver.offtime value=\"0.64\" type=\"FLOAT\" help=\"The offtime used for calculating detection probability (in seconds)\"/>"
    "        <device.btsender.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;btsender&apos; device\"/>"
    "        <device.btsender.explicit value=\"\" synonymes=\"device.btsender.knownveh\" type=\"STR[]\" help=\"Assign a &apos;btsender&apos; device to named vehicles\"/>"
    "        <device.btsender.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;btsender&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <person-device.btsender.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a person to have a &apos;btsender&apos; device\"/>"
    "        <person-device.btsender.explicit value=\"\" synonymes=\"person-device.btsender.knownveh\" type=\"STR[]\" help=\"Assign a &apos;btsender&apos; device to named persons\"/>"
    "        <person-device.btsender.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;btsender&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <person-device.btreceiver.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a person to have a &apos;btreceiver&apos; device\"/>"
    "        <person-device.btreceiver.explicit value=\"\" synonymes=\"person-device.btreceiver.knownveh\" type=\"STR[]\" help=\"Assign a &apos;btreceiver&apos; device to named persons\"/>"
    "        <person-device.btreceiver.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;btreceiver&apos; devices are set deterministic using a fraction of 1000\"/>"
    "    </communication>"
    "    <battery>"
    "        <device.stationfinder.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;stationfinder&apos; device\"/>"
    "        <device.stationfinder.explicit value=\"\" synonymes=\"device.stationfinder.knownveh\" type=\"STR[]\" help=\"Assign a &apos;stationfinder&apos; device to named vehicles\"/>"
    "        <device.stationfinder.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;stationfinder&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.stationfinder.rescueTime value=\"1800\" type=\"TIME\" help=\"Time to wait for a rescue vehicle on the road side when the battery is empty\"/>"
    "        <device.stationfinder.reserveFactor value=\"1.1\" type=\"FLOAT\" help=\"Additional battery buffer for unexpected traffic situation when estimating the battery need\"/>"
    "        <device.stationfinder.emptyThreshold value=\"5\" type=\"FLOAT\" help=\"Battery percentage to go into rescue mode\"/>"
    "        <device.stationfinder.radius value=\"180\" type=\"TIME\" help=\"Search radius in travel time seconds\"/>"
    "        <device.stationfinder.repeat value=\"60\" type=\"TIME\" help=\"When to trigger a new search if no station has been found\"/>"
    "        <device.stationfinder.maxChargePower value=\"1000\" type=\"FLOAT\" help=\"The maximum charging speed of the vehicle battery\"/>"
    "        <device.stationfinder.chargeType value=\"charging\" type=\"STR\" help=\"Type of energy transfer\"/>"
    "        <device.stationfinder.waitForCharge value=\"600\" type=\"TIME\" help=\"After this waiting time vehicle searches for a new station when the initial one is blocked\"/>"
    "        <device.battery.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;battery&apos; device\"/>"
    "        <device.battery.explicit value=\"\" synonymes=\"device.battery.knownveh\" type=\"STR[]\" help=\"Assign a &apos;battery&apos; device to named vehicles\"/>"
    "        <device.battery.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;battery&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.battery.track-fuel value=\"false\" type=\"BOOL\" help=\"Track fuel consumption for non-electric vehicles\"/>"
    "    </battery>"
    "    <example_device>"
    "        <device.example.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;example&apos; device\"/>"
    "        <device.example.explicit value=\"\" synonymes=\"device.example.knownveh\" type=\"STR[]\" help=\"Assign a &apos;example&apos; device to named vehicles\"/>"
    "        <device.example.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;example&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.example.parameter value=\"0\" type=\"FLOAT\" help=\"An exemplary parameter which can be used by all instances of the example device\"/>"
    "    </example_device>"
    "    <ssm_device>"
    "        <device.ssm.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;ssm&apos; device\"/>"
    "        <device.ssm.explicit value=\"\" synonymes=\"device.ssm.knownveh\" type=\"STR[]\" help=\"Assign a &apos;ssm&apos; device to named vehicles\"/>"
    "        <device.ssm.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;ssm&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.ssm.measures value=\"\" type=\"STR\" help=\"Specifies which measures will be logged (as a space or comma-separated sequence of IDs in (&apos;TTC&apos;, &apos;DRAC&apos;, &apos;PET&apos;, &apos;PPET&apos;,&apos;MDRAC&apos;))\"/>"
    "        <device.ssm.thresholds value=\"\" type=\"STR\" help=\"Specifies space or comma-separated thresholds corresponding to the specified measures (see documentation and watch the order!). Only events exceeding the thresholds will be logged.\"/>"
    "        <device.ssm.trajectories value=\"false\" type=\"BOOL\" help=\"Specifies whether trajectories will be logged (if false, only the extremal values and times are reported).\"/>"
    "        <device.ssm.range value=\"50\" type=\"FLOAT\" help=\"Specifies the detection range in meters. For vehicles below this distance from the equipped vehicle, SSM values are traced.\"/>"
    "        <device.ssm.extratime value=\"5\" type=\"FLOAT\" help=\"Specifies the time in seconds to be logged after a conflict is over. Required &gt;0 if PET is to be calculated for crossing conflicts.\"/>"
    "        <device.ssm.mdrac.prt value=\"1\" type=\"FLOAT\" help=\"Specifies the perception reaction time for MDRAC computation.\"/>"
    "        <device.ssm.file value=\"\" type=\"STR\" help=\"Give a global default filename for the SSM output\"/>"
    "        <device.ssm.geo value=\"false\" type=\"BOOL\" help=\"Whether to use coordinates of the original reference system in output\"/>"
    "        <device.ssm.write-positions value=\"false\" type=\"BOOL\" help=\"Whether to write positions (coordinates) for each timestep\"/>"
    "        <device.ssm.write-lane-positions value=\"false\" type=\"BOOL\" help=\"Whether to write lanes and their positions for each timestep\"/>"
    "        <device.ssm.exclude-conflict-types value=\"\" type=\"STR\" help=\"Which conflicts will be excluded from the log according to the conflict type they have been classified (combination of values in &apos;ego&apos;, &apos;foe&apos; , &apos;&apos;, any numerical valid conflict type code). An empty value will log all and &apos;ego&apos;/&apos;foe&apos; refer to a certain conflict type subset.\"/>"
    "    </ssm_device>"
    "    <toc_device>"
    "        <device.toc.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;toc&apos; device\"/>"
    "        <device.toc.explicit value=\"\" synonymes=\"device.toc.knownveh\" type=\"STR[]\" help=\"Assign a &apos;toc&apos; device to named vehicles\"/>"
    "        <device.toc.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;toc&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.toc.manualType value=\"\" type=\"STR\" help=\"Vehicle type for manual driving regime.\"/>"
    "        <device.toc.automatedType value=\"\" type=\"STR\" help=\"Vehicle type for automated driving regime.\"/>"
    "        <device.toc.responseTime value=\"-1\" type=\"FLOAT\" help=\"Average response time needed by a driver to take back control.\"/>"
    "        <device.toc.recoveryRate value=\"0.1\" type=\"FLOAT\" help=\"Recovery rate for the driver&apos;s awareness after a ToC.\"/>"
    "        <device.toc.lcAbstinence value=\"0\" type=\"FLOAT\" help=\"Attention level below which a driver restrains from performing lane changes (value in [0,1]).\"/>"
    "        <device.toc.initialAwareness value=\"0.5\" type=\"FLOAT\" help=\"Average awareness a driver has initially after a ToC (value in [0,1]).\"/>"
    "        <device.toc.mrmDecel value=\"1.5\" type=\"FLOAT\" help=\"Deceleration rate applied during a &apos;minimum risk maneuver&apos;.\"/>"
    "        <device.toc.dynamicToCThreshold value=\"0\" type=\"FLOAT\" help=\"Time, which the vehicle requires to have ahead to continue in automated mode. The default value of 0 indicates no dynamic triggering of ToCs.\"/>"
    "        <device.toc.dynamicMRMProbability value=\"0.05\" type=\"FLOAT\" help=\"Probability that a dynamically triggered TOR is not answered in time.\"/>"
    "        <device.toc.mrmKeepRight value=\"false\" type=\"BOOL\" help=\"If true, the vehicle tries to change to the right during an MRM.\"/>"
    "        <device.toc.mrmSafeSpot value=\"\" type=\"STR\" help=\"If set, the vehicle tries to reach the given named stopping place during an MRM.\"/>"
    "        <device.toc.mrmSafeSpotDuration value=\"60\" type=\"FLOAT\" help=\"Duration the vehicle stays at the safe spot after an MRM.\"/>"
    "        <device.toc.maxPreparationAccel value=\"0\" type=\"FLOAT\" help=\"Maximal acceleration that may be applied during the ToC preparation phase.\"/>"
    "        <device.toc.ogNewTimeHeadway value=\"-1\" type=\"FLOAT\" help=\"Timegap for ToC preparation phase.\"/>"
    "        <device.toc.ogNewSpaceHeadway value=\"-1\" type=\"FLOAT\" help=\"Additional spacing for ToC preparation phase.\"/>"
    "        <device.toc.ogMaxDecel value=\"-1\" type=\"FLOAT\" help=\"Maximal deceleration applied for establishing increased gap in ToC preparation phase.\"/>"
    "        <device.toc.ogChangeRate value=\"-1\" type=\"FLOAT\" help=\"Rate of adaptation towards the increased headway during ToC preparation.\"/>"
    "        <device.toc.useColorScheme value=\"true\" type=\"BOOL\" help=\"Whether a coloring scheme shall by applied to indicate the different ToC stages.\"/>"
    "        <device.toc.file value=\"\" type=\"STR\" help=\"Switches on output by specifying an output filename.\"/>"
    "    </toc_device>"
    "    <driver_state_device>"
    "        <device.driverstate.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;driverstate&apos; device\"/>"
    "        <device.driverstate.explicit value=\"\" synonymes=\"device.driverstate.knownveh\" type=\"STR[]\" help=\"Assign a &apos;driverstate&apos; device to named vehicles\"/>"
    "        <device.driverstate.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;driverstate&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.driverstate.initialAwareness value=\"1\" type=\"FLOAT\" help=\"Initial value assigned to the driver&apos;s awareness.\"/>"
    "        <device.driverstate.errorTimeScaleCoefficient value=\"100\" type=\"FLOAT\" help=\"Time scale for the error process.\"/>"
    "        <device.driverstate.errorNoiseIntensityCoefficient value=\"0.2\" type=\"FLOAT\" help=\"Noise intensity driving the error process.\"/>"
    "        <device.driverstate.speedDifferenceErrorCoefficient value=\"0.15\" type=\"FLOAT\" help=\"General scaling coefficient for applying the error to the perceived speed difference (error also scales with distance).\"/>"
    "        <device.driverstate.headwayErrorCoefficient value=\"0.75\" type=\"FLOAT\" help=\"General scaling coefficient for applying the error to the perceived distance (error also scales with distance).\"/>"
    "        <device.driverstate.freeSpeedErrorCoefficient value=\"0\" type=\"FLOAT\" help=\"General scaling coefficient for applying the error to the vehicle&apos;s own speed when driving without a leader (error also scales with own speed).\"/>"
    "        <device.driverstate.speedDifferenceChangePerceptionThreshold value=\"0.1\" type=\"FLOAT\" help=\"Base threshold for recognizing changes in the speed difference (threshold also scales with distance).\"/>"
    "        <device.driverstate.headwayChangePerceptionThreshold value=\"0.1\" type=\"FLOAT\" help=\"Base threshold for recognizing changes in the headway (threshold also scales with distance).\"/>"
    "        <device.driverstate.minAwareness value=\"0.1\" type=\"FLOAT\" help=\"Minimal admissible value for the driver&apos;s awareness.\"/>"
    "        <device.driverstate.maximalReactionTime value=\"-1\" type=\"FLOAT\" help=\"Maximal reaction time (~action step length) induced by decreased awareness level (reached for awareness=minAwareness).\"/>"
    "    </driver_state_device>"
    "    <bluelight_device>"
    "        <device.bluelight.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;bluelight&apos; device\"/>"
    "        <device.bluelight.explicit value=\"\" synonymes=\"device.bluelight.knownveh\" type=\"STR[]\" help=\"Assign a &apos;bluelight&apos; device to named vehicles\"/>"
    "        <device.bluelight.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;bluelight&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.bluelight.reactiondist value=\"25\" type=\"FLOAT\" help=\"Set the distance at which other drivers react to the blue light and siren sound\"/>"
    "    </bluelight_device>"
    "    <fcd_device>"
    "        <device.fcd.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;fcd&apos; device\"/>"
    "        <device.fcd.explicit value=\"\" synonymes=\"device.fcd.knownveh\" type=\"STR[]\" help=\"Assign a &apos;fcd&apos; device to named vehicles\"/>"
    "        <device.fcd.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;fcd&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.fcd.begin value=\"-1\" type=\"STR\" help=\"Recording begin time for FCD-data\"/>"
    "        <device.fcd.period value=\"0\" type=\"STR\" help=\"Recording period for FCD-data\"/>"
    "        <device.fcd.radius value=\"0\" type=\"FLOAT\" help=\"Record objects in a radius around equipped vehicles\"/>"
    "        <person-device.fcd.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a person to have a &apos;fcd&apos; device\"/>"
    "        <person-device.fcd.explicit value=\"\" synonymes=\"person-device.fcd.knownveh\" type=\"STR[]\" help=\"Assign a &apos;fcd&apos; device to named persons\"/>"
    "        <person-device.fcd.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;fcd&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <person-device.fcd.period value=\"0\" type=\"STR\" help=\"Recording period for FCD-data\"/>"
    "    </fcd_device>"
    "    <elechybrid_device>"
    "        <device.elechybrid.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;elechybrid&apos; device\"/>"
    "        <device.elechybrid.explicit value=\"\" synonymes=\"device.elechybrid.knownveh\" type=\"STR[]\" help=\"Assign a &apos;elechybrid&apos; device to named vehicles\"/>"
    "        <device.elechybrid.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;elechybrid&apos; devices are set deterministic using a fraction of 1000\"/>"
    "    </elechybrid_device>"
    "    <taxi_device>"
    "        <device.taxi.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;taxi&apos; device\"/>"
    "        <device.taxi.explicit value=\"\" synonymes=\"device.taxi.knownveh\" type=\"STR[]\" help=\"Assign a &apos;taxi&apos; device to named vehicles\"/>"
    "        <device.taxi.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;taxi&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.taxi.dispatch-algorithm value=\"greedy\" type=\"STR\" help=\"The dispatch algorithm [greedy|greedyClosest|greedyShared|routeExtension|traci]\"/>"
    "        <device.taxi.dispatch-algorithm.output value=\"\" type=\"FILE\" help=\"Write information from the dispatch algorithm to FILE\"/>"
    "        <device.taxi.dispatch-algorithm.params value=\"\" type=\"STR\" help=\"Load dispatch algorithm parameters in format KEY1:VALUE1[,KEY2:VALUE]\"/>"
    "        <device.taxi.dispatch-period value=\"60\" type=\"TIME\" help=\"The period between successive calls to the dispatcher\"/>"
    "        <device.taxi.idle-algorithm value=\"stop\" type=\"STR\" help=\"The behavior of idle taxis [stop|randomCircling]\"/>"
    "        <device.taxi.idle-algorithm.output value=\"\" type=\"FILE\" help=\"Write information from the idling algorithm to FILE\"/>"
    "    </taxi_device>"
    "    <glosa_device>"
    "        <device.glosa.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;glosa&apos; device\"/>"
    "        <device.glosa.explicit value=\"\" synonymes=\"device.glosa.knownveh\" type=\"STR[]\" help=\"Assign a &apos;glosa&apos; device to named vehicles\"/>"
    "        <device.glosa.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;glosa&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.glosa.range value=\"100\" type=\"FLOAT\" help=\"The communication range to the traffic light\"/>"
    "        <device.glosa.max-speedfactor value=\"1.1\" type=\"FLOAT\" help=\"The maximum speed factor when approaching a green light\"/>"
    "        <device.glosa.min-speed value=\"5\" type=\"FLOAT\" help=\"Minimum speed when coasting towards a red light\"/>"
    "    </glosa_device>"
    "    <tripinfo_device>"
    "        <device.tripinfo.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;tripinfo&apos; device\"/>"
    "        <device.tripinfo.explicit value=\"\" synonymes=\"device.tripinfo.knownveh\" type=\"STR[]\" help=\"Assign a &apos;tripinfo&apos; device to named vehicles\"/>"
    "        <device.tripinfo.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;tripinfo&apos; devices are set deterministic using a fraction of 1000\"/>"
    "    </tripinfo_device>"
    "    <vehroutes_device>"
    "        <device.vehroute.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;vehroute&apos; device\"/>"
    "        <device.vehroute.explicit value=\"\" synonymes=\"device.vehroute.knownveh\" type=\"STR[]\" help=\"Assign a &apos;vehroute&apos; device to named vehicles\"/>"
    "        <device.vehroute.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;vehroute&apos; devices are set deterministic using a fraction of 1000\"/>"
    "    </vehroutes_device>"
    "    <friction_device>"
    "        <device.friction.probability value=\"-1\" type=\"FLOAT\" help=\"The probability for a vehicle to have a &apos;friction&apos; device\"/>"
    "        <device.friction.explicit value=\"\" synonymes=\"device.friction.knownveh\" type=\"STR[]\" help=\"Assign a &apos;friction&apos; device to named vehicles\"/>"
    "        <device.friction.deterministic value=\"false\" type=\"BOOL\" help=\"The &apos;friction&apos; devices are set deterministic using a fraction of 1000\"/>"
    "        <device.friction.stdDev value=\"0.1\" type=\"FLOAT\" help=\"The measurement noise parameter which can be applied to the friction device\"/>"
    "        <device.friction.offset value=\"0\" type=\"FLOAT\" help=\"The measurement offset parameter which can be applied to the friction device -&gt; e.g. to force false measurements\"/>"
    "    </friction_device>"
    "    <traci_server>"
    "        <remote-port value=\"0\" type=\"INT\" help=\"Enables TraCI Server if set\"/>"
    "        <num-clients value=\"1\" type=\"INT\" help=\"Expected number of connecting clients\"/>"
    "    </traci_server>"
    "    <mesoscopic>"
    "        <mesosim value=\"false\" type=\"BOOL\" help=\"Enables mesoscopic simulation\"/>"
    "        <meso-edgelength value=\"98\" type=\"FLOAT\" help=\"Length of an edge segment in mesoscopic simulation\"/>"
    "        <meso-tauff value=\"1.13\" type=\"TIME\" help=\"Factor for calculating the net free-free headway time\"/>"
    "        <meso-taufj value=\"1.13\" type=\"TIME\" help=\"Factor for calculating the net free-jam headway time\"/>"
    "        <meso-taujf value=\"1.73\" type=\"TIME\" help=\"Factor for calculating the jam-free headway time\"/>"
    "        <meso-taujj value=\"1.4\" type=\"TIME\" help=\"Factor for calculating the jam-jam headway time\"/>"
    "        <meso-jam-threshold value=\"-1\" type=\"FLOAT\" help=\"Minimum percentage of occupied space to consider a segment jammed. A negative argument causes thresholds to be computed based on edge speed and tauff (default)\"/>"
    "        <meso-multi-queue value=\"true\" type=\"BOOL\" help=\"Enable multiple queues at edge ends\"/>"
    "        <meso-lane-queue value=\"false\" type=\"BOOL\" help=\"Enable separate queues for every lane\"/>"
    "        <meso-ignore-lanes-by-vclass value=\"pedestrian,bicycle\" synonymes=\"meso.ignore-lanes.by-vclass\" type=\"STR[]\" help=\"Do not build queues (or reduce capacity) for lanes allowing only the given vclasses\"/>"
    "        <meso-junction-control value=\"false\" type=\"BOOL\" help=\"Enable mesoscopic traffic light and priority junction handling\"/>"
    "        <meso-junction-control.limited value=\"false\" type=\"BOOL\" help=\"Enable mesoscopic traffic light and priority junction handling for saturated links. This prevents faulty traffic lights from hindering flow in low-traffic situations\"/>"
    "        <meso-tls-penalty value=\"0\" type=\"FLOAT\" help=\"Apply scaled travel time penalties when driving across tls controlled junctions based on green split instead of checking actual phases\"/>"
    "        <meso-tls-flow-penalty value=\"0\" type=\"FLOAT\" help=\"Apply scaled headway penalties when driving across tls controlled junctions based on green split instead of checking actual phases\"/>"
    "        <meso-minor-penalty value=\"0\" type=\"TIME\" help=\"Apply fixed time penalty when driving across a minor link. When using --meso-junction-control.limited, the penalty is not applied whenever limited control is active.\"/>"
    "        <meso-overtaking value=\"false\" type=\"BOOL\" help=\"Enable mesoscopic overtaking\"/>"
    "        <meso-recheck value=\"0\" type=\"TIME\" help=\"Time interval for rechecking insertion into the next segment after failure\"/>"
    "    </mesoscopic>"
    "    <random_number>"
    "        <random value=\"false\" synonymes=\"abs-rand\" type=\"BOOL\" help=\"Initialises the random number generator with the current system time\"/>"
    "        <seed value=\"23423\" synonymes=\"srand\" type=\"INT\" help=\"Initialises the random number generator with the given value\"/>"
    "        <thread-rngs value=\"64\" type=\"INT\" help=\"Number of pre-allocated random number generators to ensure repeatable multi-threaded simulations (should be at least the number of threads for repeatable simulations).\"/>"
    "    </random_number>"
    "    <gui_only>"
    "        <gui-settings-file value=\"\" synonymes=\"g\" type=\"FILE\" help=\"Load visualisation settings from FILE\"/>"
    "        <quit-on-end value=\"false\" synonymes=\"Q\" type=\"BOOL\" help=\"Quits the GUI when the simulation stops\"/>"
    "        <game value=\"false\" synonymes=\"G\" type=\"BOOL\" help=\"Start the GUI in gaming mode\"/>"
    "        <game.mode value=\"tls\" type=\"STR\" help=\"Select the game type (&apos;tls&apos;, &apos;drt&apos;)\"/>"
    "        <start value=\"false\" synonymes=\"S\" type=\"BOOL\" help=\"Start the simulation after loading\"/>"
    "        <delay value=\"0\" synonymes=\"d\" type=\"FLOAT\" help=\"Use FLOAT in ms as delay between simulation steps\"/>"
    "        <breakpoints value=\"\" synonymes=\"B\" type=\"STR[]\" help=\"Use TIME[] as times when the simulation should halt\"/>"
    "        <edgedata-files value=\"\" synonymes=\"data-files\" type=\"FILE\" help=\"Load edge/lane weights for visualization from FILE\"/>"
    "        <alternative-net-file value=\"\" synonymes=\"N\" type=\"FILE\" help=\"Load a secondary road network for abstract visualization from FILE\"/>"
    "        <demo value=\"false\" synonymes=\"D\" type=\"BOOL\" help=\"Restart the simulation after ending (demo mode)\"/>"
    "        <disable-textures value=\"false\" synonymes=\"T\" type=\"BOOL\" help=\"Do not load background pictures\"/>"
    "        <registry-viewport value=\"false\" type=\"BOOL\" help=\"Load current viewport from registry\"/>"
    "        <window-size value=\"\" type=\"STR[]\" help=\"Create initial window with the given x,y size\"/>"
    "        <window-pos value=\"\" type=\"STR[]\" help=\"Create initial window at the given x,y position\"/>"
    "        <tracker-interval value=\"1\" type=\"TIME\" help=\"The aggregation period for value tracker windows\"/>"
    "        <gui-testing value=\"false\" type=\"BOOL\" help=\"Enable overlay for screen recognition\"/>"
    "        <gui-testing-debug value=\"false\" type=\"BOOL\" help=\"Enable output messages during GUI-Testing\"/>"
    "        <gui-testing.setting-output value=\"\" type=\"FILE\" help=\"Save gui settings in the given settings output file\"/>"
    "    </gui_only>"
    "</configuration>";

const std::string netgenerateTemplate = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
    "<!-- generated on 2024-11-21 19:13:22 by Eclipse SUMO netgenerate Version 1.18.0"
    "-->"
    "<configuration xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://sumo.dlr.de/xsd/netgenerateConfiguration.xsd\">"
    "    <configuration>"
    "        <configuration-file value=\"\" synonymes=\"c configuration\" type=\"FILE\" help=\"Loads the named config on startup\"/>"
    "        <save-configuration value=\"\" synonymes=\"C save-config\" type=\"FILE\" help=\"Saves current configuration into FILE\"/>"
    "        <save-configuration.relative value=\"false\" synonymes=\"save-config.relative\" type=\"BOOL\" help=\"Enforce relative paths when saving the configuration\"/>"
    "        <save-template value=\"\" type=\"FILE\" help=\"Saves a configuration template (empty) into FILE\"/>"
    "        <save-schema value=\"\" type=\"FILE\" help=\"Saves the configuration schema into FILE\"/>"
    "        <save-commented value=\"false\" synonymes=\"save-template.commented\" type=\"BOOL\" help=\"Adds comments to saved template, configuration, or schema\"/>"
    "    </configuration>"
    "    <grid_network>"
    "        <grid value=\"false\" synonymes=\"g grid-net\" type=\"BOOL\" help=\"Forces NETGEN to build a grid-like network\"/>"
    "        <grid.number value=\"5\" synonymes=\"grid-number number\" type=\"INT\" help=\"The number of junctions in both dirs\"/>"
    "        <grid.length value=\"100\" synonymes=\"grid-length length\" type=\"FLOAT\" help=\"The length of streets in both dirs\"/>"
    "        <grid.x-number value=\"5\" synonymes=\"grid-x-number x-no\" type=\"INT\" help=\"The number of junctions in x-dir; Overrides --grid-number\"/>"
    "        <grid.y-number value=\"5\" synonymes=\"grid-y-number y-no\" type=\"INT\" help=\"The number of junctions in y-dir; Overrides --grid-number\"/>"
    "        <grid.x-length value=\"100\" synonymes=\"grid-x-length x-length\" type=\"FLOAT\" help=\"The length of horizontal streets; Overrides --grid-length\"/>"
    "        <grid.y-length value=\"100\" synonymes=\"grid-y-length y-length\" type=\"FLOAT\" help=\"The length of vertical streets; Overrides --grid-length\"/>"
    "        <grid.attach-length value=\"0\" synonymes=\"attach-length\" type=\"FLOAT\" help=\"The length of streets attached at the boundary; 0 means no streets are attached\"/>"
    "        <grid.x-attach-length value=\"0\" type=\"FLOAT\" help=\"The length of streets attached at the boundary in x direction; 0 means no streets are attached\"/>"
    "        <grid.y-attach-length value=\"0\" type=\"FLOAT\" help=\"The length of streets attached at the boundary in y direction; 0 means no streets are attached\"/>"
    "    </grid_network>"
    "    <spider_network>"
    "        <spider value=\"false\" synonymes=\"s spider-net\" type=\"BOOL\" help=\"Forces NETGEN to build a spider-net-like network\"/>"
    "        <spider.arm-number value=\"7\" synonymes=\"arms spider-arm-number\" type=\"INT\" help=\"The number of axes within the net\"/>"
    "        <spider.circle-number value=\"5\" synonymes=\"circles spider-circle-number\" type=\"INT\" help=\"The number of circles of the net\"/>"
    "        <spider.space-radius value=\"100\" synonymes=\"radius spider-space-rad\" type=\"FLOAT\" help=\"The distances between the circles\"/>"
    "        <spider.omit-center value=\"false\" synonymes=\"nocenter spider-omit-center\" type=\"BOOL\" help=\"Omit the central node of the network\"/>"
    "        <spider.attach-length value=\"0\" type=\"FLOAT\" help=\"The length of streets attached at the boundary; 0 means no streets are attached\"/>"
    "    </spider_network>"
    "    <random_network>"
    "        <rand value=\"false\" synonymes=\"r random-net\" type=\"BOOL\" help=\"Forces NETGEN to build a random network\"/>"
    "        <rand.iterations value=\"100\" synonymes=\"iterations rand-iterations\" type=\"INT\" help=\"Describes how many times an edge shall be added to the net\"/>"
    "        <rand.max-distance value=\"250\" synonymes=\"max-dist rand-max-distance\" type=\"FLOAT\" help=\"The maximum distance for each edge\"/>"
    "        <rand.min-distance value=\"100\" synonymes=\"min-dist rand-min-distance\" type=\"FLOAT\" help=\"The minimum distance for each edge\"/>"
    "        <rand.min-angle value=\"45\" synonymes=\"min-angle rand-min-anglee\" type=\"FLOAT\" help=\"The minimum angle for each pair of (bidirectional) roads in DEGREES\"/>"
    "        <rand.num-tries value=\"50\" synonymes=\"num-tries rand-num-tries\" type=\"INT\" help=\"The number of tries for creating each node\"/>"
    "        <rand.connectivity value=\"0.95\" synonymes=\"connectivity rand-connectivity\" type=\"FLOAT\" help=\"Probability for roads to continue at each node\"/>"
    "        <rand.neighbor-dist1 value=\"0\" synonymes=\"dist1 rand-neighbor-dist1\" type=\"FLOAT\" help=\"Probability for a node having exactly 1 neighbor\"/>"
    "        <rand.neighbor-dist2 value=\"0\" synonymes=\"dist2 rand-neighbor-dist2\" type=\"FLOAT\" help=\"Probability for a node having exactly 2 neighbors\"/>"
    "        <rand.neighbor-dist3 value=\"10\" synonymes=\"dist3 rand-neighbor-dist3\" type=\"FLOAT\" help=\"Probability for a node having exactly 3 neighbors\"/>"
    "        <rand.neighbor-dist4 value=\"10\" synonymes=\"dist4 rand-neighbor-dist4\" type=\"FLOAT\" help=\"Probability for a node having exactly 4 neighbors\"/>"
    "        <rand.neighbor-dist5 value=\"2\" synonymes=\"dist5 rand-neighbor-dist5\" type=\"FLOAT\" help=\"Probability for a node having exactly 5 neighbors\"/>"
    "        <rand.neighbor-dist6 value=\"1\" synonymes=\"dist6 rand-neighbor-dist6\" type=\"FLOAT\" help=\"Probability for a node having exactly 6 neighbors\"/>"
    "        <rand.grid value=\"false\" type=\"BOOL\" help=\"Place nodes on a regular grid with spacing rand.min-distance\"/>"
    "    </random_network>"
    "    <input>"
    "        <type-files value=\"\" synonymes=\"t\" type=\"FILE\" help=\"Read edge-type defs from FILE\"/>"
    "    </input>"
    "    <output>"
    "        <write-license value=\"false\" type=\"BOOL\" help=\"Include license info into every output file\"/>"
    "        <output-prefix value=\"\" type=\"STR\" help=\"Prefix which is applied to all output files. The special string &apos;TIME&apos; is replaced by the current time.\"/>"
    "        <precision value=\"2\" type=\"INT\" help=\"Defines the number of digits after the comma for floating point output\"/>"
    "        <precision.geo value=\"6\" type=\"INT\" help=\"Defines the number of digits after the comma for lon,lat output\"/>"
    "        <human-readable-time value=\"false\" synonymes=\"H\" type=\"BOOL\" help=\"Write time values as hour:minute:second or day:hour:minute:second rather than seconds\"/>"
    "        <alphanumerical-ids value=\"true\" type=\"BOOL\" help=\"The Ids of generated nodes use an alphanumerical code for easier readability when possible\"/>"
    "        <output-file value=\"\" synonymes=\"o output sumo-output\" type=\"FILE\" help=\"The generated net will be written to FILE\"/>"
    "        <plain-output-prefix value=\"\" synonymes=\"p plain plain-output\" type=\"FILE\" help=\"Prefix of files to write plain xml nodes, edges and connections to\"/>"
    "        <plain-output.lanes value=\"false\" type=\"BOOL\" help=\"Write all lanes and their attributes even when they are not customized\"/>"
    "        <junctions.join-output value=\"\" type=\"FILE\" help=\"Writes information about joined junctions to FILE (can be loaded as additional node-file to reproduce joins\"/>"
    "        <prefix value=\"\" type=\"STR\" help=\"Defines a prefix for edge and junction names\"/>"
    "        <amitran-output value=\"\" type=\"FILE\" help=\"The generated net will be written to FILE using Amitran format\"/>"
    "        <matsim-output value=\"\" type=\"FILE\" help=\"The generated net will be written to FILE using MATsim format\"/>"
    "        <opendrive-output value=\"\" type=\"FILE\" help=\"The generated net will be written to FILE using OpenDRIVE format\"/>"
    "        <dlr-navteq-output value=\"\" type=\"FILE\" help=\"The generated net will be written to dlr-navteq files with the given PREFIX\"/>"
    "        <dlr-navteq.precision value=\"2\" type=\"INT\" help=\"The network coordinates are written with the specified level of output precision\"/>"
    "        <output.street-names value=\"false\" type=\"BOOL\" help=\"Street names will be included in the output (if available)\"/>"
    "        <output.original-names value=\"false\" type=\"BOOL\" help=\"Writes original names, if given, as parameter\"/>"
    "        <street-sign-output value=\"\" type=\"FILE\" help=\"Writes street signs as POIs to FILE\"/>"
    "        <opendrive-output.straight-threshold value=\"1e-08\" type=\"FLOAT\" help=\"Builds parameterized curves whenever the angular change  between straight segments exceeds FLOAT degrees\"/>"
    "    </output>"
    "    <processing>"
    "        <turn-lanes value=\"0\" type=\"INT\" help=\"Generate INT left-turn lanes\"/>"
    "        <turn-lanes.length value=\"20\" type=\"FLOAT\" help=\"Set the length of generated turning lanes to FLOAT\"/>"
    "        <perturb-x value=\"0\" type=\"STR\" help=\"Apply random spatial perturbation in x direction according the the given distribution\"/>"
    "        <perturb-y value=\"0\" type=\"STR\" help=\"Apply random spatial perturbation in y direction according the the given distribution\"/>"
    "        <perturb-z value=\"0\" type=\"STR\" help=\"Apply random spatial perturbation in z direction according the the given distribution\"/>"
    "        <bidi-probability value=\"1\" synonymes=\"bidi rand-bidi-probability rand.bidi-probability\" type=\"FLOAT\" help=\"Defines the probability to build a reverse edge\"/>"
    "        <random-lanenumber value=\"false\" synonymes=\"rand.random-lanenumber\" type=\"BOOL\" help=\"Draw lane numbers randomly from [1,default.lanenumber]\"/>"
    "        <random-priority value=\"false\" synonymes=\"rand.random-priority\" type=\"BOOL\" help=\"Draw edge priority randomly from [1,default.priority]\"/>"
    "        <random-type value=\"false\" type=\"BOOL\" help=\"Draw edge type randomly from all loaded types\"/>"
    "        <numerical-ids value=\"false\" type=\"BOOL\" help=\"Remaps alphanumerical IDs of nodes and edges to ensure that all IDs are integers\"/>"
    "        <numerical-ids.node-start value=\"2147483647\" type=\"INT\" help=\"Remaps IDs of nodes to integers starting at INT\"/>"
    "        <numerical-ids.edge-start value=\"2147483647\" type=\"INT\" help=\"Remaps IDs of edges to integers starting at INT\"/>"
    "        <reserved-ids value=\"\" type=\"FILE\" help=\"Ensures that generated ids do not included any of the typed IDs from FILE (sumo-gui selection file format)\"/>"
    "        <geometry.split value=\"false\" synonymes=\"split-geometry\" type=\"BOOL\" help=\"Splits edges across geometry nodes\"/>"
    "        <geometry.remove value=\"false\" synonymes=\"R remove-geometry\" type=\"BOOL\" help=\"Replace nodes which only define edge geometry by geometry points (joins edges)\"/>"
    "        <geometry.remove.keep-edges.explicit value=\"\" type=\"STR[]\" help=\"Ensure that the given list of edges is not modified\"/>"
    "        <geometry.remove.keep-edges.input-file value=\"\" type=\"FILE\" help=\"Ensure that the edges in FILE are not modified (Each id on a single line. Selection files from sumo-gui are also supported)\"/>"
    "        <geometry.remove.min-length value=\"0\" type=\"FLOAT\" help=\"Allow merging edges with differing attributes when their length is below min-length\"/>"
    "        <geometry.remove.width-tolerance value=\"0\" type=\"FLOAT\" help=\"Allow merging edges with differing lane widths if the difference is below FLOAT\"/>"
    "        <geometry.remove.max-junction-size value=\"-1\" type=\"FLOAT\" help=\"Prevent removal of junctions with a size above FLOAT as defined by custom edge endpoints\"/>"
    "        <geometry.max-segment-length value=\"0\" type=\"FLOAT\" help=\"splits geometry to restrict segment length\"/>"
    "        <geometry.max-grade value=\"10\" type=\"FLOAT\" help=\"Warn about edge geometries with a grade in % above FLOAT.\"/>"
    "        <geometry.max-grade.fix value=\"true\" type=\"BOOL\" help=\"Smooth edge geometries with a grade above the warning threshold.\"/>"
    "        <offset.disable-normalization value=\"false\" synonymes=\"disable-normalize-node-positions\" type=\"BOOL\" help=\"Turn off normalizing node positions\"/>"
    "        <offset.x value=\"0\" synonymes=\"x-offset-to-apply\" type=\"FLOAT\" help=\"Adds FLOAT to net x-positions\"/>"
    "        <offset.y value=\"0\" synonymes=\"y-offset-to-apply\" type=\"FLOAT\" help=\"Adds FLOAT to net y-positions\"/>"
    "        <offset.z value=\"0\" type=\"FLOAT\" help=\"Adds FLOAT to net z-positions\"/>"
    "        <flip-y-axis value=\"false\" synonymes=\"flip-y\" type=\"BOOL\" help=\"Flips the y-coordinate along zero\"/>"
    "        <roundabouts.guess value=\"true\" synonymes=\"guess-roundabouts\" type=\"BOOL\" help=\"Enable roundabout-guessing\"/>"
    "        <roundabouts.visibility-distance value=\"9\" type=\"FLOAT\" help=\"Default visibility when approaching a roundabout\"/>"
    "        <opposites.guess value=\"false\" type=\"BOOL\" help=\"Enable guessing of opposite direction lanes usable for overtaking\"/>"
    "        <opposites.guess.fix-lengths value=\"true\" type=\"BOOL\" help=\"Ensure that opposite edges have the same length\"/>"
    "        <fringe.guess value=\"false\" type=\"BOOL\" help=\"Enable guessing of network fringe nodes\"/>"
    "        <fringe.guess.speed-threshold value=\"13.8889\" type=\"FLOAT\" help=\"Guess disconnected edges above the given speed as outer fringe\"/>"
    "        <lefthand value=\"false\" type=\"BOOL\" help=\"Assumes left-hand traffic on the network\"/>"
    "        <edges.join value=\"false\" type=\"BOOL\" help=\"Merges edges which connect the same nodes and are close to each other (recommended for VISSIM import)\"/>"
    "    </processing>"
    "    <building_defaults>"
    "        <default.lanenumber value=\"1\" synonymes=\"L lanenumber\" type=\"INT\" help=\"The default number of lanes in an edge\"/>"
    "        <default.lanewidth value=\"-1\" synonymes=\"lanewidth\" type=\"FLOAT\" help=\"The default width of lanes\"/>"
    "        <default.spreadtype value=\"right\" type=\"STR\" help=\"The default method for computing lane shapes from edge shapes\"/>"
    "        <default.speed value=\"13.89\" synonymes=\"S speed\" type=\"FLOAT\" help=\"The default speed on an edge (in m/s)\"/>"
    "        <default.friction value=\"1\" synonymes=\"friction\" type=\"FLOAT\" help=\"The default friction on an edge\"/>"
    "        <default.priority value=\"-1\" synonymes=\"P priority\" type=\"INT\" help=\"The default priority of an edge\"/>"
    "        <default.type value=\"\" type=\"STR\" help=\"The default edge type\"/>"
    "        <default.sidewalk-width value=\"2\" type=\"FLOAT\" help=\"The default width of added sidewalks\"/>"
    "        <default.bikelane-width value=\"1\" type=\"FLOAT\" help=\"The default width of added bike lanes\"/>"
    "        <default.crossing-width value=\"4\" type=\"FLOAT\" help=\"The default width of a pedestrian crossing\"/>"
    "        <default.crossing-speed value=\"2.78\" type=\"FLOAT\" help=\"The default speed &apos;limit&apos; on a pedestrian crossing (in m/s)\"/>"
    "        <default.walkingarea-speed value=\"2.78\" type=\"FLOAT\" help=\"The default speed &apos;limit&apos; on a pedestrian walkingarea (in m/s)\"/>"
    "        <default.allow value=\"\" type=\"STR\" help=\"The default for allowed vehicle classes\"/>"
    "        <default.disallow value=\"\" type=\"STR\" help=\"The default for disallowed vehicle classes\"/>"
    "        <default.junctions.keep-clear value=\"true\" type=\"BOOL\" help=\"Whether junctions should be kept clear by default\"/>"
    "        <default.junctions.radius value=\"4\" type=\"FLOAT\" help=\"The default turning radius of intersections\"/>"
    "        <default.connection-length value=\"-1\" type=\"FLOAT\" help=\"The default length when overriding connection lengths\"/>"
    "        <default.right-of-way value=\"default\" type=\"STR\" help=\"The default algorithm for computing right of way rules (&apos;default&apos;, &apos;edgePriority&apos;)\"/>"
    "        <default-junction-type value=\"\" synonymes=\"j junctions\" type=\"STR\" help=\"[traffic_light|priority|right_before_left|left_before_right|traffic_light_right_on_red|priority_stop|allway_stop|...] Determines junction type (see wiki/Networks/PlainXML#Node_types)\"/>"
    "    </building_defaults>"
    "    <tls_building>"
    "        <tls.set value=\"\" synonymes=\"explicite-tls\" type=\"STR[]\" help=\"Interprets STR[] as list of junctions to be controlled by TLS\"/>"
    "        <tls.unset value=\"\" synonymes=\"explicite-no-tls\" type=\"STR[]\" help=\"Interprets STR[] as list of junctions to be not controlled by TLS\"/>"
    "        <tls.guess value=\"false\" synonymes=\"guess-tls\" type=\"BOOL\" help=\"Turns on TLS guessing\"/>"
    "        <tls.guess.threshold value=\"69.4444\" type=\"FLOAT\" help=\"Sets minimum value for the sum of all incoming lane speeds when guessing TLS\"/>"
    "        <tls.guess.joining value=\"false\" synonymes=\"tls-guess.joining\" type=\"BOOL\" help=\"Includes node clusters into guess\"/>"
    "        <tls.join value=\"false\" synonymes=\"try-join-tls\" type=\"BOOL\" help=\"Tries to cluster tls-controlled nodes\"/>"
    "        <tls.join-dist value=\"20\" type=\"FLOAT\" help=\"Determines the maximal distance for joining traffic lights (defaults to 20)\"/>"
    "        <tls.join-exclude value=\"\" type=\"STR[]\" help=\"Interprets STR[] as list of tls ids to exclude from joining\"/>"
    "        <tls.uncontrolled-within value=\"false\" type=\"BOOL\" help=\"Do not control edges that lie fully within a joined traffic light. This may cause collisions but allows old traffic light plans to be used\"/>"
    "        <tls.ignore-internal-junction-jam value=\"false\" type=\"BOOL\" help=\"Do not build mutually conflicting response matrix, potentially ignoring vehicles that are stuck at an internal junction when their phase has ended\"/>"
    "        <tls.cycle.time value=\"90\" type=\"INT\" help=\"Use INT as cycle duration\"/>"
    "        <tls.green.time value=\"31\" synonymes=\"traffic-light-green\" type=\"INT\" help=\"Use INT as green phase duration\"/>"
    "        <tls.yellow.min-decel value=\"3\" synonymes=\"D min-decel\" type=\"FLOAT\" help=\"Defines smallest vehicle deceleration\"/>"
    "        <tls.yellow.patch-small value=\"false\" synonymes=\"patch-small-tyellow\" type=\"BOOL\" help=\"Given yellow times are patched even if being too short\"/>"
    "        <tls.yellow.time value=\"-1\" synonymes=\"traffic-light-yellow\" type=\"INT\" help=\"Set INT as fixed time for yellow phase durations\"/>"
    "        <tls.red.time value=\"5\" type=\"INT\" help=\"Set INT as fixed time for red phase duration at traffic lights that do not have a conflicting flow\"/>"
    "        <tls.allred.time value=\"0\" type=\"INT\" help=\"Set INT as fixed time for intermediate red phase after every switch\"/>"
    "        <tls.minor-left.max-speed value=\"19.44\" type=\"FLOAT\" help=\"Use FLOAT as threshold for allowing left-turning vehicles to move in the same phase as oncoming straight-going vehicles\"/>"
    "        <tls.left-green.time value=\"6\" type=\"INT\" help=\"Use INT as green phase duration for left turns (s). Setting this value to 0 disables additional left-turning phases\"/>"
    "        <tls.nema.vehExt value=\"2\" type=\"INT\" help=\"Set INT as fixed time for intermediate vehext phase after every switch\"/>"
    "        <tls.nema.yellow value=\"3\" type=\"INT\" help=\"Set INT as fixed time for intermediate NEMA yelow phase after every switch\"/>"
    "        <tls.nema.red value=\"2\" type=\"INT\" help=\"Set INT as fixed time for intermediate NEMA red phase after every switch\"/>"
    "        <tls.crossing-min.time value=\"4\" type=\"INT\" help=\"Use INT as minimum green duration for pedestrian crossings (s).\"/>"
    "        <tls.crossing-clearance.time value=\"5\" type=\"INT\" help=\"Use INT as clearance time for pedestrian crossings (s).\"/>"
    "        <tls.scramble.time value=\"5\" type=\"INT\" help=\"Use INT as green phase duration for pedestrian scramble phase (s).\"/>"
    "        <tls.half-offset value=\"\" synonymes=\"tl-logics.half-offset\" type=\"STR[]\" help=\"TLSs in STR[] will be shifted by half-phase\"/>"
    "        <tls.quarter-offset value=\"\" synonymes=\"tl-logics.quarter-offset\" type=\"STR[]\" help=\"TLSs in STR[] will be shifted by quarter-phase\"/>"
    "        <tls.default-type value=\"static\" type=\"STR\" help=\"TLSs with unspecified type will use STR as their algorithm\"/>"
    "        <tls.layout value=\"opposites\" type=\"STR\" help=\"Set phase layout four grouping opposite directions or grouping all movements for one incoming edge [&apos;opposites&apos;, &apos;incoming&apos;]\"/>"
    "        <tls.no-mixed value=\"false\" type=\"BOOL\" help=\"Avoid phases with green and red signals for different connections from the same lane\"/>"
    "        <tls.min-dur value=\"5\" type=\"INT\" help=\"Default minimum phase duration for traffic lights with variable phase length\"/>"
    "        <tls.max-dur value=\"50\" type=\"INT\" help=\"Default maximum phase duration for traffic lights with variable phase length\"/>"
    "        <tls.group-signals value=\"false\" type=\"BOOL\" help=\"Assign the same tls link index to connections that share the same states\"/>"
    "        <tls.ungroup-signals value=\"false\" type=\"BOOL\" help=\"Assign a distinct tls link index to every connection\"/>"
    "        <tls.rebuild value=\"false\" type=\"BOOL\" help=\"rebuild all traffic light plans in the network\"/>"
    "        <tls.discard-simple value=\"false\" type=\"BOOL\" help=\"Does not instatiate traffic lights at geometry-like nodes\"/>"
    "    </tls_building>"
    "    <edge_removal>"
    "        <keep-edges.min-speed value=\"-1\" synonymes=\"edges-min-speed\" type=\"FLOAT\" help=\"Only keep edges with speed in meters/second &gt; FLOAT\"/>"
    "        <remove-edges.explicit value=\"\" synonymes=\"remove-edges\" type=\"STR[]\" help=\"Remove edges in STR[]\"/>"
    "        <keep-edges.explicit value=\"\" synonymes=\"keep-edges\" type=\"STR[]\" help=\"Only keep edges in STR[] or those which are kept due to other keep-edges or remove-edges options\"/>"
    "        <keep-edges.input-file value=\"\" type=\"FILE\" help=\"Only keep edges in FILE (Each id on a single line. Selection files from sumo-gui are also supported) or those which are kept due to other keep-edges or remove-edges options\"/>"
    "        <remove-edges.input-file value=\"\" type=\"FILE\" help=\"Remove edges in FILE. (Each id on a single line. Selection files from sumo-gui are also supported)\"/>"
    "        <keep-edges.in-boundary value=\"\" type=\"STR[]\" help=\"Only keep edges which are located within the given boundary (given either as CARTESIAN corner coordinates &lt;xmin,ymin,xmax,ymax&gt; or as polygon &lt;x0,y0,x1,y1,...&gt;)\"/>"
    "        <keep-edges.in-geo-boundary value=\"\" type=\"STR[]\" help=\"Only keep edges which are located within the given boundary (given either as GEODETIC corner coordinates &lt;lon-min,lat-min,lon-max,lat-max&gt; or as polygon &lt;lon0,lat0,lon1,lat1,...&gt;)\"/>"
    "    </edge_removal>"
    "    <unregulated_nodes>"
    "        <keep-nodes-unregulated value=\"false\" synonymes=\"keep-unregulated\" type=\"BOOL\" help=\"All nodes will be unregulated\"/>"
    "        <keep-nodes-unregulated.explicit value=\"\" synonymes=\"keep-unregulated.explicit keep-unregulated.nodes\" type=\"STR[]\" help=\"Do not regulate nodes in STR[]\"/>"
    "        <keep-nodes-unregulated.district-nodes value=\"false\" synonymes=\"keep-unregulated.district-nodes\" type=\"BOOL\" help=\"Do not regulate district nodes\"/>"
    "    </unregulated_nodes>"
    "    <junctions>"
    "        <junctions.right-before-left.speed-threshold value=\"13.6111\" type=\"FLOAT\" help=\"Allow building right-before-left junctions when the incoming edge speeds are below FLOAT (m/s)\"/>"
    "        <junctions.left-before-right value=\"false\" type=\"BOOL\" help=\"Build left-before-right junctions instead of right-before-left junctions\"/>"
    "        <no-internal-links value=\"false\" type=\"BOOL\" help=\"Omits internal links\"/>"
    "        <no-turnarounds value=\"false\" type=\"BOOL\" help=\"Disables building turnarounds\"/>"
    "        <no-turnarounds.tls value=\"false\" synonymes=\"no-tls-turnarounds\" type=\"BOOL\" help=\"Disables building turnarounds at tls-controlled junctions\"/>"
    "        <no-turnarounds.geometry value=\"true\" type=\"BOOL\" help=\"Disables building turnarounds at geometry-like junctions\"/>"
    "        <no-turnarounds.except-deadend value=\"false\" type=\"BOOL\" help=\"Disables building turnarounds except at dead end junctions\"/>"
    "        <no-turnarounds.except-turnlane value=\"false\" type=\"BOOL\" help=\"Disables building turnarounds except at at junctions with a dedicated turning lane\"/>"
    "        <no-turnarounds.fringe value=\"false\" type=\"BOOL\" help=\"Disables building turnarounds at fringe junctions\"/>"
    "        <no-left-connections value=\"false\" type=\"BOOL\" help=\"Disables building connections to left\"/>"
    "        <junctions.join value=\"false\" type=\"BOOL\" help=\"Joins junctions that are close to each other (recommended for OSM import)\"/>"
    "        <junctions.join-dist value=\"10\" type=\"FLOAT\" help=\"Determines the maximal distance for joining junctions (defaults to 10)\"/>"
    "        <junctions.join-same value=\"false\" type=\"BOOL\" help=\"Joins junctions that have the same coordinates even if not connected\"/>"
    "        <max-join-ids value=\"4\" type=\"INT\" help=\"Abbreviate junction or TLS id if it joins more than INT junctions\"/>"
    "        <junctions.corner-detail value=\"5\" type=\"INT\" help=\"Generate INT intermediate points to smooth out intersection corners\"/>"
    "        <junctions.internal-link-detail value=\"5\" type=\"INT\" help=\"Generate INT intermediate points to smooth out lanes within the intersection\"/>"
    "        <junctions.scurve-stretch value=\"0\" type=\"FLOAT\" help=\"Generate longer intersections to allow for smooth s-curves when the number of lanes changes\"/>"
    "        <junctions.join-turns value=\"false\" type=\"BOOL\" help=\"Builds common edges for turning connections with common from- and to-edge. This causes discrepancies between geometrical length and assigned length due to averaging but enables lane-changing while turning\"/>"
    "        <junctions.limit-turn-speed value=\"5.5\" type=\"FLOAT\" help=\"Limits speed on junctions to an average lateral acceleration of at most FLOAT m/s^2)\"/>"
    "        <junctions.limit-turn-speed.min-angle value=\"15\" type=\"FLOAT\" help=\"Do not limit turn speed for angular changes below FLOAT (degrees). The value is subtracted from the geometric angle before computing the turning radius.\"/>"
    "        <junctions.limit-turn-speed.min-angle.railway value=\"35\" type=\"FLOAT\" help=\"Do not limit turn speed for angular changes below FLOAT (degrees) on railway edges. The value is subtracted from the geometric angle before computing the turning radius.\"/>"
    "        <junctions.limit-turn-speed.warn.straight value=\"5\" type=\"FLOAT\" help=\"Warn about turn speed limits that reduce the speed of straight connections by more than FLOAT\"/>"
    "        <junctions.limit-turn-speed.warn.turn value=\"22\" type=\"FLOAT\" help=\"Warn about turn speed limits that reduce the speed of turning connections (no u-turns) by more than FLOAT\"/>"
    "        <junctions.small-radius value=\"1.5\" type=\"FLOAT\" help=\"Default radius for junctions that do not require wide vehicle turns\"/>"
    "        <junctions.higher-speed value=\"false\" type=\"BOOL\" help=\"Use maximum value of incoming and outgoing edge speed on junction instead of average\"/>"
    "        <junctions.minimal-shape value=\"false\" type=\"BOOL\" help=\"Build junctions with minimal shapes (igoring edge overlap)\"/>"
    "        <internal-junctions.vehicle-width value=\"1.8\" type=\"FLOAT\" help=\"Assumed vehicle width for computing internal junction positions\"/>"
    "        <rectangular-lane-cut value=\"false\" type=\"BOOL\" help=\"Forces rectangular cuts between lanes and intersections\"/>"
    "        <check-lane-foes.roundabout value=\"true\" type=\"BOOL\" help=\"Allow driving onto a multi-lane road if there are foes on other lanes (at roundabouts)\"/>"
    "        <check-lane-foes.all value=\"false\" type=\"BOOL\" help=\"Allow driving onto a multi-lane road if there are foes on other lanes (everywhere)\"/>"
    "    </junctions>"
    "    <pedestrian>"
    "        <sidewalks.guess value=\"false\" type=\"BOOL\" help=\"Guess pedestrian sidewalks based on edge speed\"/>"
    "        <sidewalks.guess.max-speed value=\"13.89\" type=\"FLOAT\" help=\"Add sidewalks for edges with a speed equal or below the given limit\"/>"
    "        <sidewalks.guess.min-speed value=\"5.8\" type=\"FLOAT\" help=\"Add sidewalks for edges with a speed above the given limit\"/>"
    "        <sidewalks.guess.from-permissions value=\"false\" type=\"BOOL\" help=\"Add sidewalks for edges that allow pedestrians on any of their lanes regardless of speed\"/>"
    "        <sidewalks.guess.exclude value=\"\" type=\"STR[]\" help=\"Do not guess sidewalks for the given list of edges\"/>"
    "        <crossings.guess value=\"false\" type=\"BOOL\" help=\"Guess pedestrian crossings based on the presence of sidewalks\"/>"
    "        <crossings.guess.speed-threshold value=\"13.89\" type=\"FLOAT\" help=\"At uncontrolled nodes, do not build crossings across edges with a speed above the threshold\"/>"
    "        <walkingareas value=\"false\" type=\"BOOL\" help=\"Always build walking areas even if there are no crossings\"/>"
    "        <walkingareas.join-dist value=\"15\" type=\"FLOAT\" help=\"Do not create a walkingarea between sidewalks that are connected by a pedestrian junction within FLOAT\"/>"
    "    </pedestrian>"
    "    <bicycle>"
    "        <bikelanes.guess value=\"false\" type=\"BOOL\" help=\"Guess bike lanes based on edge speed\"/>"
    "        <bikelanes.guess.max-speed value=\"22.22\" type=\"FLOAT\" help=\"Add bike lanes for edges with a speed equal or below the given limit\"/>"
    "        <bikelanes.guess.min-speed value=\"5.8\" type=\"FLOAT\" help=\"Add bike lanes for edges with a speed above the given limit\"/>"
    "        <bikelanes.guess.from-permissions value=\"false\" type=\"BOOL\" help=\"Add bike lanes for edges that allow bicycles on any of their lanes regardless of speed\"/>"
    "        <bikelanes.guess.exclude value=\"\" type=\"STR[]\" help=\"Do not guess bikelanes for the given list of edges\"/>"
    "    </bicycle>"
    "    <report>"
    "        <verbose value=\"false\" synonymes=\"v\" type=\"BOOL\" help=\"Switches to verbose output\"/>"
    "        <print-options value=\"false\" type=\"BOOL\" help=\"Prints option values before processing\"/>"
    "        <help value=\"false\" synonymes=\"?\" type=\"BOOL\" help=\"Prints this screen or selected topics\"/>"
    "        <version value=\"false\" synonymes=\"V\" type=\"BOOL\" help=\"Prints the current version\"/>"
    "        <xml-validation value=\"local\" synonymes=\"X\" type=\"STR\" help=\"Set schema validation scheme of XML inputs (&quot;never&quot;, &quot;local&quot;, &quot;auto&quot; or &quot;always&quot;)\"/>"
    "        <no-warnings value=\"false\" synonymes=\"W suppress-warnings\" type=\"BOOL\" help=\"Disables output of warnings\"/>"
    "        <aggregate-warnings value=\"-1\" type=\"INT\" help=\"Aggregate warnings of the same type whenever more than INT occur\"/>"
    "        <log value=\"\" synonymes=\"l log-file\" type=\"FILE\" help=\"Writes all messages to FILE (implies verbose)\"/>"
    "        <message-log value=\"\" type=\"FILE\" help=\"Writes all non-error messages to FILE (implies verbose)\"/>"
    "        <error-log value=\"\" type=\"FILE\" help=\"Writes all warnings and errors to FILE\"/>"
    "        <language value=\"C\" type=\"STR\" help=\"Language to use in messages\"/>"
    "    </report>"
    "    <random_number>"
    "        <random value=\"false\" synonymes=\"abs-rand\" type=\"BOOL\" help=\"Initialises the random number generator with the current system time\"/>"
    "        <seed value=\"23423\" synonymes=\"srand\" type=\"INT\" help=\"Initialises the random number generator with the given value\"/>"
    "    </random_number>"
    "</configuration>";

