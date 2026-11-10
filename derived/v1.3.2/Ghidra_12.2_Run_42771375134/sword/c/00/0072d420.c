/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072d420; name: FUN_0072d420
 */


void FUN_0072d420(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *__src;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_90 [16];
  ulong *local_80;
  uint local_78;
  long local_70;
  uint local_68;
  ulong *local_60;
  uint local_58;
  
  uVar5 = param_1[1];
  param_1[1] = (uVar5 - *(uint *)(param_2 + 1)) + (ulong)*(uint *)(param_3 + 1) +
               (*param_3 - *param_2) * 8;
  local_58 = *(uint *)(param_2 + 1);
  uVar4 = (ulong)local_58;
  local_60 = (ulong *)*param_2;
  local_70 = *param_3;
  local_68 = *(uint *)(param_3 + 1);
  local_80 = (ulong *)(*param_1 + (uVar5 >> 3 & 0x1ffffffffffffff8));
  local_78 = (uint)uVar5 & 0x3f;
  if (local_58 == local_78) {
    uVar5 = (local_68 - uVar4) + (local_70 - (long)local_60) * 8;
    if (0 < (long)uVar5) {
      __src = local_60;
      if (local_58 != 0) {
        uVar3 = (ulong)(0x40 - local_58);
        __src = local_60 + 1;
        uVar1 = uVar5;
        if ((long)uVar3 <= (long)uVar5) {
          uVar1 = uVar3;
        }
        uVar3 = 0xffffffffffffffffU >> (uVar3 - uVar1 & 0x3f) & -1L << (uVar4 & 0x3f);
        uVar5 = uVar5 - uVar1;
        lVar6 = uVar1 + uVar4;
        *local_80 = *local_80 & (uVar3 ^ 0xffffffffffffffff) | *local_60 & uVar3;
        lVar2 = lVar6 + 0x3f;
        if (-1 < lVar6) {
          lVar2 = lVar6;
        }
        local_80 = local_80 + (lVar2 >> 6);
      }
      uVar4 = uVar5 + 0x3f;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      lVar6 = (long)uVar4 >> 6;
      memmove(local_80,__src,lVar6 * 8);
      if (0 < (long)uVar5 % 0x40) {
        uVar5 = 0xffffffffffffffff >> (-((long)uVar5 % 0x40) & 0x3fU);
        local_80[lVar6] = local_80[lVar6] & (uVar5 ^ 0xffffffffffffffff) | __src[lVar6] & uVar5;
      }
    }
  }
  else {
    FUN_0072d5c0(local_90,&local_60,&local_70,&local_80);
  }
  return;
}


