/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a742f0; name: FUN_00a742f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a742f0(long *param_1,long param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long local_60;
  long local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = (long)&DAT_01d38550;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  plVar3 = param_1 + 3;
  *plVar3 = 0;
  switch(*(undefined4 *)(param_2 + (long)param_3 * 4 + 0x1740)) {
  case 1:
    FUN_00a746e0(&local_60,"bin/chara/data/ob/ob0201_00_masterball/mdl/ob0201_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 2:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0202_00_ultraball/mdl/ob0202_00.gfbmdl");
    lVar2 = *plVar3;
    goto joined_r0x00a74390;
  case 3:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0203_00_greatball/mdl/ob0203_00.gfbmdl");
    lVar2 = *plVar3;
joined_r0x00a74390:
    if (lVar2 == 0) goto LAB_00a745b0;
    goto LAB_00a74598;
  default:
    FUN_00a74940(&local_60,"bin/chara/data/ob/ob0204_00_monsterball/mdl/ob0204_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 5:
    FUN_00a746e0(&local_60,"bin/chara/data/ob/ob0205_00_safariball/mdl/ob0205_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 6:
    FUN_00a74a70(&local_60,"bin/chara/data/ob/ob0206_00_netball/mdl/ob0206_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 7:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0207_00_diveball/mdl/ob0207_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 8:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0208_00_nestball/mdl/ob0208_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 9:
    FUN_00a746e0(&local_60,"bin/chara/data/ob/ob0209_00_repeatball/mdl/ob0209_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 10:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0210_00_timerball/mdl/ob0210_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0xb:
    FUN_00a746e0(&local_60,"bin/chara/data/ob/ob0211_00_luxuryball/mdl/ob0211_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0xc:
    pcVar1 = "bin/chara/data/ob/ob0212_00_premierball/mdl/ob0212_00.gfbmdl";
    goto LAB_00a74588;
  case 0xd:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0213_00_duskball/mdl/ob0213_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0xe:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0214_00_healball/mdl/ob0214_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0xf:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0215_00_quickball/mdl/ob0215_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x10:
    pcVar1 = "bin/chara/data/ob/ob0216_00_cherishball/mdl/ob0216_00.gfbmdl";
LAB_00a74588:
    FUN_00a74940(&local_60,pcVar1);
    lVar2 = *plVar3;
    break;
  case 0x11:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0217_00_fastball/mdl/ob0217_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x12:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0218_00_levelball/mdl/ob0218_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x13:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0219_00_lureball/mdl/ob0219_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x14:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0220_00_heavyball/mdl/ob0220_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x15:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0221_00_loveball/mdl/ob0221_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x16:
    FUN_00a746e0(&local_60,"bin/chara/data/ob/ob0222_00_friendball/mdl/ob0222_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x17:
    FUN_00a74ba0(&local_60,"bin/chara/data/ob/ob0223_00_moonball/mdl/ob0223_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x18:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0224_00_sportball/mdl/ob0224_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x19:
    FUN_00a74810(&local_60,"bin/chara/data/ob/ob0225_00_dreamball/mdl/ob0225_00.gfbmdl");
    lVar2 = *plVar3;
    break;
  case 0x1a:
    FUN_00a74cd0(&local_60,"bin/chara/data/ob/ob0226_00_parallelball/mdl/ob0226_00.gfbmdl");
    lVar2 = *plVar3;
  }
  if (lVar2 != 0) {
LAB_00a74598:
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
  }
LAB_00a745b0:
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = (long)&DAT_01d38550;
  param_1[3] = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  lVar2 = local_40;
  param_1[1] = local_58;
  param_1[2] = (long)local_50;
  local_40 = 0;
  param_1[3] = local_48;
  param_1[4] = lVar2;
  *(undefined4 *)(param_1 + 5) = local_38;
  if (local_48 == 0) {
    lVar2 = local_60;
  }
  else {
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    }
    lVar2 = local_60;
  }
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  *param_1 = lVar2;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


