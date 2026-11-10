/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a54eb0; name: FUN_00a54eb0
 */


void FUN_00a54eb0(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *__dest;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *__src_00;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1e0,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar5 = *param_3;
  lVar6 = *param_4;
  plVar2[0x18] = 0;
  plVar2[0x19] = 0;
  puVar1 = PTR_DAT_02719378;
  plVar2[0x16] = 0;
  plVar2[0x17] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[2] = lVar6;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = lVar5;
  plVar4 = (long *)FUN_00ff93d0(plVar2);
  plVar2[0x26] = (long)plVar4;
  plVar2[0x27] = 0x1fffffffffffffff;
  plVar2[0x2c] = 0;
  plVar2[0x2e] = (long)plVar4;
  plVar2[0x2f] = 0x1fffffffffffffff;
  plVar2[0x34] = 0;
  plVar2[0x36] = 0;
  plVar2[0x37] = 0;
  plVar2[0x38] = 0;
  __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x400,4);
  __src_00 = (void *)plVar2[0x36];
  pvVar7 = __dest;
  if (__src_00 != (void *)0x0) {
    lVar5 = plVar2[0x37];
    __src = (void *)((long)__src_00 + lVar5 * 8);
    if (lVar5 == 0) {
      lVar5 = -(long)__src;
    }
    else {
      memmove(__dest,__src_00,lVar5 * 8);
      pvVar7 = (void *)((long)__dest + lVar5 * 8);
      lVar5 = plVar2[0x37] * 8 - (long)__src;
    }
    __n = (long)__src_00 + lVar5;
    if (__n != 0) {
      memmove(pvVar7,__src,__n);
      pvVar7 = (void *)((long)pvVar7 + __n);
    }
    (**(code **)(*(long *)plVar2[0x2e] + 0x18))
              ((long *)plVar2[0x2e],plVar2[0x36],plVar2[0x38] << 3,4);
  }
  plVar2[0x36] = (long)__dest;
  plVar2[0x37] = (long)pvVar7 - (long)__dest >> 3;
  plVar2[0x38] = 0x80;
  plVar2[0x3a] = -0x100000000;
  *(undefined1 *)(plVar2 + 0x3b) = 0;
  *param_1 = plVar2;
  param_1[1] = param_2;
  param_1[2] = 0x1e0;
  param_1[3] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


