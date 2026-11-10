/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19c60; name: FUN_00a19c60
 */


void FUN_00a19c60(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  void *__dest;
  size_t sVar3;
  void *pvVar4;
  void *__src;
  void *__src_00;
  
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_02718ee8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  plVar2 = (long *)FUN_00ff93d0();
  param_1[0x16] = 0;
  param_1[0x10] = (long)plVar2;
  param_1[0x11] = 0x666666666666666;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x18] = (long)plVar2;
  param_1[0x19] = 0x666666666666666;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x1400,8);
  __src_00 = (void *)param_1[0x20];
  pvVar4 = __dest;
  if (__src_00 != (void *)0x0) {
    __src = (void *)((long)__src_00 + param_1[0x21] * 0x28);
    sVar3 = param_1[0x21] * 0x28;
    if (sVar3 != 0) {
      memmove(__dest,__src_00,sVar3);
      pvVar4 = (void *)((long)__dest + sVar3);
      sVar3 = (long)__src_00 + (param_1[0x21] * 0x28 - (long)__src);
      if (sVar3 != 0) {
        memmove(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
    }
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],param_1[0x20],param_1[0x22] * 0x28,8);
  }
  param_1[0x22] = 0x80;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x20] = (long)__dest;
  param_1[0x21] = ((long)pvVar4 - (long)__dest >> 3) * -0x3333333333333333;
  return;
}


