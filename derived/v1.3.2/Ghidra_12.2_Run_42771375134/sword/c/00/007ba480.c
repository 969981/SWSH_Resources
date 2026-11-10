/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ba480; name: FUN_007ba480
 */


void FUN_007ba480(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  void *pvVar5;
  void *__src_00;
  long local_38;
  
  local_38 = *param_4;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_007b6ec0(param_1,param_2,param_3,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  param_1[0xa0] = 0;
  puVar1 = PTR_DAT_02716ac8;
  *param_1 = (long)(PTR_DAT_02716ac0 + 0x10);
  puVar2 = PTR_DAT_02716ad0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  param_1[0x9f] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716ad8;
  param_1[0xa1] = (long)(puVar2 + 0x10);
  param_1[0xa3] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716ae0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xa5] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716ae8;
  param_1[0xab] = 0;
  param_1[0xa8] = (long)(puVar1 + 0x10);
  param_1[0xaa] = (long)(PTR_DAT_02716af0 + 0x10);
  puVar1 = PTR_DAT_02716af8;
  plVar3 = (long *)param_1[1];
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb2] = (long)plVar3;
  param_1[0xac] = (long)(puVar1 + 0x10);
  param_1[0xaf] = 0xf4b17a579f18960;
  param_1[0xb0] = -0x7d5d4e8add6295a5;
  param_1[0xb3] = 0x3fffffffffffffff;
  param_1[0xb8] = 0;
  param_1[0xba] = (long)plVar3;
  param_1[0xbb] = 0x3fffffffffffffff;
  param_1[0xc0] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x200,4);
  __src_00 = (void *)param_1[0xc2];
  pvVar5 = __dest;
  if (__src_00 != (void *)0x0) {
    lVar4 = param_1[0xc3];
    __src = (void *)((long)__src_00 + lVar4 * 4);
    if (lVar4 == 0) {
      lVar4 = -(long)__src;
    }
    else {
      memmove(__dest,__src_00,lVar4 * 4);
      pvVar5 = (void *)((long)__dest + lVar4 * 4);
      lVar4 = param_1[0xc3] * 4 - (long)__src;
    }
    __n = (long)__src_00 + lVar4;
    if (__n != 0) {
      memmove(pvVar5,__src,__n);
      pvVar5 = (void *)((long)pvVar5 + __n);
    }
    (**(code **)(*(long *)param_1[0xba] + 0x18))
              ((long *)param_1[0xba],param_1[0xc2],param_1[0xc4] << 2,4);
  }
  param_1[0xc4] = 0x80;
  param_1[0xc2] = (long)__dest;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[0xc3] = (long)pvVar5 - (long)__dest >> 2;
  param_1[0xae] = (long)param_1;
  param_1[0xa4] = (long)param_1;
  param_1[0xa9] = (long)param_1;
  param_1[0x27] = (long)param_1;
  param_1[0xa2] = (long)param_1;
  return;
}


