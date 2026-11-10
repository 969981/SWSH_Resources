/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398460; name: FUN_00398460
 */


void FUN_00398460(undefined4 param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  *(int *)(param_2 + (ulong)(uint)((int)((ulong)(param_4 - param_5) >> 2) * -0x49249249) * 4) =
       (int)((ulong)(param_3 - param_5) >> 2) * -0x49249249;
  uVar1 = *(uint *)(param_4 + 0x18);
  while ((uVar1 & 1) == 0) {
    FUN_00398460(param_1,param_2,param_4,param_5 + (ulong)(uVar1 >> 1) * 0x1c,param_5);
    lVar2 = param_5 + (ulong)(*(uint *)(param_4 + 0x18) >> 1) * 0x1c;
    uVar3 = param_4 - param_5;
    param_4 = 0;
    if (lVar2 != 0) {
      param_4 = lVar2 + 0x1c;
    }
    *(int *)(param_2 + (ulong)(uint)((int)((ulong)(param_4 - param_5) >> 2) * -0x49249249) * 4) =
         (int)(uVar3 >> 2) * -0x49249249;
    uVar1 = *(uint *)(param_4 + 0x18);
  }
  return;
}


