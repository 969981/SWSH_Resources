/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cafb0; name: FUN_009cafb0
 */


void FUN_009cafb0(long *param_1,long *param_2,long param_3)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  void *__dest;
  long lVar2;
  void *pvVar3;
  void *__src_00;
  
  puVar1 = PTR_DAT_02718890;
  param_1[4] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0xb8);
  param_1[2] = (long)(puVar1 + 0xd0);
  param_1[3] = (long)param_2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x3ba);
  param_1[0xc] = 0;
  param_1[6] = (long)param_2;
  param_1[7] = 0xfffffffffffffff;
  param_1[0x14] = 0;
  param_1[0xe] = (long)param_2;
  param_1[0xf] = 0xfffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  __src_00 = (void *)param_1[0x16];
  pvVar3 = __dest;
  if (__src_00 != (void *)0x0) {
    lVar2 = param_1[0x17];
    __src = (void *)((long)__src_00 + lVar2 * 0x10);
    if (lVar2 == 0) {
      lVar2 = -(long)__src;
    }
    else {
      memmove(__dest,__src_00,lVar2 * 0x10);
      pvVar3 = (void *)((long)__dest + lVar2 * 0x10);
      lVar2 = param_1[0x17] * 0x10 - (long)__src;
    }
    __n = (long)__src_00 + lVar2;
    if (__n != 0) {
      memmove(pvVar3,__src,__n);
      pvVar3 = (void *)((long)pvVar3 + __n);
    }
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],param_1[0x16],param_1[0x18] << 4,8);
  }
  param_1[0x18] = 8;
  param_1[0x16] = (long)__dest;
  param_1[0x17] = (long)pvVar3 - (long)__dest >> 4;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 5;
  *(undefined4 *)(param_1 + 0x1f) = 5;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 5;
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)param_1 + 0x35c),0,0x400);
}


