/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075d210; name: FUN_0075d210
 */


void FUN_0075d210(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_60;
  int local_58;
  long local_50;
  int local_48;
  
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 == 0) {
    iVar2 = -2;
  }
  else {
    FUN_017606f0(lVar3,PTR_DAT_02715fb0);
    FUN_0175f270(lVar3,0xffffffff);
    iVar2 = FUN_0175dbf0(lVar3,0xfff0b9d8);
    FUN_0175ef30(lVar3,0xfffffffe);
  }
  local_60 = lVar3;
  FUN_0175f270(lVar3,(int)lVar1);
  local_58 = FUN_0175dbf0(lVar3,0xfff0b9d8);
  local_50 = lVar3;
  local_48 = iVar2;
  FUN_0075d860(param_1,&local_60);
  if ((local_50 != 0) && (local_48 != -2)) {
    FUN_0175dcd0(local_50,0xfff0b9d8);
  }
  if ((local_60 != 0) && (local_58 != -2)) {
    FUN_0175dcd0(local_60,0xfff0b9d8);
  }
  return;
}


