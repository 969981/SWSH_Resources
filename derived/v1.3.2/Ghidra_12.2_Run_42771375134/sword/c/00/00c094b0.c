/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c094b0; name: FUN_00c094b0
 */


void FUN_00c094b0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_18;
  
  if (param_2 < 8) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & 0x3c) == 0) {
      if ((uVar1 & 3) == 0) {
        pcVar3 = "grid_Menu2";
      }
      else {
        pcVar3 = "grid_Menu4";
      }
    }
    else {
      pcVar3 = "grid_Menu3";
    }
    uVar2 = FUN_00ffdc80(param_1 + 0x100,pcVar3);
    local_18 = 0;
    FUN_016b7990(uVar2,&local_18,1,0);
  }
  return;
}


