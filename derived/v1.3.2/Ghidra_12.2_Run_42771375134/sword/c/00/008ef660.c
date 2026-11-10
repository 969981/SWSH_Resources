/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef660; name: FUN_008ef660
 */


void FUN_008ef660(int param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = (uint)param_3;
  if (param_1 != 1) {
    if (param_1 != 2) {
      FUN_008ee8b0(0,param_2,(param_3 & 0xff) == 0,0);
      return;
    }
    if (((4 < (uVar2 & 0xff)) || (7 < (param_2 & 0xff))) ||
       (4 < *(int *)((&PTR_DAT_02619a60)[(char)param_2] + (param_3 & 0xff) * 4))) {
      FUN_008ee8b0(2,param_2,0,0);
      return;
    }
    uVar3 = 0;
    if (*(int *)((&PTR_DAT_02619a60)[(char)param_2] + (param_3 & 0xff) * 4) != 4) {
      uVar3 = 4;
    }
    FUN_008ee8b0(2,param_2,uVar3,0);
    return;
  }
  uVar1 = uVar2 >> 1 & 0x7f ^ 1;
  if (4 < (uVar2 & 0xff)) {
    FUN_008ee8b0(1,param_2,0,uVar1);
    return;
  }
  if ((param_2 - 1 & 0xff) < 5) {
    uVar2 = *(uint *)((&PTR_DAT_02619aa0)[(char)(param_2 - 1)] + (param_3 & 0xff) * 4);
  }
  else {
    uVar2 = *(uint *)(&DAT_02149c3c + (param_3 & 0xff) * 4);
  }
  if ((int)uVar2 < 5) {
    FUN_008ee8b0(1,param_2,(uVar2 | 2) == 2,uVar1);
    return;
  }
  FUN_008ee8b0(1,param_2,0,uVar1);
  return;
}


