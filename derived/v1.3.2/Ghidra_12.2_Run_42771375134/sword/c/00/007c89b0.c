/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c89b0; name: FUN_007c89b0
 */


void FUN_007c89b0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  time_t tVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  void *pvVar5;
  void *__src_00;
  long local_48;
  
  local_48 = *param_4;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_007b6ec0(param_1,param_2,param_3,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  param_1[0xa0] = 0;
  puVar1 = PTR_DAT_02716c10;
  param_1[0xa1] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c18;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa4] = 0;
  param_1[0x9f] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c20;
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  param_1[0xa3] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c28;
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  param_1[0xa6] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c30;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xa9] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c38;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  param_1[0xac] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c40;
  param_1[0xb1] = 0;
  param_1[0xb3] = 0;
  param_1[0xaf] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c48;
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  param_1[0xb2] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c50;
  param_1[0xb7] = 0;
  param_1[0xb9] = 0;
  param_1[0xb5] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_02716c58;
  param_1[0xbc] = -0x7d5d4e8add6295a5;
  param_1[0xbd] = 0;
  param_1[0xb8] = (long)(puVar1 + 0x10);
  param_1[0xba] = 0;
  param_1[0xbb] = 0xf4b17a579f18960;
  tVar2 = time((time_t *)0x0);
  param_1[0xbb] = tVar2;
  param_1[0xbc] = -0x7d5d4e8add6295a5;
  puVar1 = PTR_DAT_02716c60;
  param_1[0xbf] = 0;
  param_1[0xbe] = (long)(puVar1 + 0x10);
  param_1[0xc0] = 0;
  puVar1 = PTR_DAT_02716c68;
  plVar3 = (long *)param_1[1];
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0xf4b17a579f18960;
  param_1[0xc5] = -0x7d5d4e8add6295a5;
  param_1[0xc1] = (long)(puVar1 + 0x10);
  param_1[0xc6] = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  param_1[200] = (long)plVar3;
  param_1[0xc9] = 0x3fffffffffffffff;
  param_1[0xce] = 0;
  param_1[0xd0] = (long)plVar3;
  param_1[0xd1] = 0x3fffffffffffffff;
  param_1[0xd6] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x200,4);
  __src_00 = (void *)param_1[0xd8];
  pvVar5 = __dest;
  if (__src_00 != (void *)0x0) {
    lVar4 = param_1[0xd9];
    __src = (void *)((long)__src_00 + lVar4 * 4);
    if (lVar4 == 0) {
      lVar4 = -(long)__src;
    }
    else {
      memmove(__dest,__src_00,lVar4 * 4);
      pvVar5 = (void *)((long)__dest + lVar4 * 4);
      lVar4 = param_1[0xd9] * 4 - (long)__src;
    }
    __n = (long)__src_00 + lVar4;
    if (__n != 0) {
      memmove(pvVar5,__src,__n);
      pvVar5 = (void *)((long)pvVar5 + __n);
    }
    (**(code **)(*(long *)param_1[0xd0] + 0x18))
              ((long *)param_1[0xd0],param_1[0xd8],param_1[0xda] << 2,4);
  }
  param_1[0xd9] = (long)pvVar5 - (long)__dest >> 2;
  param_1[0xd8] = (long)__dest;
  param_1[0xda] = 0x80;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  tVar2 = time((time_t *)0x0);
  param_1[0xc5] = -0x7d5d4e8add6295a5;
  param_1[0xc4] = tVar2;
  param_1[0xab] = (long)param_1;
  param_1[0xae] = (long)param_1;
  param_1[0xa1] = (long)param_1;
  param_1[0xa5] = (long)param_1;
  param_1[0xb7] = (long)param_1;
  param_1[0xaa] = (long)param_1;
  param_1[0xbd] = (long)param_1;
  param_1[0xc0] = (long)param_1;
  param_1[0xa8] = (long)param_1;
  param_1[0xb1] = (long)param_1;
  param_1[0xb4] = (long)param_1;
  param_1[0xc3] = (long)param_1;
  return;
}


