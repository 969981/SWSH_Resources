/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120e220; name: FUN_0120e220
 */


void FUN_0120e220(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  void *__dest;
  long lVar3;
  size_t sVar4;
  void *pvVar5;
  void *__src;
  void *__src_00;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_02726090;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar3;
  *puVar1 = 1;
  puVar1 = PTR_DAT_02726098;
  param_1[0x10] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x40);
  param_1[10] = (long)param_2;
  param_1[0xb] = 0xaaaaaaaaaaaaaaa;
  param_1[0x12] = (long)param_2;
  param_1[0x13] = 0xaaaaaaaaaaaaaaa;
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x300,4);
  __src_00 = (void *)param_1[0x1a];
  pvVar5 = __dest;
  if (__src_00 != (void *)0x0) {
    __src = (void *)((long)__src_00 + param_1[0x1b] * 0x18);
    sVar4 = param_1[0x1b] * 0x18;
    if (sVar4 != 0) {
      memmove(__dest,__src_00,sVar4);
      pvVar5 = (void *)((long)__dest + sVar4);
      sVar4 = (long)__src_00 + (param_1[0x1b] * 0x18 - (long)__src);
      if (sVar4 != 0) {
        memmove(pvVar5,__src,sVar4);
        pvVar5 = (void *)((long)pvVar5 + sVar4);
      }
    }
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],param_1[0x1a],param_1[0x1c] * 0x18,4);
  }
  param_1[0x1a] = (long)__dest;
  param_1[0x1b] = ((long)pvVar5 - (long)__dest >> 3) * -0x5555555555555555;
  param_1[0x1c] = 0x20;
  return;
}


