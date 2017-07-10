static const struct
{
  const char* rubyfit_name;
  const FIT_MANUFACTURER rubyfit_id;
} rubyfit_fit_manufacturer[] =
{
   {"GARMIN", 1},
   {"ZEPHYR", 3},
   {"DAYTON", 4},
   {"IDT", 5},
   {"SRM", 6},
   {"QUARQ", 7},
   {"IBIKE", 8},
   {"SARIS", 9},
   {"SPARK_HK", 10},
   {"TANITA", 11},
   {"ECHOWELL", 12},
   {"DYNASTREAM_OEM", 13},
   {"NAUTILUS", 14},
   {"DYNASTREAM", 15},
   {"TIMEX", 16},
   {"METRIGEAR", 17},
   {"XELIC", 18},
   {"BEURER", 19},
   {"CARDIOSPORT", 20},
   {"A_AND_D", 21},
   {"HMM", 22},
   {"SUUNTO", 23},
   {"THITA_ELEKTRONIK", 24},
   {"GPULSE", 25},
   {"CLEAN_MOBILE", 26},
   {"PEDAL_BRAIN", 27},
   {"PEAKSWARE", 28},
   {"SAXONAR", 29},
   {"LEMOND_FITNESS", 30},
   {"DEXCOM", 31},
   {"WAHOO_FITNESS", 32},
   {"OCTANE_FITNESS", 33},
   {"ARCHINOETICS", 34},
   {"THE_HURT_BOX", 35},
   {"CITIZEN_SYSTEMS", 36},
   {"MAGELLAN", 37},
   {"OSYNCE", 38},
   {"HOLUX", 39},
   {"CONCEPT2", 40},
   {"ONE_GIANT_LEAP", 42},
   {"ACE_SENSOR", 43},
   {"BRIM_BROTHERS", 44},
   {"XPLOVA", 45},
   {"PERCEPTION_DIGITAL", 46},
   {"BF1SYSTEMS", 47},
   {"PIONEER", 48},
   {"SPANTEC", 49},
   {"METALOGICS", 50},
   {"4IIIIS", 51},
   {"SEIKO_EPSON", 52},
   {"SEIKO_EPSON_OEM", 53},
   {"IFOR_POWELL", 54},
   {"MAXWELL_GUIDER", 55},
   {"STAR_TRAC", 56},
   {"BREAKAWAY", 57},
   {"ALATECH_TECHNOLOGY_LTD", 58},
   {"MIO_TECHNOLOGY_EUROPE", 59},
   {"ROTOR", 60},
   {"GEONAUTE", 61},
   {"ID_BIKE", 62},
   {"SPECIALIZED", 63},
   {"WTEK", 64},
   {"PHYSICAL_ENTERPRISES", 65},
   {"NORTH_POLE_ENGINEERING", 66},
   {"BKOOL", 67},
   {"CATEYE", 68},
   {"STAGES_CYCLING", 69},
   {"SIGMASPORT", 70},
   {"TOMTOM", 71},
   {"PERIPEDAL", 72},
   {"WATTBIKE", 73},
   {"MOXY", 76},
   {"CICLOSPORT", 77},
   {"POWERBAHN", 78},
   {"ACORN_PROJECTS_APS", 79},
   {"LIFEBEAM", 80},
   {"BONTRAGER", 81},
   {"WELLGO", 82},
   {"SCOSCHE", 83},
   {"MAGURA", 84},
   {"WOODWAY", 85},
   {"ELITE", 86},
   {"NIELSEN_KELLERMAN", 87},
   {"DK_CITY", 88},
   {"TACX", 89},
   {"DIRECTION_TECHNOLOGY", 90},
   {"MAGTONIC", 91},
   {"1PARTCARBON", 92},
   {"INSIDE_RIDE_TECHNOLOGIES", 93},
   {"SOUND_OF_MOTION", 94},
   {"STRYD", 95},
   {"MIPULSE", 97},
   {"BSX_ATHLETICS", 98},
   {"LOOK", 99},
   {"CAMPAGNOLO_SRL", 100},
   {"BODY_BIKE_SMART", 101},
   {"PRAXISWORKS", 102},
   {"COSINUSS", 105},
   {"FITCARE", 106},
   {"MAGENE", 107},
   {"GIANT_MANUFACTURING_CO", 108},
   {"SALUTRON", 110},
   {"TECHNOGYM", 111},
   {"BRYTON_SENSORS", 112},
   {"LATITUDE_LIMITED", 113},
   {"DEVELOPMENT", 255},
   {"HEALTHANDLIFE", 257},
   {"LEZYNE", 258},
   {"SCRIBE_LABS", 259},
   {"ZWIFT", 260},
   {"WATTEAM", 261},
   {"RECON", 262},
   {"FAVERO_ELECTRONICS", 263},
   {"DYNOVELO", 264},
   {"STRAVA", 265},
   {"BRYTON", 267},
   {"SRAM", 268},
   {"SPIVI", 271},
   {"MIO_MAGELLAN", 272},
   {"EVESPORTS", 273},
   {"SENSITIVUS_GAUGE", 274},
   {"PODOON", 275},
   {"LIFE_TIME_FITNESS", 276},
   {"MINOURA", 278},
   {"ACTIGRAPHCORP", 5759},
};

static const struct
{
  const char* rubyfit_name;
  const FIT_GARMIN_PRODUCT rubyfit_id;
} rubyfit_fit_garmin_product[] =
{
   {"HRM1", 1},
   {"AXB01", 3},
   {"AXB02", 4},
   {"HRM2SS", 5},
   {"DSI_ALF02", 6},
   {"HRM3SS", 7},
   {"FR301_CHINA", 473},
   {"FR301_JAPAN", 474},
   {"FR301_KOREA", 475},
   {"FR301_TAIWAN", 494},
   {"FR405_JAPAN", 987},
   {"DSI_ALF01", 1011},
   {"EDGE500", 1036},
   {"EDGE800", 1169},
   {"EDGE500_TAIWAN", 1199},
   {"EDGE500_JAPAN", 1213},
   {"CHIRP", 1253},
   {"FR110_JAPAN", 1274},
   {"EDGE200", 1325},
   {"FR910XT", 1328},
   {"EDGE800_TAIWAN", 1333},
   {"EDGE800_JAPAN", 1334},
   {"ALF04", 1341},
   {"FR610", 1345},
   {"FR210_JAPAN", 1360},
   {"VECTOR_SS", 1380},
   {"VECTOR_CP", 1381},
   {"EDGE800_CHINA", 1386},
   {"EDGE500_CHINA", 1387},
   {"FR610_JAPAN", 1410},
   {"EDGE500_KOREA", 1422},
   {"FR70", 1436},
   {"FR310XT_4T", 1446},
   {"AMX", 1461},
   {"FR10", 1482},
   {"EDGE800_KOREA", 1497},
   {"SWIM", 1499},
   {"FR910XT_CHINA", 1537},
   {"FENIX", 1551},
   {"EDGE200_TAIWAN", 1555},
   {"EDGE510", 1561},
   {"EDGE810", 1567},
   {"TEMPE", 1570},
   {"FR910XT_JAPAN", 1600},
   {"FR620", 1623},
   {"FR220", 1632},
   {"FR910XT_KOREA", 1664},
   {"FR10_JAPAN", 1688},
   {"EDGE810_JAPAN", 1721},
   {"VIRB_ELITE", 1735},
   {"EDGE510_JAPAN", 1742},
   {"HRM_TRI", 1743},
   {"HRM_RUN", 1752},
   {"FR920XT", 1765},
   {"EDGE510_ASIA", 1821},
   {"EDGE810_CHINA", 1822},
   {"EDGE810_TAIWAN", 1823},
   {"EDGE1000", 1836},
   {"VIVO_FIT", 1837},
   {"VIRB_REMOTE", 1853},
   {"VIVO_KI", 1885},
   {"FR15", 1903},
   {"VIVO_ACTIVE", 1907},
   {"EDGE510_KOREA", 1918},
   {"FR620_JAPAN", 1928},
   {"FR620_CHINA", 1929},
   {"FR220_JAPAN", 1930},
   {"FR220_CHINA", 1931},
   {"APPROACH_S6", 1936},
   {"VIVO_SMART", 1956},
   {"FENIX2", 1967},
   {"EPIX", 1988},
   {"FENIX3", 2050},
   {"EDGE1000_TAIWAN", 2052},
   {"EDGE1000_JAPAN", 2053},
   {"FR15_JAPAN", 2061},
   {"EDGE520", 2067},
   {"EDGE1000_CHINA", 2070},
   {"FR620_RUSSIA", 2072},
   {"FR220_RUSSIA", 2073},
   {"VECTOR_S", 2079},
   {"EDGE1000_KOREA", 2100},
   {"FR920XT_TAIWAN", 2130},
   {"FR920XT_CHINA", 2131},
   {"FR920XT_JAPAN", 2132},
   {"VIRBX", 2134},
   {"VIVO_SMART_APAC", 2135},
   {"ETREX_TOUCH", 2140},
   {"EDGE25", 2147},
   {"FR25", 2148},
   {"VIVO_FIT2", 2150},
   {"FR225", 2153},
   {"FR630", 2156},
   {"FR230", 2157},
   {"FR735XT", 2158},
   {"VIVO_ACTIVE_APAC", 2160},
   {"VECTOR_2", 2161},
   {"VECTOR_2S", 2162},
   {"VIRBXE", 2172},
   {"FR620_TAIWAN", 2173},
   {"FR220_TAIWAN", 2174},
   {"TRUSWING", 2175},
   {"FENIX3_CHINA", 2188},
   {"FENIX3_TWN", 2189},
   {"VARIA_HEADLIGHT", 2192},
   {"VARIA_TAILLIGHT_OLD", 2193},
   {"EDGE_EXPLORE_1000", 2204},
   {"FR225_ASIA", 2219},
   {"VARIA_RADAR_TAILLIGHT", 2225},
   {"VARIA_RADAR_DISPLAY", 2226},
   {"EDGE20", 2238},
   {"D2_BRAVO", 2262},
   {"APPROACH_S20", 2266},
   {"VARIA_REMOTE", 2276},
   {"HRM4_RUN", 2327},
   {"VIVO_ACTIVE_HR", 2337},
   {"VIVO_SMART_GPS_HR", 2347},
   {"VIVO_SMART_HR", 2348},
   {"VIVO_MOVE", 2368},
   {"VARIA_VISION", 2398},
   {"VIVO_FIT3", 2406},
   {"FENIX3_HR", 2413},
   {"VIRB_ULTRA_30", 2417},
   {"INDEX_SMART_SCALE", 2429},
   {"FR235", 2431},
   {"FENIX3_CHRONOS", 2432},
   {"OREGON7XX", 2441},
   {"RINO7XX", 2444},
   {"NAUTIX", 2496},
   {"EDGE_820", 2530},
   {"EDGE_EXPLORE_820", 2531},
   {"FENIX5S", 2544},
   {"D2_BRAVO_TITANIUM", 2547},
   {"RUNNING_DYNAMICS_POD", 2593},
   {"FENIX5X", 2604},
   {"VIVO_FIT_JR", 2606},
   {"FR935", 2691},
   {"FENIX5", 2697},
   {"EDGE_REMOTE", 10014},
   {"TRAINING_CENTER", 20119},
   {"CONNECTIQ_SIMULATOR", 65531},
   {"ANDROID_ANTPLUS_PLUGIN", 65532},
};

static const struct
{
  const char* rubyfit_name;
  const FIT_ANTPLUS_DEVICE_TYPE rubyfit_id;
} rubyfit_fit_antplus_device_type[] =
{
   {"ANTFS", 1},
   {"BIKE_POWER", 11},
   {"ENVIRONMENT_SENSOR_LEGACY", 12},
   {"MULTI_SPORT_SPEED_DISTANCE", 15},
   {"CONTROL", 16},
   {"FITNESS_EQUIPMENT", 17},
   {"BLOOD_PRESSURE", 18},
   {"GEOCACHE_NODE", 19},
   {"LIGHT_ELECTRIC_VEHICLE", 20},
   {"ENV_SENSOR", 25},
   {"RACQUET", 26},
   {"CONTROL_HUB", 27},
   {"MUSCLE_OXYGEN", 31},
   {"BIKE_LIGHT_MAIN", 35},
   {"BIKE_LIGHT_SHARED", 36},
   {"EXD", 38},
   {"BIKE_RADAR", 40},
   {"WEIGHT_SCALE", 119},
   {"HEART_RATE", 120},
   {"BIKE_SPEED_CADENCE", 121},
   {"BIKE_CADENCE", 122},
   {"BIKE_SPEED", 123},
   {"STRIDE_SPEED_DISTANCE", 124},
};

static const struct
{
  const char* rubyfit_name;
  const FIT_BATTERY_STATUS rubyfit_id;
} rubyfit_fit_battery_status[] =
{
   {"NEW", 1},
   {"GOOD", 2},
   {"OK", 3},
   {"LOW", 4},
   {"CRITICAL", 5},
   {"CHARGING", 6},
   {"UNKNOWN", 7},
};

static const struct
{
  const char* rubyfit_name;
  const FIT_SPORT rubyfit_id;
} rubyfit_fit_sport[] =
{
   {"GENERIC", 0},
   {"RUNNING", 1},
   {"CYCLING", 2},
   {"FITNESS_EQUIPMENT", 4},
   {"SWIMMING", 5},
   {"BASKETBALL", 6},
   {"SOCCER", 7},
   {"TENNIS", 8},
   {"AMERICAN_FOOTBALL", 9},
   {"TRAINING", 10},
   {"WALKING", 11},
   {"CROSS_COUNTRY_SKIING", 12},
   {"ALPINE_SKIING", 13},
   {"SNOWBOARDING", 14},
   {"ROWING", 15},
   {"MOUNTAINEERING", 16},
   {"HIKING", 17},
   {"MULTISPORT", 18},
   {"PADDLING", 19},
   {"FLYING", 20},
   {"E_BIKING", 21},
   {"MOTORCYCLING", 22},
   {"BOATING", 23},
   {"DRIVING", 24},
   {"GOLF", 25},
   {"HANG_GLIDING", 26},
   {"HORSEBACK_RIDING", 27},
   {"HUNTING", 28},
   {"FISHING", 29},
   {"INLINE_SKATING", 30},
   {"ROCK_CLIMBING", 31},
   {"SAILING", 32},
   {"ICE_SKATING", 33},
   {"SKY_DIVING", 34},
   {"SNOWSHOEING", 35},
   {"SNOWMOBILING", 36},
   {"STAND_UP_PADDLEBOARDING", 37},
   {"SURFING", 38},
   {"WAKEBOARDING", 39},
   {"WATER_SKIING", 40},
   {"KAYAKING", 41},
   {"RAFTING", 42},
   {"WINDSURFING", 43},
   {"KITESURFING", 44},
   {"TACTICAL", 45},
   {"JUMPMASTER", 46},
   {"BOXING", 47},
   {"FLOOR_CLIMBING", 48},
};

static const struct
{
  const char* rubyfit_name;
  const FIT_SUB_SPORT rubyfit_id;
} rubyfit_fit_sub_sport[] =
{
   {"GENERIC", 0},
   {"NAVIGATE", 50},
   {"TRACK_ME", 51},
   {"MAP", 52},
   {"ALL", 254},
};

