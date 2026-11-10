/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbb310; name: FUN_00bbb310
 */


bool FUN_00bbb310(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  FUN_00bd15f0(*(undefined8 *)(param_1 + 0x5f0),3,2,6);
  FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),3,0);
  FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),3,1);
  uVar2 = *(undefined4 *)(param_1 + 0x614);
  if ((*(int *)(param_1 + 0x618) == 2) ||
     (uVar3 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,uVar2,0), (uVar3 & 1) == 0)) {
    uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar2,0);
  }
  else {
    uVar4 = 0;
  }
  FUN_00bb7250(param_1,uVar4,0,0);
  if ((*(int *)(param_1 + 0x618) == 2) ||
     (uVar3 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,uVar2,1), (uVar3 & 1) == 0)) {
    uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar2,1);
  }
  else {
    uVar4 = 0;
  }
  FUN_00bb7250(param_1,uVar4,1,0);
  if ((*(int *)(param_1 + 0x618) == 2) ||
     (uVar3 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,uVar2,2), (uVar3 & 1) == 0)) {
    uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar2,2);
  }
  else {
    uVar4 = 0;
  }
  FUN_00bb7250(param_1,uVar4,2,0);
  if ((*(int *)(param_1 + 0x618) == 2) ||
     (uVar3 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,uVar2,3), (uVar3 & 1) == 0)) {
    uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar2,3);
  }
  else {
    uVar4 = 0;
  }
  FUN_00bb7250(param_1,uVar4,3,0);
  if ((*(int *)(param_1 + 0x618) == 2) ||
     (uVar3 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,uVar2,4), (uVar3 & 1) == 0)) {
    uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar2,4);
  }
  else {
    uVar4 = 0;
  }
  FUN_00bb7250(param_1,uVar4,4,0);
  if ((*(int *)(param_1 + 0x618) == 2) ||
     (uVar3 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,uVar2,5), (uVar3 & 1) == 0)) {
    uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar2,5);
  }
  else {
    uVar4 = 0;
  }
  FUN_00bb7250(param_1,uVar4,5,0);
  FUN_00bbafd0(param_1,uVar2,0);
  lVar1 = param_1 + 0x100;
  FUN_00ffcf80(lVar1,"anime_team_shift_reset");
  FUN_00ffcf80(lVar1,"anime_L_header_team_00_arrow_reset");
  FUN_00ffdc80(lVar1,"poke_panel");
  local_28 = FUN_016b8190();
  if ((*(char *)(param_1 + 0x60c) != '\0') && (*(char *)(param_1 + 0x620) == '\0')) {
    FUN_00bb50c0(param_1,&local_28,0);
  }
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_28);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_28);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_28);
    break;
  default:
    FUN_00bbcd10(param_1,&local_28);
  }
  return *(char *)(param_1 + 0x620) == '\0';
}


