/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db5e00; name: FUN_00db5e00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db5e00(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  fVar1 = (float)*param_3;
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  uStack_40 = CONCAT44(fVar2 + (float)((ulong)_DAT_01d4a1b0 >> 0x20),fVar1 + (float)_DAT_01d4a1b0);
  fVar3 = (float)param_3[1];
  fVar4 = (float)((ulong)param_3[1] >> 0x20);
  uStack_38 = CONCAT44(fVar4 + (float)((ulong)_UNK_01d4a1b8 >> 0x20),fVar3 + (float)_UNK_01d4a1b8);
  local_50 = CONCAT44(fVar2 + (float)((ulong)_DAT_01d4a7a0 >> 0x20),fVar1 + (float)_DAT_01d4a7a0);
  uStack_48 = CONCAT44(fVar4 + (float)((ulong)_UNK_01d4a7a8 >> 0x20),fVar3 + (float)_UNK_01d4a7a8);
  FUN_006c5c60(param_1);
  FUN_006c83a0(*(undefined8 *)(param_2 + 0x288),&uStack_40,&local_50,param_4,param_1);
  return;
}


