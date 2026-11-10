/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01017c60; name: FUN_01017c60
 */


void FUN_01017c60(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar3 = *(ulong *)(param_1 + 8);
    bVar1 = uVar3 < 3;
    if (uVar3 < 2) {
LAB_01017cb4:
      FUN_01017f20(param_1,param_2);
      return;
    }
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar3 = *(ulong *)(param_1 + 8);
    bVar1 = uVar3 <= param_2;
    if (uVar3 < param_2) goto LAB_01017cb4;
  }
  if (!bVar1) {
    uVar2 = (ulong)((float)*(ulong *)(param_1 + 0x48) / *(float *)(param_1 + 0x50));
    if (uVar3 < 3 || (uVar3 - 1 & uVar3) != 0) {
      uVar2 = std::__next_prime(uVar2);
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
    }
    else {
      if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
    }
    if (uVar2 < uVar3) {
      FUN_01017f20(param_1);
      return;
    }
  }
  return;
}


