/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd1d20; name: FUN_00bd1d20
 */


undefined8 FUN_00bd1d20(long param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int local_18;
  int local_14;
  
  if ((*(int *)(param_1 + 0x3008) == param_2) && (*(byte *)(param_1 + 0x300c) == param_3)) {
    local_14 = 0;
    local_18 = 0;
    FUN_00bcfb40(param_2,param_4,&local_14,&local_18);
    uVar1 = *(uint *)(param_1 + 0x300c);
    uVar2 = uVar1 >> 8 & 0x3f;
    if (((int)uVar2 <= local_14) && (local_14 < (int)(uVar2 + (uVar1 >> 0x14 & 0x3f)))) {
      uVar2 = uVar1 >> 0xe & 0x3f;
      if (((int)uVar2 <= local_18) && (local_18 < (int)(uVar2 + (uVar1 >> 0x1a)))) {
        return 1;
      }
    }
  }
  return 0;
}


