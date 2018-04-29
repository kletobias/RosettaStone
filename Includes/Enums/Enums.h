/*************************************************************************
> File Name: Enums.h
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Enumerations for card data.
> Created Time: 2017/08/11
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef HEARTHSTONEPP_ENUMS_H
#define HEARTHSTONEPP_ENUMS_H

#include <array>

namespace Hearthstonepp
{
	enum class BlockType
	{
		ATTACK = 1,
		JOUST = 2,
		POWER = 3,
		TRIGGER = 5,
		DEATHS = 6,
		PLAY = 7,
		FATIGUE = 8,
		RITUAL = 9,
		REVEAL_CARD = 10,
		GAME_RESET = 11,

		// Removed
		SCRIPT = 4,
		ACTION = 99,

		// Renamed
		CONTINUOUS = 2,
	};

	enum class BattleNetGameType
	{
		UNKNOWN = 0,
		FRIENDS = 1,
		RANKED_STANDARD = 2,
		ARENA = 3,
		VS_AI = 4,
		TUTORIAL = 5,
		ASYNC = 6,
		CASUAL_STANDARD_NEWBIE = 9,
		CASUAL_STANDARD_NORMAL = 10,
		TEST1 = 11,
		TEST2 = 12,
		TEST3 = 13,
		TAVERNBRAWL_PVP = 16,
		TAVERNBRAWL_1P_VERSUS_AI = 17,
		TAVERNBRAWL_2P_COOP = 18,
		RANKED_WILD = 30,
		CASUAL_WILD = 31,
		FSG_BRAWL_VS_FRIEND = 40,
		FSG_BRAWL_PVP = 41,
		FSG_BRAWL_1P_VERSUS_AI = 42,
		FSG_BRAWL_2P_COOP = 43,

		NEWBIE = CASUAL_STANDARD_NEWBIE,
		CASUAL_STANDARD = CASUAL_STANDARD_NORMAL,
	};

	constexpr std::array<BattleNetGameType, 2> STANDARD_GAME_TYPES =
	{
		BattleNetGameType::CASUAL_STANDARD,
		BattleNetGameType::RANKED_STANDARD,
	};

	constexpr std::array<BattleNetGameType, 2> WILD_GAME_TYPES =
	{
		BattleNetGameType::CASUAL_WILD,
		BattleNetGameType::RANKED_WILD,
	};

	enum class BattleNetRegion
	{
		UNINITIALIZED = -1,
		UNKNOWN = 0,
		US = 1,
		EU = 2,
		KR = 3,
		TW = 4,
		CN = 5,
		LIVE_VERIFICATION = 40,
		PTR_LOC = 41,

		// Deleted
		MSCHWEITZER_BN11 = 52,
		MSCHWEITZER_BN12 = 53,
		DEV = 60,
		PTR = 98,
	};

	enum class Booster
	{
		INVALID = 0,
		CLASSIC = 1,
		GOBLINS_VS_GNOMES = 9,
		THE_GRAND_TOURNAMENT = 10,
		OLD_GODS = 11,
		FIRST_PURCHASE = 17,
		SIGNUP_INCENTIVE = 18,
		MEAN_STREETS = 19,
		UNGORO = 20,
		FROZEN_THRONE = 21,
		GOLDEN_CLASSIC_PACK = 23,
		KOBOLDS_AND_CATACOMBS = 30,
		WITCHWOOD = 31,
		MAMMOTH_BUNDLE = 41,

		// Renamed
		KOBOLDS_CATACOMBS = KOBOLDS_AND_CATACOMBS,
	};

	enum class BrawlType
	{
		UNKNOWN = 0,
		TAVERN_BRAWL = 1,
		FIRESIDE_GATHERING = 2,
		COUNT = 3,
	};

	enum class CardClass
	{
		INVALID = 0,
		DEATHKNIGHT = 1,
		DRUID = 2,
		HUNTER = 3,
		MAGE = 4,
		PALADIN = 5,
		PRIEST = 6,
		ROGUE = 7,
		SHAMAN = 8,
		WARLOCK = 9,
		WARRIOR = 10,
		DREAM = 11,
		NEUTRAL = 12,
	};

	enum class CardSet
	{
		INVALID = 0,
		TEST_TEMPORARY = 1,
		CORE = 2,
		EXPERT1 = 3,
		HOF = 4,
		REWARD = 4,
		MISSIONS = 5,
		DEMO = 6,
		NONE = 7,
		CHEAT = 8,
		BLANK = 9,
		DEBUG_SP = 10,
		PROMO = 11,
		NAXX = 12,
		FP1 = 12,
		PE1 = 13,
		GVG = 13,
		FP2 = 14,
		BRM = 14,
		TGT = 15,
		PE2 = 15,
		TEMP1 = 15,
		CREDITS = 16,
		HERO_SKINS = 17,
		TB = 18,
		SLUSH = 19,
		LOE = 20,
		OG = 21,
		OG_RESERVE = 22,
		KARA = 23,
		KARA_RESERVE = 24,
		GANGS = 25,
		GANGS_RESERVE = 26,
		UNGORO = 27,
		ICECROWN = 1001,
	};

	enum class CardType
	{
		INVALID = 0,
		GAME = 1,
		PLAYER = 2,
		HERO = 3,
		MINION = 4,
		SPELL = 5,
		ABILITY = 5,
		ENCHANTMENT = 6,
		WEAPON = 7,
		ITEM = 8,
		TOKEN = 9,
		HERO_POWER = 10,
	};

	enum class ChoiceType
	{
		INVALID = 0,
		MULLIGAN = 1,
		GENERAL = 2,
	};

	enum class DeckType
	{
		UNKNOWN_DECK_TYPE = 0,
		NORMAL_DECK = 1,
		AI_DECK = 2,
		DRAFT_DECK = 4,
		PRECON_DECK = 5,
		TAVERN_BRAWL_DECK = 6,
		FSG_BRAWL_DECK = 7,
		HIDDEN_DECK = 1000,
	};

	enum class EnchantmentVisual
	{
		INVALID = 0,
		POSITIVE = 1,
		NEGATIVE = 2,
		NEUTRAL = 3,
	};

	enum class Faction
	{
		INVALID = 0,
		HORDE = 1,
		ALLIANCE = 2,
		NEUTRAL = 3,
	};

	enum class FormatType
	{
		UNKNOWN = 0,
		WILD = 1,
		STANDARD = 2,
	};

	enum class GameTag
	{
		IGNORE_DAMAGE = 1,
		TAG_SCRIPT_DATA_NUM_1 = 2,
		TAG_SCRIPT_DATA_NUM_2 = 3,
		TAG_SCRIPT_DATA_ENT_1 = 4,
		TAG_SCRIPT_DATA_ENT_2 = 5,
		MISSION_EVENT = 6,
		TIMEOUT = 7,
		TURN_START = 8,
		TURN_TIMER_SLUSH = 9,
		PREMIUM = 12,
		GOLD_REWARD_STATE = 13,
		PLAYSTATE = 17,
		LAST_AFFECTED_BY = 18,
		STEP = 19,
		TURN = 20,
		FATIGUE = 22,
		CURRENT_PLAYER = 23,
		FIRST_PLAYER = 24,
		RESOURCES_USED = 25,
		RESOURCES = 26,
		HERO_ENTITY = 27,
		MAXHANDSIZE = 28,
		STARTHANDSIZE = 29,
		PLAYER_ID = 30,
		TEAM_ID = 31,
		TRIGGER_VISUAL = 32,
		RECENTLY_ARRIVED = 33,
		PROTECTED = 34,
		PROTECTING = 35,
		DEFENDING = 36,
		PROPOSED_DEFENDER = 37,
		ATTACKING = 38,
		PROPOSED_ATTACKER = 39,
		ATTACHED = 40,
		EXHAUSTED = 43,
		DAMAGE = 44,
		HEALTH = 45,
		ATK = 47,
		COST = 48,
		ZONE = 49,
		CONTROLLER = 50,
		OWNER = 51,
		DEFINITION = 52,
		ENTITY_ID = 53,
		HISTORY_PROXY = 54,
		COPY_DEATHRATTLE = 55,
		COPY_DEATHRATTLE_INDEX = 56,
		ELITE = 114,
		MAXRESOURCES = 176,
		CARD_SET = 183,
		CARDTEXT_INHAND = 184,
		CARDNAME = 185,
		CARD_ID = 186,
		DURABILITY = 187,
		SILENCED = 188,
		WINDFURY = 189,
		TAUNT = 190,
		STEALTH = 191,
		SPELLPOWER = 192,
		DIVINE_SHIELD = 194,
		CHARGE = 197,
		NEXT_STEP = 198,
		CLASS = 199,
		CARDRACE = 200,
		FACTION = 201,
		CARDTYPE = 202,
		RARITY = 203,
		STATE = 204,
		SUMMONED = 205,
		FREEZE = 208,
		ENRAGED = 212,
		RECALL = 215,
		OVERLOAD = 215,
		LOYALTY = 216,
		DEATH_RATTLE = 217,
		DEATHRATTLE = 217,
		BATTLECRY = 218,
		SECRET = 219,
		COMBO = 220,
		CANT_HEAL = 221,
		CANT_DAMAGE = 222,
		CANT_SET_ASIDE = 223,
		CANT_REMOVE_FROM_GAME = 224,
		CANT_READY = 225,
		CANT_EXHAUST = 226,
		CANT_ATTACK = 227,
		CANT_TARGET = 228,
		CANT_DESTROY = 229,
		CANT_DISCARD = 230,
		CANT_PLAY = 231,
		CANT_DRAW = 232,
		INCOMING_HEALING_MULTIPLIER = 233,
		INCOMING_HEALING_ADJUSTMENT = 234,
		INCOMING_HEALING_CAP = 235,
		INCOMING_DAMAGE_MULTIPLIER = 236,
		INCOMING_DAMAGE_ADJUSTMENT = 237,
		INCOMING_DAMAGE_CAP = 238,
		CANT_BE_HEALED = 239,
		CANT_BE_DAMAGED = 240,
		IMMUNE = 240,
		CANT_BE_SET_ASIDE = 241,
		CANT_BE_REMOVED_FROM_GAME = 242,
		CANT_BE_READIED = 243,
		CANT_BE_EXHAUSTED = 244,
		CANT_BE_ATTACKED = 245,
		CANT_BE_TARGETED = 246,
		CANT_BE_DESTROYED = 247,
		ATTACK_VISUAL_TYPE = 251,
		CARD_TEXT_IN_PLAY = 252,
		CANT_BE_SUMMONING_SICK = 253,
		FROZEN = 260,
		JUST_PLAYED = 261,
		LINKED_ENTITY = 262,
		LINKEDCARD = 262,
		ZONE_POSITION = 263,
		CANT_BE_FROZEN = 264,
		COMBO_ACTIVE = 266,
		CARD_TARGET = 267,
		DEV_STATE = 268,
		NUM_CARDS_PLAYED_THIS_TURN = 269,
		CANT_BE_TARGETED_BY_OPPONENTS = 270,
		NUM_TURNS_IN_PLAY = 271,
		NUM_TURNS_LEFT = 272,
		OUTGOING_DAMAGE_CAP = 273,
		OUTGOING_DAMAGE_ADJUSTMENT = 274,
		OUTGOING_DAMAGE_MULTIPLIER = 275,
		OUTGOING_HEALING_CAP = 276,
		OUTGOING_HEALING_ADJUSTMENT = 277,
		OUTGOING_HEALING_MULTIPLIER = 278,
		INCOMING_ABILITY_DAMAGE_ADJUSTMENT = 279,
		INCOMING_COMBAT_DAMAGE_ADJUSTMENT = 280,
		OUTGOING_ABILITY_DAMAGE_ADJUSTMENT = 281,
		OUTGOING_COMBAT_DAMAGE_ADJUSTMENT = 282,
		OUTGOING_ABILITY_DAMAGE_MULTIPLIER = 283,
		OUTGOING_ABILITY_DAMAGE_CAP = 284,
		INCOMING_ABILITY_DAMAGE_MULTIPLIER = 285,
		INCOMING_ABILITY_DAMAGE_CAP = 286,
		OUTGOING_COMBAT_DAMAGE_MULTIPLIER = 287,
		OUTGOING_COMBAT_DAMAGE_CAP = 288,
		INCOMING_COMBAT_DAMAGE_MULTIPLIER = 289,
		INCOMING_COMBAT_DAMAGE_CAP = 290,
		CURRENT_SPELLPOWER = 291,
		ARMOR = 292,
		MORPH = 293,
		IS_MORPHED = 294,
		TEMP_RESOURCES = 295,
		RECALL_OWED = 296,
		OVERLOAD_OWED = 296,
		NUM_ATTACKS_THIS_TURN = 297,
		NEXT_ALLY_BUFF = 302,
		MAGNET = 303,
		FIRST_CARD_PLAYED_THIS_TURN = 304,
		MULLIGAN_STATE = 305,
		TAUNT_READY = 306,
		STEALTH_READY = 307,
		CHARGE_READY = 308,
		CANT_BE_TARGETED_BY_SPELLS = 311,
		CANT_BE_TARGETED_BY_ABILITIES = 311,
		SHOULDEXITCOMBAT = 312,
		CREATOR = 313,
		CANT_BE_SILENCED = 314,
		CANT_BE_DISPELLED = 314,
		DIVINE_SHIELD_READY = 314,
		PARENT_CARD = 316,
		NUM_MINIONS_PLAYED_THIS_TURN = 317,
		PREDAMAGE = 318,
		COLLECTIBLE = 321,
		TARGETING_ARROW_TEXT = 325,
		ENCHANTMENT_BIRTH_VISUAL = 330,
		ENCHANTMENT_IDLE_VISUAL = 331,
		CANT_BE_TARGETED_BY_HERO_POWERS = 332,
		WEAPON = 334,
		INVISIBLE_DEATHRATTLE = 335,
		HEALTH_MINIMUM = 337,
		TAG_ONE_TURN_EFFECT = 338,
		SILENCE = 339,
		COUNTER = 340,
		ARTISTNAME = 342,
		LOCALIZATION_NOTES = 344,
		HAND_REVEALED = 348,
		IMMUNE_TO_SPELL_POWER = 349,
		ADJACENT_BUFF = 350,
		FLAVORTEXT = 351,
		FORCED_PLAY = 352,
		LOW_HEALTH_THRESHOLD = 353,
		IGNORE_DAMAGE_OFF = 354,
		GRANT_CHARGE = 355,
		SPELLPOWER_DOUBLE = 356,
		HEALING_DOUBLE = 357,
		NUM_OPTIONS_PLAYED_THIS_TURN = 358,
		NUM_OPTIONS = 359,
		TO_BE_DESTROYED = 360,
		HEAL_TARGET = 361,
		AURA = 362,
		POISONOUS = 363,
		HOW_TO_EARN = 364,
		HOW_TO_EARN_GOLDEN = 365,
		TAG_HERO_POWER_DOUBLE = 366,
		HERO_POWER_DOUBLE = 366,
		TAG_AI_MUST_PLAY = 367,
		AI_MUST_PLAY = 367,
		NUM_MINIONS_PLAYER_KILLED_THIS_TURN = 368,
		NUM_MINIONS_KILLED_THIS_TURN = 369,
		AFFECTED_BY_SPELL_POWER = 370,
		EXTRA_DEATHRATTLES = 371,
		START_WITH_1_HEALTH = 372,
		IMMUNE_WHILE_ATTACKING = 373,
		MULTIPLY_HERO_DAMAGE = 374,
		MULTIPLY_BUFF_VALUE = 375,
		CUSTOM_KEYWORD_EFFECT = 376,
		TOPDECK = 377,
		CANT_BE_TARGETED_BY_BATTLECRIES = 379,
		SHOWN_HERO_POWER = 380,
		OVERKILL = 380,
		HERO_POWER = 380,
		DEATHRATTLE_RETURN_ZONE = 382,
		DEATHRATTLE_SENDS_BACK_TO_DECK = 382,
		STEADY_SHOT_CAN_TARGET = 383,
		DISPLAYED_CREATOR = 385,
		POWERED_UP = 386,
		SPARE_PART = 388,
		FORGETFUL = 389,
		CAN_SUMMON_MAXPLUSONE_MINION = 390,
		OBFUSCATED = 391,
		BURNING = 392,
		OVERLOAD_LOCKED = 393,
		NUM_TIMES_HERO_POWER_USED_THIS_GAME = 394,
		CURRENT_HEROPOWER_DAMAGE_BONUS = 395,
		HEROPOWER_DAMAGE = 396,
		LAST_CARD_PLAYED = 397,
		NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_TURN = 398,
		NUM_CARDS_DRAWN_THIS_TURN = 399,
		AI_ONE_SHOT_KILL = 400,
		EVIL_GLOW = 401,
		HIDE_COST = 402,
		HIDE_STATS = 402,
		INSPIRE = 403,
		RECEIVES_DOUBLE_SPELLDAMAGE_BONUS = 404,
		HEROPOWER_ADDITIONAL_ACTIVATIONS = 405,
		HEROPOWER_ACTIVATIONS_THIS_TURN = 406,
		REVEALED = 410,
		NUM_FRIENDLY_MINIONS_THAT_DIED_THIS_GAME = 412,
		CANNOT_ATTACK_HEROES = 413,
		LOCK_AND_LOAD = 414,
		DISCOVER = 415,
		TREASURE = 415,
		SHADOWFORM = 416,
		NUM_FRIENDLY_MINIONS_THAT_ATTACKED_THIS_TURN = 417,
		NUM_RESOURCES_SPENT_THIS_GAME = 418,
		CHOOSE_BOTH = 419,
		ELECTRIC_CHARGE_LEVEL = 420,
		HEAVILY_ARMORED = 421,
		DONT_SHOW_IMMUNE = 422,
		RITUAL = 424,
		PREHEALING = 425,
		APPEAR_FUNCTIONALLY_DEAD = 426,
		OVERLOAD_THIS_GAME = 427,
		SPELLS_COST_HEALTH = 431,
		HISTORY_PROXY_NO_BIG_CARD = 432,
		PROXY_CTHUN = 434,
		TRANSFORMED_FROM_CARD = 435,
		CTHUN = 436,
		CAST_RANDOM_SPELLS = 437,
		SHIFTING = 438,
		JADE_GOLEM = 441,
		EMBRACE_THE_SHADOW = 442,
		CHOOSE_ONE = 443,
		EXTRA_ATTACKS_THIS_TURN = 444,
		SEEN_CTHUN = 445,
		MINION_TYPE_REFERENCE = 447,
		UNTOUCHABLE = 448,
		RED_MANA_CRYSTALS = 449,
		SCORE_LABELID_1 = 450,
		SCORE_VALUE_1 = 451,
		SCORE_LABELID_2 = 452,
		SCORE_VALUE_2 = 453,
		SCORE_LABELID_3 = 454,
		SCORE_VALUE_3 = 455,
		CANT_BE_FATIGUED = 456,
		AUTOATTACK = 457,
		ARMS_DEALING = 458,
		PENDING_EVOLUTIONS = 461,
		QUEST = 462,
		TAG_LAST_KNOWN_COST_IN_HAND = 466,
		DEFINING_ENCHANTMENT = 469,
		FINISH_ATTACK_SPELL_ON_DAMAGE = 470,
		KAZAKUS_POTION_POWER_1 = 471,
		MODULAR_ENTITY_PART_1 = 471,
		MODULAR_ENTITY_PART_2 = 472,
		KAZAKUS_POTION_POWER_2 = 472,
		MODIFY_DEFINITION_ATTACK = 473,
		MODIFY_DEFINITION_HEALTH = 474,
		MODIFY_DEFINITION_COST = 475,
		MULTIPLE_CLASSES = 476,
		ALL_TARGETS_RANDOM = 477,
		MULTI_CLASS_GROUP = 480,
		CARD_COSTS_HEALTH = 481,
		GRIMY_GOONS = 482,
		JADE_LOTUS = 483,
		KABAL = 484,
		ADDITIONAL_PLAY_REQS_1 = 515,
		ADDITIONAL_PLAY_REQS_2 = 516,
		ELEMENTAL_POWERED_UP = 532,
		QUEST_PROGRESS = 534,
		QUEST_PROGRESS_TOTAL = 535,
		QUEST_CONTRIBUTOR = 541,
		ADAPT = 546,
		IS_CURRENT_TURN_AN_EXTRA_TURN = 547,
		EXTRA_TURNS_TAKEN_THIS_GAME = 548,
		SHIFTING_MINION = 549,
		SHIFTING_WEAPON = 550,
		DEATH_KNIGHT = 554,
		BOSS = 556,
		STAMPEDE = 564,
		IS_VAMPIRE = 680,
		CORRUPTED = 681,
		LIFESTEAL = 685,
		OVERRIDE_EMOTE_0 = 740,
		OVERRIDE_EMOTE_1 = 741,
		OVERRIDE_EMOTE_2 = 742,
		OVERRIDE_EMOTE_3 = 743,
		OVERRIDE_EMOTE_4 = 744,
		OVERRIDE_EMOTE_5 = 745,
		SCORE_FOOTERID = 751,
		HERO_POWER_DISABLED = 777,
		VALEERASHADOW = 779,
		OVERRIDECARDNAME = 781,
		OVERRIDECARDTEXTBUILDER = 782,
		HIDDEN_CHOICE = 813,
		ZOMBEAST = 823,
	};

	enum class GameType
	{
		UNKNOWN = 0,
		VS_AI = 1,
		VS_FRIEND = 2,
		TUTORIAL = 4,
		ARENA = 5,
		TEST = 6,
		RANKED = 7,
		CASUAL = 8,
		TAVERNBRAWL = 16,
		TB_1P_VS_AI = 17,
		TB_2P_COOP = 18,
		FSG_BRAWL_VS_FRIEND = 19,
		FSG_BRAWL = 20,
		FSG_BRAWL_1P_VS_AI = 21,
		FSG_BRAWL_2P_COOP = 22,
	};

	enum class GoldRewardState
	{
		INVALID = 0,
		ELIGIBLE = 1,
		WRONG_GAME_TYPE = 2,
		ALREADY_CAPPED = 3,
		BAD_RATING = 4,
		SHORT_GAME = 5,
		SHORT_GAME_BY_TIME = 5,
		OVER_CAIS = 6,
	};

	enum class Locale
	{
		UNKNOWN = -1,
		enUS = 0,
		enGB = 1,
		frFR = 2,
		deDE = 3,
		koKR = 4,
		esES = 5,
		esMX = 6,
		ruRU = 7,
		zhTW = 8,
		zhCN = 9,
		itIT = 10,
		ptBR = 11,
		plPL = 12,
		ptPT = 13,
		jaJP = 14,
		thTH = 15,
	};

	enum class MetaDataType
	{
		META_TARGET = 0,
		TARGET = 0,
		META_DAMAGE = 1,
		DAMAGE = 1,
		HEALING = 2,
		META_HEALING = 2,
		JOUST = 3,
		CLIENT_HISTORY = 4,
		SHOW_BIG_CARD = 5,
		EFFECT_TIMING = 6,
		HISTORY_TARGET = 7,
		OVERRIDE_HISTORY = 8,
		HISTORY_TARGET_DONT_DUPLICATE_UNTIL_END = 9,
	};

	enum class Mulligan
	{
		INVALID = 0,
		INPUT = 1,
		DEALING = 2,
		WAITING = 3,
		DONE = 4,
	};

	enum class MultiClassGroup
	{
		INVALID = 0,
		GRIMY_GOONS = 1,
		JADE_LOTUS = 2,
		KABAL = 3,
	};

	enum class OptionType
	{
		PASS = 1,
		END_TURN = 2,
		POWER = 3,
	};

	enum class PlayReq
	{
		INVALID = -1,
		REQ_MINION_TARGET = 1,
		REQ_FRIENDLY_TARGET = 2,
		REQ_ENEMY_TARGET = 3,
		REQ_DAMAGED_TARGET = 4,
		REQ_ENCHANTED_TARGET = 5,
		REQ_MAX_SECRETS = 5,
		REQ_FROZEN_TARGET = 6,
		REQ_CHARGE_TARGET = 7,
		REQ_TARGET_MAX_ATTACK = 8,
		REQ_NONSELF_TARGET = 9,
		REQ_TARGET_WITH_RACE = 10,
		REQ_TARGET_TO_PLAY = 11,
		REQ_NUM_MINION_SLOTS = 12,
		REQ_WEAPON_EQUIPPED = 13,
		REQ_ENOUGH_MANA = 14,
		REQ_YOUR_TURN = 15,
		REQ_NONSTEALTH_ENEMY_TARGET = 16,
		REQ_HERO_TARGET = 17,
		REQ_SECRET_CAP = 18,
		REQ_SECRET_ZONE_CAP = 18,
		REQ_MINION_CAP_IF_TARGET_AVAILABLE = 19,
		REQ_MINION_CAP = 20,
		REQ_TARGET_ATTACKED_THIS_TURN = 21,
		REQ_TARGET_IF_AVAILABLE = 22,
		REQ_MINIMUM_ENEMY_MINIONS = 23,
		REQ_TARGET_FOR_COMBO = 24,
		REQ_NOT_EXHAUSTED_ACTIVATE = 25,
		REQ_UNIQUE_SECRET_OR_QUEST = 26,
		REQ_UNIQUE_SECRET = 26,
		REQ_TARGET_TAUNTER = 27,
		REQ_CAN_BE_ATTACKED = 28,
		REQ_ACTION_PWR_IS_MASTER_PWR = 29,
		REQ_TARGET_MAGNET = 30,
		REQ_ATTACK_GREATER_THAN_0 = 31,
		REQ_ATTACKER_NOT_FROZEN = 32,
		REQ_HERO_OR_MINION_TARGET = 33,
		REQ_CAN_BE_TARGETED_BY_SPELLS = 34,
		REQ_SUBCARD_IS_PLAYABLE = 35,
		REQ_TARGET_FOR_NO_COMBO = 36,
		REQ_NOT_MINION_JUST_PLAYED = 37,
		REQ_NOT_EXHAUSTED_HERO_POWER = 38,
		REQ_CAN_BE_TARGETED_BY_OPPONENTS = 39,
		REQ_ATTACKER_CAN_ATTACK = 40,
		REQ_TARGET_MIN_ATTACK = 41,
		REQ_CAN_BE_TARGETED_BY_HERO_POWERS = 42,
		REQ_ENEMY_TARGET_NOT_IMMUNE = 43,
		REQ_ENTIRE_ENTOURAGE_NOT_IN_PLAY = 44,
		REQ_MINIMUM_TOTAL_MINIONS = 45,
		REQ_MUST_TARGET_TAUNTER = 46,
		REQ_UNDAMAGED_TARGET = 47,
		REQ_CAN_BE_TARGETED_BY_BATTLECRIES = 48,
		REQ_STEADY_SHOT = 49,
		REQ_MINION_OR_ENEMY_HERO = 50,
		REQ_TARGET_IF_AVAILABLE_AND_DRAGON_IN_HAND = 51,
		REQ_LEGENDARY_TARGET = 52,
		REQ_FRIENDLY_MINION_DIED_THIS_TURN = 53,
		REQ_FRIENDLY_MINION_DIED_THIS_GAME = 54,
		REQ_ENEMY_WEAPON_EQUIPPED = 55,
		REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_MINIONS = 56,
		REQ_TARGET_WITH_BATTLECRY = 57,
		REQ_TARGET_WITH_DEATHRATTLE = 58,
		REQ_TARGET_IF_AVAILABLE_AND_MINIMUM_FRIENDLY_SECRETS = 59,
		REQ_SECRET_CAP_FOR_NON_SECRET = 60,
		REQ_SECRET_ZONE_CAP_FOR_NON_SECRET = 60,
		REQ_TARGET_EXACT_COST = 61,
		REQ_STEALTHED_TARGET = 62,
		REQ_MINION_SLOT_OR_MANA_CRYSTAL_SLOT = 63,
		REQ_MAX_QUESTS = 64,
		REQ_TARGET_IF_AVAILABE_AND_ELEMENTAL_PLAYED_LAST_TURN = 65,
		REQ_TARGET_NOT_VAMPIRE = 66,
		REQ_TARGET_NOT_DAMAGEABLE_ONLY_BY_WEAPONS = 67,
		REQ_NOT_DISABLED_HERO_POWER = 68,
		REQ_MUST_PLAY_OTHER_CARD_FIRST = 69,
		REQ_HAND_NOT_FULL = 70,
		REQ_DRAG_TO_PLAY = 71,
	};

	enum class PlayState
	{
		INVALID = 0,
		PLAYING = 1,
		WINNING = 2,
		LOSING = 3,
		WON = 4,
		LOST = 5,
		TIED = 6,
		DISCONNECTED = 7,
		CONCEDED = 8,
		QUIT = 8,
	};

	enum class PowerType
	{
		FULL_ENTITY = 1,
		SHOW_ENTITY = 2,
		HIDE_ENTITY = 3,
		TAG_CHANGE = 4,
		BLOCK_START = 5,
		ACTION_START = 5,
		BLOCK_END = 6,
		ACTION_END = 6,
		CREATE_GAME = 7,
		META_DATA = 8,
		CHANGE_ENTITY = 9,
	};

	enum class Race
	{
		INVALID = 0,
		BLOODELF = 1,
		DRAENEI = 2,
		DWARF = 3,
		GNOME = 4,
		GOBLIN = 5,
		HUMAN = 6,
		NIGHTELF = 7,
		ORC = 8,
		TAUREN = 9,
		TROLL = 10,
		UNDEAD = 11,
		WORGEN = 12,
		GOBLIN2 = 13,
		MURLOC = 14,
		DEMON = 15,
		SCOURGE = 16,
		MECHANICAL = 17,
		ELEMENTAL = 18,
		OGRE = 19,
		BEAST = 20,
		PET = 20,
		TOTEM = 21,
		NERUBIAN = 22,
		PIRATE = 23,
		DRAGON = 24,
	};

	enum class Rarity
	{
		INVALID = 0,
		COMMON = 1,
		FREE = 2,
		RARE = 3,
		EPIC = 4,
		LEGENDARY = 5,
		UNKNOWN_6 = 6,
	};

	enum class State
	{
		INVALID = 0,
		LOADING = 1,
		RUNNING = 2,
		COMPLETE = 3,
	};

	enum class Step
	{
		INVALID = 0,
		BEGIN_FIRST = 1,
		BEGIN_SHUFFLE = 2,
		BEGIN_DRAW = 3,
		BEGIN_MULLIGAN = 4,
		MAIN_BEGIN = 5,
		MAIN_READY = 6,
		MAIN_RESOURCE = 7,
		MAIN_DRAW = 8,
		MAIN_START = 9,
		MAIN_ACTION = 10,
		MAIN_COMBAT = 11,
		MAIN_END = 12,
		MAIN_NEXT = 13,
		FINAL_WRAPUP = 14,
		FINAL_GAMEOVER = 15,
		MAIN_CLEANUP = 16,
		MAIN_START_TRIGGERS = 17,
	};

	enum class Type
	{
		LOCSTRING = -2,
		UNKNOWN = 0,
		BOOL = 1,
		NUMBER = 2,
		COUNTER = 3,
		ENTITY = 4,
		PLAYER = 5,
		TEAM = 6,
		ENTITY_DEFINITION = 7,
		STRING = 8,
	};

	enum class ZodiacYear
	{
		INVALID = -1,
		PRE_STANDARD = 0,
		KRAKEN = 1,
		MAMMOTH = 2,
	};

	enum class Zone
	{
		INVALID = 0,
		PLAY = 1,
		DECK = 2,
		HAND = 3,
		GRAVEYARD = 4,
		REMOVEDFROMGAME = 5,
		SETASIDE = 6,
		SECRET = 7,
	};

	enum class NumericModification
	{
		ADD = 0,
		SUB = 1,
		SYNC = 2
	};

	enum class Action
	{
		BRIEF = 100,
		OVER_DRAW = 101,
		EXHAUST_DECK = 102,
		MANA_MODIFICATION = 103,
		HEALTH_MODIFICATION = 104,
		EXHAUST_MINION = 105
	};
}

#endif