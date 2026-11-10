/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ccd0; name: FUN_0072ccd0
 */


void FUN_0072ccd0(long *param_1,ulong *param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *__src;
  ulong uVar4;
  long lVar5;
  undefined1 local_70 [16];
  ulong *local_60;
  uint local_58;
  
  uVar2 = param_1[1];
  uVar4 = ((param_5 & 0xffffffff) - (param_3 & 0xffffffff)) + (param_4 - (long)param_2) * 8;
  param_1[1] = uVar2 + uVar4;
  local_58 = (uint)uVar2 & 0x3f;
  local_60 = (ulong *)(*param_1 + (uVar2 >> 3 & 0x1ffffffffffffff8));
  if (local_58 == (uint)param_3) {
    if (0 < (long)uVar4) {
      __src = param_2;
      if ((uVar2 & 0x3f) != 0) {
        uVar3 = (ulong)(0x40 - (uint)param_3);
        __src = param_2 + 1;
        uVar2 = uVar4;
        if ((long)uVar3 <= (long)uVar4) {
          uVar2 = uVar3;
        }
        uVar4 = uVar4 - uVar2;
        lVar5 = uVar2 + (param_3 & 0xffffffff);
        uVar2 = 0xffffffffffffffffU >> (uVar3 - uVar2 & 0x3f) & -1L << (param_3 & 0x3f);
        *local_60 = *local_60 & (uVar2 ^ 0xffffffffffffffff) | *param_2 & uVar2;
        lVar1 = lVar5 + 0x3f;
        if (-1 < lVar5) {
          lVar1 = lVar5;
        }
        local_60 = local_60 + (lVar1 >> 6);
      }
      uVar2 = uVar4 + 0x3f;
      if (-1 < (long)uVar4) {
        uVar2 = uVar4;
      }
      lVar5 = (long)uVar2 >> 6;
      memmove(local_60,__src,lVar5 * 8);
      if (0 < (long)uVar4 % 0x40) {
        uVar4 = 0xffffffffffffffff >> (-((long)uVar4 % 0x40) & 0x3fU);
        local_60[lVar5] = local_60[lVar5] & (uVar4 ^ 0xffffffffffffffff) | __src[lVar5] & uVar4;
      }
    }
  }
  else {
    FUN_0072ce40(local_70,param_2,param_3,param_4,param_5,&local_60);
  }
  return;
}


