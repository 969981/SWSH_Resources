/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d3f80; name: FUN_007d3f80
 */


void FUN_007d3f80(long *param_1,long *param_2,undefined1 param_3)

{
  undefined *puVar1;
  void *__dest;
  size_t sVar2;
  void *pvVar3;
  void *__src;
  void *__src_00;
  
  param_1[4] = (long)param_2;
  *(undefined1 *)(param_1 + 5) = param_3;
  puVar1 = PTR_DAT_02716d00;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x2c] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x50);
  param_1[2] = (long)(puVar1 + 0x68);
  param_1[3] = (long)(puVar1 + 0x88);
  *(undefined2 *)((long)param_1 + 0xac) = 0xfc18;
  param_1[10] = 0;
  param_1[0xb] = (long)param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = (long)param_2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x26] = (long)param_2;
  param_1[0x27] = 0x555555555555555;
  param_1[0x2e] = (long)param_2;
  param_1[0x2f] = 0x555555555555555;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,0xc00,8);
  __src_00 = (void *)param_1[0x36];
  pvVar3 = __dest;
  if (__src_00 != (void *)0x0) {
    __src = (void *)((long)__src_00 + param_1[0x37] * 0x30);
    sVar2 = param_1[0x37] * 0x30;
    if (sVar2 != 0) {
      memmove(__dest,__src_00,sVar2);
      pvVar3 = (void *)((long)__dest + sVar2);
      sVar2 = (long)__src_00 + (param_1[0x37] * 0x30 - (long)__src);
      if (sVar2 != 0) {
        memmove(pvVar3,__src,sVar2);
        pvVar3 = (void *)((long)pvVar3 + sVar2);
      }
    }
    (**(code **)(*(long *)param_1[0x2e] + 0x18))
              ((long *)param_1[0x2e],param_1[0x36],param_1[0x38] * 0x30,8);
  }
  param_1[0x36] = (long)__dest;
  param_1[0x37] = ((long)pvVar3 - (long)__dest >> 4) * -0x5555555555555555;
  param_1[0x38] = 0x40;
  return;
}


