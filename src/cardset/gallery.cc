#include "gallery.h"

umap<RSID, Card *> GALLERY;
umap<RSID, Card *> COLLECTIBLE;
vec<RSID> DRAVEN = {1, 130};
vec<RSID> PORO_WITH_1_COST = {67, 119, 125, 143, 270, 370};

void init_gallery_() {
  GALLERY[0] = new DisciplineOfFortitude0000;
  GALLERY[1] = new Draven0001;
  GALLERY[2] = new Dawnspeakers0002;
  GALLERY[3] = new YusariTheSlayer0003;
  GALLERY[4] = new JinxsGetExcited0004;
  GALLERY[5] = new GlacialStorm0005;
  GALLERY[6] = new Teemo0006;
  GALLERY[7] = new Lucian0007;
  GALLERY[8] = new Yasuo0008;
  GALLERY[9] = new Heimerdinger0009;
  GALLERY[10] = new KeeperOfMasks0010;
  GALLERY[11] = new TryndameresBattleFury0011;
  GALLERY[12] = new AugmentedExperimenter0012;
  GALLERY[13] = new Mobilize0013;
  GALLERY[14] = new CullingStrike0014;
  GALLERY[15] = new ParadeElectrorig0015;
  GALLERY[16] = new Heimerdinger0016;
  GALLERY[17] = new PhantomPrankster0017;
  GALLERY[18] = new LuxsPrismaticBarrier0018;
  GALLERY[19] = new AcademyProdigy0019;
  GALLERY[20] = new HeraldOfSpring0020;
  GALLERY[21] = new FaeBladetwirler0021;
  GALLERY[22] = new CrimsonCurator0022;
  GALLERY[23] = new IcebornLegacy0023;
  GALLERY[24] = new Ghost0024;
  GALLERY[25] = new OmenHawk0025;
  GALLERY[26] = new HarshWinds0026;
  GALLERY[27] = new GlimpseBeyond0027;
  GALLERY[28] = new ElisesCrawlingSensation0028;
  GALLERY[29] = new Braum0029;
  GALLERY[30] = new AncientCrocolith0030;
  GALLERY[31] = new SwiftwingLancer0031;
  GALLERY[32] = new SoulShepherd0032;
  GALLERY[33] = new EagerApprentice0033;
  GALLERY[34] = new Darius0034;
  GALLERY[35] = new KinkouLifeblade0035;
  GALLERY[36] = new RimefangWolf0036;
  GALLERY[37] = new VanguardDefender0037;
  GALLERY[38] = new Battlesmith0038;
  GALLERY[39] = new TiannaCrownguard0039;
  GALLERY[40] = new ArachnoidHost0040;
  GALLERY[41] = new Karma0041;
  GALLERY[42] = new Garen0042;
  GALLERY[43] = new StandAlone0043;
  GALLERY[44] = new Jinx0044;
  GALLERY[45] = new DecisiveManeuver0045;
  GALLERY[46] = new Fiora0046;
  GALLERY[47] = new PuffcapPeddler0047;
  GALLERY[48] = new BrightsteelFormation0048;
  GALLERY[49] = new SuperMegaDeathRocket0049;
  GALLERY[50] = new Elise0050;
  GALLERY[51] = new RelentlessPursuit0051;
  GALLERY[52] = new MagnumOpus0052;
  GALLERY[53] = new ParalyzingBite0053;
  GALLERY[54] = new Transfusion0054;
  GALLERY[55] = new OnslaughtOfShadows0055;
  GALLERY[56] = new LegionSaboteur0056;
  GALLERY[57] = new Hecarim0057;
  GALLERY[58] = new ScrapScuttler0058;
  GALLERY[59] = new Zed0059;
  GALLERY[60] = new Vilemaw0060;
  GALLERY[61] = new GreengladeElder0061;
  GALLERY[62] = new Darius0062;
  GALLERY[63] = new LuciansRelentlessPursuit0063;
  GALLERY[64] = new JuryRig0064;
  GALLERY[65] = new Detain0065;
  GALLERY[66] = new AvarosanMarksman0066;
  GALLERY[67] = new NimblePoro0067;
  GALLERY[68] = new ScarthaneSteffen0068;
  GALLERY[69] = new NavoriConspirator0069;
  GALLERY[70] = new JubilantPoro0070;
  GALLERY[71] = new Shatter0071;
  GALLERY[72] = new CrystalArrow0072;
  GALLERY[73] = new ArachnoidSentry0073;
  GALLERY[74] = new RisingSpellForce0074;
  GALLERY[75] = new Mk3FloorBGone0075;
  GALLERY[76] = new JeweledProtector0076;
  GALLERY[77] = new CursedKeeper0077;
  GALLERY[78] = new Undermine0078;
  GALLERY[79] = new Impersonate0079;
  GALLERY[80] = new BrothersBond0080;
  GALLERY[81] = new HouseSpider0081;
  GALLERY[82] = new Judgment0082;
  GALLERY[83] = new UsedCaskSalesman0083;
  GALLERY[84] = new SumpDredger0084;
  GALLERY[85] = new Mk2EvolutionTurret0085;
  GALLERY[86] = new ScribeOfSorrows0086;
  GALLERY[87] = new TeemosMushroomCloud0087;
  GALLERY[88] = new Kalista0088;
  GALLERY[89] = new Entreat0089;
  GALLERY[90] = new NightHarvest0090;
  GALLERY[91] = new Kalista0091;
  GALLERY[92] = new SownSeeds0092;
  GALLERY[93] = new Ezreal0093;
  GALLERY[94] = new UnscarredReaver0094;
  GALLERY[95] = new DeathMark0095;
  GALLERY[96] = new JaeMedarda0096;
  GALLERY[97] = new ShadyCharacter0097;
  GALLERY[98] = new ShadowFlare0098;
  GALLERY[99] = new CorinaVeraza0099;
  GALLERY[100] = new CatalystOfAeons0100;
  GALLERY[101] = new DravensWhirlingDeath0101;
  GALLERY[102] = new CrimsonDisciple0102;
  GALLERY[103] = new EnragedYeti0103;
  GALLERY[104] = new MushroomCloud0104;
  GALLERY[105] = new ArenaBattlecaster0105;
  GALLERY[106] = new ZauniteUrchin0106;
  GALLERY[107] = new InspiringMentor0107;
  GALLERY[108] = new RecklessResearch0108;
  GALLERY[109] = new BackAlleyBarkeep0109;
  GALLERY[110] = new Spiderling0110;
  GALLERY[111] = new Scuttlegeist0111;
  GALLERY[112] = new Ashe0112;
  GALLERY[113] = new LaurentDuelist0113;
  GALLERY[114] = new TrueshotBarrage0114;
  GALLERY[115] = new MageseekerInciter0115;
  GALLERY[116] = new DawnAndDusk0116;
  GALLERY[117] = new SpiderQueenElise0117;
  GALLERY[118] = new VanguardBannerman0118;
  GALLERY[119] = new DaringPoro0119;
  GALLERY[120] = new LegionMarauder0120;
  GALLERY[121] = new Avalanche0121;
  GALLERY[122] = new CounterfeitCopies0122;
  GALLERY[123] = new ScaledSnapper0123;
  GALLERY[124] = new YetiYearling0124;
  GALLERY[125] = new SinisterPoro0125;
  GALLERY[126] = new CrowdFavorite0126;
  GALLERY[127] = new ShadowAssassin0127;
  GALLERY[128] = new ScaledSnapper0128;
  GALLERY[129] = new BoomcrewRookie0129;
  GALLERY[130] = new Draven0130;
  GALLERY[131] = new MysticShot0131;
  GALLERY[132] = new AniviasHarshWinds0132;
  GALLERY[133] = new WarChefs0133;
  GALLERY[134] = new Ezreal0134;
  GALLERY[135] = new ScaledSnapper0135;
  GALLERY[136] = new EscapedAbomination0136;
  GALLERY[137] = new THex0137;
  GALLERY[138] = new Reckoning0138;
  GALLERY[139] = new HextechTransmogulator0139;
  GALLERY[140] = new DariussDecimate0140;
  GALLERY[141] = new Thresh0141;
  GALLERY[142] = new Lucian0142;
  GALLERY[143] = new PluckyPoro0143;
  GALLERY[144] = new GarensJudgment0144;
  GALLERY[145] = new CommanderLedros0145;
  GALLERY[146] = new MidenstokkeHenchmen0146;
  GALLERY[147] = new TheHarrowing0147;
  GALLERY[148] = new TheUndying0148;
  GALLERY[149] = new Sabotage0149;
  GALLERY[150] = new StalkingWolf0150;
  GALLERY[151] = new Shen0151;
  GALLERY[152] = new LaurentChevalier0152;
  GALLERY[153] = new AbsorbSoul0153;
  GALLERY[154] = new AvarosanOutriders0154;
  GALLERY[155] = new CrawlingSensation0155;
  GALLERY[156] = new Braum0156;
  GALLERY[157] = new ShadowFiend0157;
  GALLERY[158] = new StatikkShock0158;
  GALLERY[159] = new SpectralRider0159;
  GALLERY[160] = new TorturedProdigy0160;
  GALLERY[161] = new AlphaWildclaw0161;
  GALLERY[162] = new IntimidatingRoar0162;
  GALLERY[163] = new CrimsonPact0163;
  GALLERY[164] = new GoldenCrushbot0164;
  GALLERY[165] = new LegionVeteran0165;
  GALLERY[166] = new BrittleSteel0166;
  GALLERY[167] = new ShirazaTheBlade0167;
  GALLERY[168] = new ObliviousIslander0168;
  GALLERY[169] = new ThreshsTheBox0169;
  GALLERY[170] = new Rummage0170;
  GALLERY[171] = new Katarina0171;
  GALLERY[172] = new ScarmotherVrynna0172;
  GALLERY[173] = new ScrapdashAssembly0173;
  GALLERY[174] = new IronHarbinger0174;
  GALLERY[175] = new BlackSpear0175;
  GALLERY[176] = new HaplessAristocrat0176;
  GALLERY[177] = new Rush0177;
  GALLERY[178] = new HeimerdingersProgressDay0178;
  GALLERY[179] = new WintersBreath0179;
  GALLERY[180] = new Remembrance0180;
  GALLERY[181] = new StirredSpirits0181;
  GALLERY[182] = new ThermogenicBeam0182;
  GALLERY[183] = new Fiora0183;
  GALLERY[184] = new AvarosanHearthguard0184;
  GALLERY[185] = new CaptainFarron0185;
  GALLERY[186] = new PoroHerder0186;
  GALLERY[187] = new Lux0187;
  GALLERY[188] = new LegionRearguard0188;
  GALLERY[189] = new MageseekerConservator0189;
  GALLERY[190] = new UnleashedSpirit0190;
  GALLERY[191] = new VanguardFirstblade0191;
  GALLERY[192] = new BladesEdge0192;
  GALLERY[193] = new SilverwingScout0193;
  GALLERY[194] = new StaggeringStrikes0194;
  GALLERY[195] = new KalistasBlackSpear0195;
  GALLERY[196] = new LegionGrenadier0196;
  GALLERY[197] = new Decimate0197;
  GALLERY[198] = new ZephyrSage0198;
  GALLERY[199] = new FrenziedSkitterer0199;
  GALLERY[200] = new LegionGeneral0200;
  GALLERY[201] = new LegionDrummer0201;
  GALLERY[202] = new SilverwingVanguard0202;
  GALLERY[203] = new Vengeance0203;
  GALLERY[204] = new LaurentProtege0204;
  GALLERY[205] = new GreengladeLookout0205;
  GALLERY[206] = new AstuteAcademic0206;
  GALLERY[207] = new Teemo0207;
  GALLERY[208] = new Mk5RocketBlaster0208;
  GALLERY[209] = new UnlicensedInnovation0209;
  GALLERY[210] = new Succession0210;
  GALLERY[211] = new ArenaBookie0211;
  GALLERY[212] = new WhirlingDeath0212;
  GALLERY[213] = new VanguardLookout0213;
  GALLERY[214] = new ScarmaidenReaver0214;
  GALLERY[215] = new Purify0215;
  GALLERY[216] = new TarkazsFury0216;
  GALLERY[217] = new HeartOfTheFluft0217;
  GALLERY[218] = new SnowHare0218;
  GALLERY[219] = new WyrdingStones0219;
  GALLERY[220] = new TheBox0220;
  GALLERY[221] = new FinalSpark0221;
  GALLERY[222] = new MinahSwiftfoot0222;
  GALLERY[223] = new Vision0223;
  GALLERY[224] = new IcevaleArcher0224;
  GALLERY[225] = new SumpsnipeScavenger0225;
  GALLERY[226] = new ElixirOfIron0226;
  GALLERY[227] = new KindlyTavernkeeper0227;
  GALLERY[228] = new IllegalContraption0228;
  GALLERY[229] = new TrifarianShieldbreaker0229;
  GALLERY[230] = new Tryndamere0230;
  GALLERY[231] = new Ashe0231;
  GALLERY[232] = new AcceleratedPurrsuit0232;
  GALLERY[233] = new Yasuo0233;
  GALLERY[234] = new RitualOfRenewal0234;
  GALLERY[235] = new DauntlessVanguard0235;
  GALLERY[236] = new StandUnited0236;
  GALLERY[237] = new TwinDisciplines0237;
  GALLERY[238] = new Balesight0238;
  GALLERY[239] = new MageseekerPersuader0239;
  GALLERY[240] = new MinotaurReckoner0240;
  GALLERY[241] = new BatteringRam0241;
  GALLERY[242] = new VanguardSquire0242;
  GALLERY[243] = new RavenousButcher0243;
  GALLERY[244] = new ZedsShadowshift0244;
  GALLERY[245] = new HecarimsOnslaughtOfShadows0245;
  GALLERY[246] = new Riposte0246;
  GALLERY[247] = new Mk7ArmoredStomper0247;
  GALLERY[248] = new FreshOfferings0248;
  GALLERY[249] = new AssemblyBot0249;
  GALLERY[250] = new WindfarerHatchling0250;
  GALLERY[251] = new PoroSnax0251;
  GALLERY[252] = new CrimsonAristocrat0252;
  GALLERY[253] = new Jinx0253;
  GALLERY[254] = new BattleFury0254;
  GALLERY[255] = new Reinforcements0255;
  GALLERY[256] = new ChainVest0256;
  GALLERY[257] = new Zed0257;
  GALLERY[258] = new KatarinasDeathLotus0258;
  GALLERY[259] = new TrifarianHopeful0259;
  GALLERY[260] = new BraumsTakeHeart0260;
  GALLERY[261] = new Mistwraith0261;
  GALLERY[262] = new ElixirOfWrath0262;
  GALLERY[263] = new SilentShadowseer0263;
  GALLERY[264] = new HauntedRelic0264;
  GALLERY[265] = new MarkOfTheIsles0265;
  GALLERY[266] = new Shen0266;
  GALLERY[267] = new PreciousPet0267;
  GALLERY[268] = new GraspOfTheUndying0268;
  GALLERY[269] = new ChempunkShredder0269;
  GALLERY[270] = new LonelyPoro0270;
  GALLERY[271] = new Karma0271;
  GALLERY[272] = new Possession0272;
  GALLERY[273] = new RadiantGuardian0273;
  GALLERY[274] = new EminentBenefactor0274;
  GALLERY[275] = new DeathLotus0275;
  GALLERY[276] = new Mk0WindupShredder0276;
  GALLERY[277] = new CloudDrinker0277;
  GALLERY[278] = new LaurentBladekeeper0278;
  GALLERY[279] = new WarmothersCall0279;
  GALLERY[280] = new PurrsuitOfPerfection0280;
  GALLERY[281] = new BladeOfLedros0281;
  GALLERY[282] = new Funsmith0282;
  GALLERY[283] = new SplinterSoul0283;
  GALLERY[284] = new Atrocity0284;
  GALLERY[285] = new YasuosSteelTempest0285;
  GALLERY[286] = new Recall0286;
  GALLERY[287] = new LivingShadow0287;
  GALLERY[288] = new WillOfIonia0288;
  GALLERY[289] = new FatalStrike0289;
  GALLERY[290] = new FeralMystic0290;
  GALLERY[291] = new SkywardStrikes0291;
  GALLERY[292] = new NavoriBladescout0292;
  GALLERY[293] = new IcyYeti0293;
  GALLERY[294] = new Shunpo0294;
  GALLERY[295] = new PoisonPuffcap0295;
  GALLERY[296] = new FaceMelter0296;
  GALLERY[297] = new MistsCall0297;
  GALLERY[298] = new Catastrophe0298;
  GALLERY[299] = new TrifarianAssessor0299;
  GALLERY[300] = new PrismaticBarrier0300;
  GALLERY[301] = new Vladimir0301;
  GALLERY[302] = new ProfessorVonYipp0302;
  GALLERY[303] = new Mk1Wrenchbot0303;
  GALLERY[304] = new Tryndamere0304;
  GALLERY[305] = new BullElnuk0305;
  GALLERY[306] = new BroodAwakening0306;
  GALLERY[307] = new PackMentality0307;
  GALLERY[308] = new UnstableVoltician0308;
  GALLERY[309] = new Wraithcaller0309;
  GALLERY[310] = new SparringStudent0310;
  GALLERY[311] = new AshesFlashFreeze0311;
  GALLERY[312] = new TarkazTheTribeless0312;
  GALLERY[313] = new GreengladeDuo0313;
  GALLERY[314] = new BloodForBlood0314;
  GALLERY[315] = new KinkouWayfinder0315;
  GALLERY[316] = new SingleCombat0316;
  GALLERY[317] = new Katarina0317;
  GALLERY[318] = new SharkChariot0318;
  GALLERY[319] = new AvarosanTrapper0319;
  GALLERY[320] = new ProgressDay0320;
  GALLERY[321] = new Yusari0321;
  GALLERY[322] = new TroopOfElnuks0322;
  GALLERY[323] = new HealthPotion0323;
  GALLERY[324] = new ChroniclerOfRuin0324;
  GALLERY[325] = new PlazaGuardian0325;
  GALLERY[326] = new RenShadowblade0326;
  GALLERY[327] = new Anivia0327;
  GALLERY[328] = new EtherealRemitter0328;
  GALLERY[329] = new ClumpOfWhumps0329;
  GALLERY[330] = new EmeraldAwakener0330;
  GALLERY[331] = new TakeHeart0331;
  GALLERY[332] = new SavageReckoner0332;
  GALLERY[333] = new EnGarde0333;
  GALLERY[334] = new SpectralMatron0334;
  GALLERY[335] = new RimetuskShaman0335;
  GALLERY[336] = new Deny0336;
  GALLERY[337] = new TrifarianGloryseeker0337;
  GALLERY[338] = new FlameChompers0338;
  GALLERY[339] = new AncientYeti0339;
  GALLERY[340] = new VanguardSergeant0340;
  GALLERY[341] = new Bullseye0341;
  GALLERY[342] = new MightyPoro0342;
  GALLERY[343] = new NavoriBrigand0343;
  GALLERY[344] = new ArachnoidHorror0344;
  GALLERY[345] = new GetExcited0345;
  GALLERY[346] = new Mk6Stormlobber0346;
  GALLERY[347] = new SennaSentinelOfLight0347;
  GALLERY[348] = new BloodswornPledge0348;
  GALLERY[349] = new NavoriHighwayman0349;
  GALLERY[350] = new TheEmpyrean0350;
  GALLERY[351] = new BackToBack0351;
  GALLERY[352] = new Vladimir0352;
  GALLERY[353] = new FlashOfBrilliance0353;
  GALLERY[354] = new EzrealsMysticShot0354;
  GALLERY[355] = new ForDemacia0355;
  GALLERY[356] = new BasiliskRider0356;
  GALLERY[357] = new GreengladeCaretaker0357;
  GALLERY[358] = new RadiantStrike0358;
  GALLERY[359] = new InsightOfAges0359;
  GALLERY[360] = new TheRekindler0360;
  GALLERY[361] = new FlashFreeze0361;
  GALLERY[362] = new ChumpWhump0362;
  GALLERY[363] = new Hecarim0363;
  GALLERY[364] = new BrightsteelProtector0364;
  GALLERY[365] = new WitheringWail0365;
  GALLERY[366] = new AmateurAeronaut0366;
  GALLERY[367] = new ShensStandUnited0367;
  GALLERY[368] = new RhasaTheSunderer0368;
  GALLERY[369] = new Anivia0369;
  GALLERY[370] = new AffectionatePoro0370;
  GALLERY[371] = new IntrepidMariner0371;
  GALLERY[372] = new Lux0372;
  GALLERY[373] = new FiorasRiposte0373;
  GALLERY[374] = new DravensBiggestFan0374;
  GALLERY[375] = new GlacialStorm0375;
  GALLERY[376] = new RecklessTrifarian0376;
  GALLERY[377] = new DarkwaterScourge0377;
  GALLERY[378] = new SteelTempest0378;
  GALLERY[379] = new CithriaOfCloudfield0379;
  GALLERY[380] = new VladimirsTransfusion0380;
  GALLERY[381] = new FluftOfPoros0381;
  GALLERY[382] = new FleetfeatherTracker0382;
  GALLERY[383] = new SpiritsRefuge0383;
  GALLERY[384] = new Mk4ApexTurret0384;
  GALLERY[385] = new Eggnivia0385;
  GALLERY[386] = new SumpworksMap0386;
  GALLERY[387] = new Might0387;
  GALLERY[388] = new VanguardCavalry0388;
  GALLERY[389] = new Rivershaper0389;
  GALLERY[390] = new ChempunkPickpocket0390;
  GALLERY[391] = new StarlitSeer0391;
  GALLERY[392] = new SolitaryMonk0392;
  GALLERY[393] = new SheWhoWanders0393;
  GALLERY[394] = new TallTales0394;
  GALLERY[395] = new NoxianGuillotine0395;
  GALLERY[396] = new CausticCask0396;
  GALLERY[397] = new WardensPrey0397;
  GALLERY[398] = new DisciplineOfForce0398;
  GALLERY[399] = new VanguardRedeemer0399;
  GALLERY[400] = new KarmasInsightOfAges0400;
  GALLERY[401] = new Shadowshift0401;
  GALLERY[402] = new CrimsonAwakener0402;
  GALLERY[403] = new MageseekerInvestigator0403;
  GALLERY[404] = new KatoTheArm0404;
  GALLERY[405] = new VileFeast0405;
  GALLERY[406] = new TheyWhoEndure0406;
  GALLERY[407] = new CithriaTheBold0407;
  GALLERY[408] = new YoneWindchaser0408;
  GALLERY[409] = new KiGuardian0409;
  GALLERY[410] = new RedoubledValor0410;
  GALLERY[411] = new TheRuination0411;
  GALLERY[412] = new Thresh0412;
  GALLERY[413] = new Guile0413;
  GALLERY[414] = new BabblingBjerg0414;
  GALLERY[415] = new Garen0415;
  GALLERY[416] = new SpinningAxe0416;
  GALLERY[417] = new AvarosanSentry0417;
  GALLERY[418] = new Soulgorger0418;
  GALLERY[419] = new FadingMemories0419;
}

void init_gallery() {
  init_gallery_();
  for(auto p: GALLERY){
    if(p.second->collectible)
      COLLECTIBLE[p.first] = p.second;
  }
}

void clear_gallery() {
  for(auto entry: GALLERY){
    delete entry.second;
  }
  GALLERY.clear();
}
