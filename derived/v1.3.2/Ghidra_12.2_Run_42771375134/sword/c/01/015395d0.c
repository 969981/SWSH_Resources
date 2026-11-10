/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015395d0; name: FUN_015395d0
 */


void * FUN_015395d0(void *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  void *__src;
  ulong *local_80;
  uint local_78;
  ulong *local_70;
  undefined4 local_68;
  long local_60;
  uint local_58;
  void *local_50;
  undefined4 local_48;
  
  if (0x3f < param_2) {
    param_2 = 0x40;
  }
  uVar2 = 0x40 - param_2;
  puVar4 = (ulong *)((long)param_1 + 8);
  lVar1 = (long)param_1 + (uVar2 >> 3 & 0x1ffffffffffffff8);
  if ((uVar2 & 0x3f) == 0) {
    uVar2 = (lVar1 - (long)param_1) * 8;
    if ((long)uVar2 < 1) {
      local_78 = 0;
      local_80 = puVar4;
    }
    else {
      uVar3 = (ulong)(lVar1 - (long)param_1) >> 3 & 0x3ffffffffffffff;
      puVar4 = puVar4 + -uVar3;
      __src = (void *)(lVar1 + uVar3 * -8);
      memmove(puVar4,__src,uVar3 * 8);
      uVar3 = uVar2 & 0x38;
      local_78 = (uint)uVar3;
      local_80 = puVar4;
      if (uVar3 != 0) {
        uVar3 = -1L << (-uVar3 & 0x3f);
        local_80 = puVar4 + -1;
        *local_80 = *local_80 & (uVar3 ^ 0xffffffffffffffff) | *(ulong *)((long)__src + -8) & uVar3;
        local_78 = -(int)uVar2 & 0x38;
      }
    }
  }
  else {
    local_48 = 0;
    local_68 = 0;
    local_70 = puVar4;
    local_60 = lVar1;
    local_58 = (uint)uVar2 & 0x3f;
    local_50 = param_1;
    FUN_01539720(&local_80,&local_50,&local_60,&local_70);
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_1,0,(param_2 >> 6) << 3);
  }
  return param_1;
}


