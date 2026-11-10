/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01451b60; name: FUN_01451b60
 */


undefined4 FUN_01451b60(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_012b4190(auStack_20,param_1 + 0x120,(long)param_2);
  local_48 = 0x68fdb9c32c3982eb;
  local_40 = "unlock_condition";
  local_38 = 0x10;
  FUN_012b4250(auStack_30,auStack_20,&local_48);
  local_50 = 0;
  lVar1 = FUN_012b4b40(auStack_30,&local_50);
  if (lVar1 < 0x162e5c26b74250dc) {
    if (lVar1 == -0x59f215d9881ce540) {
      return 1;
    }
    if (lVar1 == -0xad58ed95afa86d0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0x162e5c26b74250dc) {
      return 2;
    }
    if (lVar1 == 0x5d678026e025d41f) {
      return 3;
    }
  }
  uVar2 = 4;
  if (lVar1 != -0x601ec8f142387999) {
    uVar2 = 2;
  }
  return uVar2;
}


