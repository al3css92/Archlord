/******************************************************************************
Module:  AgpdItem.h
Notices: Copyright (c) NHN Studio 2002 netong
Purpose: 
Last Update: 2002. 04. 15
******************************************************************************/

#if !defined(__AGPDITEM_H__)
#define __AGPDITEM_H__

#include "ApModule.h"

#include "AgpmGrid.h"

#include "ApdItem.h"
#include "ApBase.h"
#include "AgpmFactors.h"

#include "AgpmCharacter.h"
#include "AgpdCharacter.h"

#include "AgpdItemTemplate.h"

#include "AgpdItemOptionTemplate.h"

#define AGPDITEM_MAKE_ITEM_ID(lIID,lITID)	((((INT64) (lITID)) << 32) | (lIID))
#define AGPDITEM_GET_IID(llID)				((INT32) ((llID) & 0xffffffff))
#define AGPDITEM_GET_ITID(llID)				((INT32) (((llID) >> 32) & 0xffffffff))

// AGPDITEM_CASH_ITEM_XXX
#define	AGPDITEM_CASH_ITEM_UNUSE				0
#define	AGPDITEM_CASH_ITEM_INUSE				1
#define AGPDITEM_CASH_ITEM_PAUSE				2

#define AGPDITEM_PRIVATE_TRADE_OPTION_MAX		3

#define	AGPDITEM_CASH_ITEM_MAX_USABLE_COUNT		0x0FFFFFFF
// Constant Values
//const INT32 AGPMITEM_MAX_ITEM_NAME						= 40;
const INT32 AGPMITEM_MAX_ITEM_MAGIC_ATTR				= 22;
const INT32 AGPMITEM_MAX_ITEM_SPIRITED					= 10;
const INT32 AGPMITEM_MAX_ITEM_DATA_COUNT				= 1000000;
const INT32 AGPMITEM_MAX_ITEM_OWN						= 100;		// 廃 蝶遣斗亜 置企稽 亜霜 呪 赤澗 焼奴 呪

const INT32 AGPMITEM_MAX_PICKUP_ITEM_DISTANCE			= 4000;

//Equip
const INT32 AGPMITEM_EQUIP_LAYER						= 3;
const INT32 AGPMITEM_EQUIP_ROW							= 3;
const INT32 AGPMITEM_EQUIP_COLUMN						= 4;

//Inventory
const INT32 AGPMITEM_MAX_INVENTORY						= 5;
const INT32 AGPMITEM_INVENTORY_ROW						= 5;
const INT32 AGPMITEM_INVENTORY_COLUMN					= 5;

const INT32 AGPAITEM_MAX_ITEM_TEMPLATE					= 256;

const INT32 AGPMITEM_BTREE_ORDER						= 30;

const INT32 AGPMITEM_INVALID_IID						= 0;

const INT32 AGPMITEM_SALES_BOX_SIZE						= 10;

//Bank
const INT32	AGPMITEM_BANK_MAX_LAYER						= 4;
const INT32 AGPMITEM_BANK_ROW							= 7;
const INT32 AGPMITEM_BANK_COLUMN						= 4;

//Trade Box(1:1嘘発)
const INT32 AGPMITEM_TRADEBOX_LAYER						= 1; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ
const INT32 AGPMITEM_TRADEBOX_ROW						= 3; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ
const INT32 AGPMITEM_TRADEBOX_COLUMN					= 4; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ

//SalesBox
const INT32 AGPMITEM_SALES_LAYER						= 1; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ
const INT32 AGPMITEM_SALES_ROW							= 1; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ
const INT32 AGPMITEM_SALES_COLUMN						= 10; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ

//NPCTradeBox
const INT32 AGPMITEM_NPCTRADEBOX_LAYER					= 1; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ
const INT32 AGPMITEM_NPCTRADEBOX_ROW					= 20; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ
const INT32 AGPMITEM_NPCTRADEBOX_COLUMN					= 4; //奄塙税 推短拭 魚虞 杖原窮走 痕井馬切~ ぞぞ

//Quest Grid
const INT32 AGPMITEM_QUEST_LAYER						= 1;
const INT32 AGPMITEM_QUEST_ROW							= 4;
const INT32	AGPMITEM_QUEST_COLUMN						= 4;

//2005.11.16. By SungHoon for cash inventory
const INT32 AGPMITEM_CASH_INVENTORY_LAYER				= 1;
const INT32 AGPMITEM_CASH_INVENTORY_ROW					= 200;
const INT32	AGPMITEM_CASH_INVENTORY_COLUMN				= 1;

const INT32 AGPMITEM_GUILD_WAREHOUSE_LAYER				= 2;
const INT32 AGPMITEM_GUILD_WAREHOUSE_ROW				= 7;
const INT32	AGPMITEM_GUILD_WAREHOUSE_COLUMN				= 4;

// 2008.05.08. steeple
const INT32 AGPMITEM_SUB_LAYER							= 4;
const INT32 AGPMITEM_SUB_ROW							= 2;
const INT32 AGPMITEM_SUB_COLUMN							= 4;

/*
// 2008.11.07. iluvs for Unseen Inventory
const INT32 AGPMITEM_UNSEEN_LAYER						= 1;
const INT32 AGPMITEM_UNSEEN_ROW							= 2;
const INT32 AGPMITEM_UNSEEN_COLUMN						= 4;
*/

const INT32	AGPMITEM_MAX_USE_ITEM						= 20;	// 蝶遣斗亜 疑獣拭 紫遂拝 呪 赤澗 置企 焼奴呪

const INT32	AGPMITEM_MAX_CONVERT						= 10;
const INT32	AGPMITEM_MAX_CONVERT_WEAPON					= 10;	// 因維 巷奄昔井酔 舛敬汐生稽 鯵繕拝 呪 赤澗 置企判呪
const INT32	AGPMITEM_MAX_CONVERT_ARMOUR					= 5;	// 号嬢姥昔井酔 舛敬汐生稽 鯵繕拝 呪 赤澗 置企判呪

const INT32 AGPMITEM_MAX_DURABILITY						= 100;	// 置企 鎧姥亀

const INT32 AGPMITEM_DEFAULT_INVEN_NUM					= 30;	// 蝶遣斗亜 奄沙生稽 亜走壱 赤澗 昔坤紗 焼戚奴 壕伸 姐呪

const INT32	AGPMITEM_REQUIRE_LEVEL_UP_STEP				= 2;

const INT32 AGPMITEM_MAX_DELETE_REASON					= 32;

const INT32 AGPMITEM_TRANSFORM_RECAST_TIME				= 600000;

const INT32 AGPMITEM_REVERSE_ORB_REUSE_INTERVAL			= 1800000;	// 30歳, 軒獄什神崎 仙紫遂 悌展績(ItemDataTable.txt拭辞 鯵紺竺舛馬食 床揮依聖 薪移身)

typedef enum _eAgpdItemDefaultInvenIndex
{
	AGPDITEM_DEFAULT_INVEN_INDEX_TID = 0,
	AGPDITEM_DEFAULT_INVEN_INDEX_STACK_COUNT,
	AGPDITEM_DEFAULT_INVEN_INDEX_NUM
} eAgpdItemDefaultInvenIndex;

typedef enum _eAgpdItemMaterial
{
	AGPDITEM_MATERIAL_NUM
} eAgpdItemMaterial;

typedef enum AgpdItemGridPos
{
	AGPDITEM_GRID_POS_TAB = 0,
	AGPDITEM_GRID_POS_ROW,
	AGPDITEM_GRID_POS_COLUMN,
	AGPDITEM_GRID_POS_NUM
} AgpdItemGridPos;

typedef enum AgpdItemTradeStatus
{
	AGPDITEM_TRADE_STATUS_NONE = 0,            //暗掘雌殿亜 焼還.
	AGPDITEM_TRADE_STATUS_WAIT_CONFIRM,        //暗掘馬切壱 推短聖馬壱 誓岩聖 奄陥軒暗蟹 岩背醤馬澗 雌伐
	AGPDITEM_TRADE_STATUS_TRADING,             //暗掘掻(焼戚奴聖 臣軒壱 鎧軒壱....), Unlock雌殿
	AGPDITEM_TRADE_STATUS_LOCK,				   //Lock吉井酔.
	AGPDITEM_TRADE_STATUS_READY_TO_EXCHANGE    //暗掘層搾 刃戟( 焼戚奴聖 陥 臣軒壱 ok獄動聖 刊献 雌殿)
} AgpdItemTradeStatus;

//typedef enum _AgpmItemConvertResult
//{
//	AGPMITEM_CONVERT_FAIL					= 0,
//	AGPMITEM_CONVERT_DIFFER_RANK,
//	AGPMITEM_CONVERT_DIFFER_TYPE,
//	AGPMITEM_CONVERT_FULL,
//	AGPMITEM_CONVERT_NOT_EQUIP_ITEM,
//	AGPMITEM_CONVERT_EGO_ITEM,
//	AGPMITEM_CONVERT_DESTROY_ATTRIBUTE,
//	AGPMITEM_CONVERT_DESTROY_ITEM,
//	AGPMITEM_CONVERT_SUCCESS,
//} AgpmItemConvertResult;

//typedef enum _AgpmItemEgoResult
//{
//	AGPMITEM_EGO_PUT_SOUL_SUCCESS	= 0,
//	AGPMITEM_EGO_PUT_SOUL_FAIL,
//	AGPMITEM_EGO_USE_SOULCUBE_SUCCESS,
//	AGPMITEM_EGO_USE_SOULCUBE_FAIL,
//} AgpmItemEgoResult;


typedef enum	_AgpmItemBoundTypes {
	E_AGPMITEM_NOT_BOUND				= 0,
	E_AGPMITEM_BIND_ON_ACQUIRE,
	E_AGPMITEM_BIND_ON_EQUIP,
	E_AGPMITEM_BIND_ON_USE,
	E_AGPMITEM_BIND_ON_GUILDMASTER		// 掩球 原什斗幻 塙究 亜管
} AgpmItemBoundTypes;

//	Define item status flag
//////////////////////////////////////////////////////////////////

//	BoundTypes
//////////////////////////////////////////////////////////////////
#define	AGPMITEM_BIND_ON_ACQUIRE						0x00000001
#define	AGPMITEM_BIND_ON_EQUIP							0x00000002
#define	AGPMITEM_BIND_ON_USE							0x00000004
#define	AGPMITEM_BOUND_ON_OWNER							0x00000008

//	QuestType
//////////////////////////////////////////////////////////////////
#define	AGPMITEM_STATUS_QUEST							0x00000010

// CashType
#define AGPMITEM_STATUS_CASH_PPCARD						0x00000100

// ExtraType (Status)
#define AGPMITEM_STATUS_DISARMAMENT						0x00001000

//	Define item status flag
//////////////////////////////////////////////////////////////////



//typedef	struct _stAgpmItemConvertHistory
//{
//	INT32					lConvertLevel;
//
//	FLOAT					fConvertConstant;
//	
//	BOOL					bUseSpiritStone[AGPMITEM_MAX_CONVERT];
//	
//	INT32					lTID[AGPMITEM_MAX_CONVERT];
//	ApBase					*pcsTemplate[AGPMITEM_MAX_CONVERT];
//
//	AgpmItemRuneAttribute	eRuneAttribute[AGPMITEM_MAX_CONVERT];
//	INT32					lRuneAttributeValue[AGPMITEM_MAX_CONVERT];
//
//	AgpdFactor				csFactorHistory[AGPMITEM_MAX_CONVERT];
//	AgpdFactor				csFactorPercentHistory[AGPMITEM_MAX_CONVERT];
//} stAgpmItemConvertHistory;

class AgpdItem;

typedef struct _stAgpmItemCheckPickupItem
{
	AgpdItem	*pcsItem;
	AgpdCharacter	*pcsCharacter;
	INT32		lStackCount;
} stAgpmItemCheckPickupItem, *pstAgpmItemCheckPickupItem;

typedef struct _stAgpmItemSkullInfo
{
	CHAR		szSkullOwner[AGPACHARACTER_MAX_ID_STRING + 1];
	CHAR		szKiller[AGPACHARACTER_MAX_ID_STRING + 1];
	//INT32		lPartyMemberID[AGPMPARTY_MAX_PARTY_MEMBER];
	ApSafeArray<INT32, AGPMPARTY_MAX_PARTY_MEMBER>	lPartyMemberID;

	INT32		lSkullUnionRank;
	INT32		lKillerUnionRank;
} AgpmItemSkullInfo;


//焼戚奴聖 益軒球拭 隔奄穿拭 据掘 赤揮 益軒球税 是帖 舛左
//Balanced BST亜 刃失鞠檎 蟹掻拭 嘘端馬切~ 酔識精 壕伸稽..... ば.ば
class AgpmGridItemOriginInfo
{
public:
	INT64			m_llItemID;
	INT16			m_ePrevStatus;// 戚 焼奴税 雌殿... (鐸遂, 昔坤塘軒, 競郊館 去去.)
	//INT16			m_anGridPos[AGPDITEM_GRID_POS_NUM];
	ApSafeArray<INT16, AGPDITEM_GRID_POS_NUM>		m_anGridPos;

	void Set( INT64 llItemID, AgpdItemStatus eStatus, INT16 nLayer, INT16 nRow, INT16 nColumn );
	void Reset();
};

class AgpdItemADCharTemplate : public ApBase {
public:
	//INT32			m_lDefaultEquipITID[AGPMITEM_PART_NUM];
	//ApSafeArray<INT32, AGPMITEM_PART_NUM>			m_lDefaultEquipITID;

	struct EquipItemSetInfo
	{
		INT32										m_nSetNumber;
		BOOL										m_bIsJumpingEventEquip;
		ApSafeArray<INT32, AGPMITEM_PART_NUM>		m_lDefaultEquipITID;

		EquipItemSetInfo()
			: m_nSetNumber(0), m_bIsJumpingEventEquip(FALSE)
		{
			m_lDefaultEquipITID.MemSetAll();
		}

		EquipItemSetInfo(const EquipItemSetInfo& stEquipInfo)
		{
			m_nSetNumber			= stEquipInfo.m_nSetNumber;
			m_bIsJumpingEventEquip	= stEquipInfo.m_bIsJumpingEventEquip;
			m_lDefaultEquipITID		= stEquipInfo.m_lDefaultEquipITID;
		}

		~EquipItemSetInfo()
		{
			m_lDefaultEquipITID.MemSetAll();
		}
	};

	struct InvenItemSetInfo
	{
		BOOL					m_bIsJumpingEventItem;
		INT32					m_aalDefaultInvenInfo[AGPMITEM_DEFAULT_INVEN_NUM][AGPDITEM_DEFAULT_INVEN_INDEX_NUM];

		InvenItemSetInfo()
			: m_bIsJumpingEventItem(FALSE)
		{
			ZeroMemory(m_aalDefaultInvenInfo, sizeof(m_aalDefaultInvenInfo));
		}
		InvenItemSetInfo(const InvenItemSetInfo& stInvenInfo)
		{
			m_bIsJumpingEventItem	= stInvenInfo.m_bIsJumpingEventItem;
			memcpy(m_aalDefaultInvenInfo, stInvenInfo.m_aalDefaultInvenInfo, sizeof(m_aalDefaultInvenInfo));
		}
	};

	//INT32							m_aalDefaultInvenInfo[AGPMITEM_DEFAULT_INVEN_NUM][AGPDITEM_DEFAULT_INVEN_INDEX_NUM];
	INT32							m_lDefaultMoney;

	std::vector<EquipItemSetInfo>	m_vtEquipItemSetInfo;
	std::vector<InvenItemSetInfo>	m_vtInvenItemSetInfo;
};

// 2008.02.14. steeple
struct AgpdItemCooldownBase
{
	INT32			m_lTID;
	UINT32			m_ulRemainTime;
	BOOL			m_bPause;
	BOOL			m_bPrevPause;

	AgpdItemCooldownBase() :
		m_lTID(0), m_ulRemainTime(0), m_bPause(0), m_bPrevPause(0)
	{;}

	bool operator == (INT32 lTID)
	{
		if(m_lTID == lTID)
			return true;

		return false;
	}
};

struct AgpdItemCooldownArray
{
	typedef vector<AgpdItemCooldownBase>			CooldownBaseVector;
	typedef vector<AgpdItemCooldownBase>::iterator	CooldownBaseIter;

	CooldownBaseVector* m_pBases;

	AgpdItemCooldownArray()
	{
		m_pBases = NULL;
	}
};

struct AgpdPrivateOptionItem
{
	INT32		m_lItemTID;
	INT32		m_lItemIID;
	BOOL		m_bUsed;
	BOOL		m_bOnGrid;
	
	AgpdPrivateOptionItem()
	{
		m_lItemTID = 0;
		m_lItemIID = 0;
		m_bUsed = FALSE;
		m_bOnGrid = FALSE;
	}
};

struct AgpdSealData
{
	CHAR strCharName[AGPDCHARACTER_NAME_LENGTH+1];
	INT32 TID;
	INT32 Level;
	INT64 Exp;
}; 

typedef struct
{
//public:
	INT16		m_nNumItem;							// 握壱 赤澗 焼戚奴 恥 姐呪
//	INT16		m_nNewPart;							// 歯稽 郊駕 Item Part (Equip Callback拭 紫遂) Remove 081002 Bob Jung.-琶推蒸製.
//	PVOID		m_pvItemData[AGPMITEM_MAX_ITEM_OWN];	// 焼戚奴 汽戚展 匂昔斗

	AgpdGrid		m_csInventoryGrid;			// 昔坤塘軒
	AgpdGrid		m_csEquipGrid;				// Equip
	AgpdGrid		m_csSalesBoxGrid;			// SalesBox
	AgpdGrid		m_csBankGrid;				// Bank
	AgpdGrid		m_csTradeGrid;				// 切重税 Trade Grid.
	AgpdGrid		m_csClientTradeGrid;		// 暗掘切税 Trade Grid.
	AgpdGrid		m_csQuestGrid;				// Quest Item 左淫遂 Grid
	AgpdGrid		m_csCashInventoryGrid;		// CashItem 昔坤塘軒
	AgpdGrid		m_csSubInventoryGrid;		// PetItem 昔坤塘軒
//	AgpdGrid		m_csUnseenInventoryGrid;	// Unseen 昔坤塘軒

	INT32			m_lTradeTargetID;			//刊姥人 暗掘掻昔亜?
	INT32			m_lTradeStatus;				//暗掘雌殿.
	INT32			m_lMoneyCount;				//鎧亜 雌企号拭惟 匝 榎衝
	INT32			m_lClientMoneyCount;		//雌企号戚 鎧惟 匝 榎衝.
	bool			m_bConfirmButtonDown;		//鎧 陳鈍獄動戚 喚携澗走研 硝焼鎧澗 呉獄
	bool			m_bTargetConfirmButtonDown; //雌企税 陳鈍獄動戚 喚携澗走研 硝焼鎧澗 呉獄

	INT32			m_lArrowIDInInventory;		// 昔坤塘軒照拭 赤澗 鉢詞 焼奴 焼及 (鉢詞聖 達奄是背 古腰 昔坤塘軒研 伊事拝 呪澗 蒸陥.)
	INT32			m_lBoltIDInInventory;		// 昔坤塘軒照拭 赤澗 鉢詞 焼奴 焼及 (鉢詞聖 達奄是背 古腰 昔坤塘軒研 伊事拝 呪澗 蒸陥.)

	INT32			m_lNumArrowCount;			// 昔坤塘軒照拭 赤澗 恥 鉢詞 朝錘闘
	INT32			m_lNumBoltCount;			// 昔坤塘軒照拭 赤澗 恥 瑳闘 朝錘闘

	INT32			m_lHPPotionIDInInventory;	// 昔坤塘軒照拭 赤澗 HP 弘鉦 焼及
	INT32			m_lMPPotionIDInInventory;	// 昔坤塘軒照拭 赤澗 MP 弘鉦 焼及
	INT32			m_lSPPotionIDInInventory;	// 昔坤塘軒照拭 赤澗 SP 弘鉦 焼及

	BOOL			m_bUseReturnTeleportScroll;	// 腎差 庚辞研 紫遂梅澗走 食採
	AuPOS			m_stReturnPosition;			// 腎差 庚辞研 紫遂廃 走繊. 鞠宜焼臣凶 戚切軒稽 宜焼紳陥.

	UINT32			m_ulUseHPPotionTime;		// positon聖 原走厳生稽 紫遂廃 獣娃
	UINT32			m_ulUseMPPotionTime;		// positon聖 原走厳生稽 紫遂廃 獣娃
	UINT32			m_ulUseSPPotionTime;		// positon聖 原走厳生稽 紫遂廃 獣娃

	UINT32			m_ulUseReverseOrbTime;		// reverse orb 研 原走厳生稽 紫遂廃 獣娃
	UINT32			m_ulUseTransformTime;		// transform item 聖 原走厳生稽 紫遂廃 獣娃

	UINT32			m_ulUseJumpTime;			// 原走厳生稽 jump 焼戚奴 紫遂廃 獣娃

	UINT32			m_ulUseChattingEmphasis;	// 原走厳生稽 失情綬 焼戚奴 紫遂廃 獣娃

	AgpdItemCooldownArray	m_CooldownInfo;		// ItemTID 紺 cooldown 舛左.

	// 鯵昔暗掘獣 辛芝焼戚奴 
	AgpdPrivateOptionItem	m_stTradeOptionItem[AGPDITEM_PRIVATE_TRADE_OPTION_MAX];
	AgpdPrivateOptionItem	m_stClientTradeOptionItem[AGPDITEM_PRIVATE_TRADE_OPTION_MAX];

} AgpdItemADChar;

class AgpdItem : public ApdItem {
public:
	AgpdItemTemplate*			m_pcsItemTemplate;

	INT32						m_nDimension	;		// 域 昔畿什.

	INT32						m_ulCID;
	AgpdCharacter *				m_pcsCharacter;
	INT32						m_lPrevOwner;
	//INT8						m_nColor[2];
	ApSafeArray<INT8, 2>		m_nColor;
	//BOOL						m_bStackable;
	INT32						m_nCount;
	//INT16						m_nKeeping;
	AuPOS						m_posItem;
	//FLOAT						m_fMagicAttr[AGPMITEM_MAX_ITEM_MAGIC_ATTR];
	//INT16						m_nSpirited[AGPMITEM_MAX_ITEM_SPIRITED];
	//INT16						m_nEgoExp;
	//INT16						m_nEgoLevel;
	//INT16						m_nDurability;

	AgpdFactor					m_csFactor;
	AgpdFactor					m_csFactorPercent;
	AgpdFactor					m_csRestrictFactor;

	INT16						m_eNewStatus;						// 戚 焼奴戚 亜霜 雌殿 (init 雌殿拭辞) (2006/2/23)... (鐸遂, 昔坤塘軒, 競郊館 去去.)
	INT16						m_eStatus;							// 戚 焼奴税 雌殿... (鐸遂, 昔坤塘軒, 競郊館 去去.)

	INT32						m_lStatusFlag;

	AgpdCharacter				*m_pcsBoundOwner;

	ApBase						*m_pcsGuildWarehouseBase;

	//INT16						m_anGridPos[AGPDITEM_GRID_POS_NUM];
	ApSafeArray<INT16, AGPDITEM_GRID_POS_NUM>	m_anGridPos;
	ApSafeArray<INT16, AGPDITEM_GRID_POS_NUM>	m_anPrevGridPos;

//	stAgpmItemConvertHistory	m_stConvertHistory;

	// ego item
	CHAR						m_szSoulMasterID[AGPACHARACTER_MAX_ID_STRING + 1];		// 焼奴 爽昔 焼及

	AgpmItemSkullInfo*			m_pstSkullInfo;						// 戚 焼奴戚 政茨昔 井酔幻 五乞軒 拝雁背辞 紫遂廃陥.

	AgpdGridItem*				m_pcsGridItem;

	UINT32						m_ulRemoveTimeMSec;		// 戚 焼奴戚 肢薦吉 適薫朝錘闘

	//INT32						m_lDeleteReason;		// 戚 焼奴聖 DB拭辞 肢薦馬澗 井酔 肢薦馬虞壱 廃員拭辞 室特廃 戚政
	CHAR						m_szDeleteReason[AGPMITEM_MAX_DELETE_REASON + 1];

	INT32						m_lSkillTID;			// skill book(skill scroll) 昔 井酔 戚 焼奴聖 紫遂背辞 壕随 呪 赤澗 什迭 TID 室特
	INT32						m_lSkillLevel;			// skill scroll 昔 井酔 戚 什迭 傾婚

	ApSafeArray<UINT16, AGPDITEM_OPTION_MAX_NUM>		m_aunOptionTID;
	ApSafeArray<UINT16, AGPDITEM_OPTION_RUNE_MAX_NUM>	m_aunOptionTIDRune;
	ApSafeArray<AgpdItemOptionTemplate *, AGPDITEM_OPTION_MAX_NUM>		m_apcsOptionTemplate;
	ApSafeArray<AgpdItemOptionTemplate *, AGPDITEM_OPTION_RUNE_MAX_NUM>	m_apcsOptionTemplateRune;

	ApSafeArray<UINT16, AGPMITEM_MAX_SKILL_PLUS_EFFECT>	m_aunSkillPlusTID;		// 2007.02.05. steeple

//	2005.11.30. By SungHoon	For CashItem
	INT8						m_nInUseItem;			//	紫遂掻昔走
	INT64						m_lRemainTime;			//	害精 紫遂奄娃, milli-seconds
	UINT32						m_lExpireTime;			//	刃戟獣娃, seconds, time_t

	INT32						m_lCashItemUseCount;	//	紫遂判呪

	INT64						m_llStaminaRemainTime;	// A remaining time of staminas		2008.06.09. steeple
};


#endif //__AGPDITEM_H__