/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01026ad0; name: FUN_01026ad0
 */


void FUN_01026ad0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  void *__dest;
  void *__src;
  void *__src_00;
  size_t __n_00;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,0x170,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)*param_3;
  *puVar1 = 0xffffffff;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(long **)(puVar1 + 0x34) = plVar3;
  *(undefined8 *)(puVar1 + 0x36) = 0xea0ea0ea0ea0ea;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(long **)(puVar1 + 0x24) = plVar3;
  *(undefined8 *)(puVar1 + 0x26) = 0xea0ea0ea0ea0ea;
  *(undefined8 *)(puVar1 + 0x44) = 0;
  *(undefined8 *)(puVar1 + 0x46) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x4600,8);
  __src_00 = *(void **)(puVar1 + 0x44);
  if (__src_00 != (void *)0x0) {
    __src = (void *)((long)__src_00 + *(long *)(puVar1 + 0x46) * 0x118);
    __n_00 = *(long *)(puVar1 + 0x46) * 0x118;
    if (__n_00 != 0) {
      memmove(__dest,__src_00,__n_00);
      __n = (long)__src_00 + (*(long *)(puVar1 + 0x46) * 0x118 - (long)__src);
      if (__n != 0) {
        memmove((void *)((long)__dest + __n_00),__src,__n);
      }
    }
    (**(code **)(**(long **)(puVar1 + 0x34) + 0x18))
              (*(long **)(puVar1 + 0x34),*(undefined8 *)(puVar1 + 0x44),
               *(long *)(puVar1 + 0x48) * 0x118,8);
  }
  *(undefined8 *)(puVar1 + 0x46) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0x40;
  puVar1[0x5a] = 0x20;
  *(void **)(puVar1 + 0x44) = __dest;
  *(undefined8 *)(puVar1 + 0x4c) = 0;
  *(undefined8 *)(puVar1 + 0x56) = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  *(undefined8 *)(puVar1 + 0x52) = 0;
  *(undefined8 *)(puVar1 + 0x54) = 0;
  *(undefined8 *)(puVar1 + 0x4e) = 0;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0x170;
  param_1[3] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


