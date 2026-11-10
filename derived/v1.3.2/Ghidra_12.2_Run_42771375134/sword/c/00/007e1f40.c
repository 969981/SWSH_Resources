/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e1f40; name: FUN_007e1f40
 */


void * FUN_007e1f40(long param_1,int param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  pvVar2 = operator_new((long)param_2);
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 != *(undefined8 **)(param_1 + 0xe8)) {
    *puVar1 = pvVar2;
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 8;
    return pvVar2;
  }
  __src = *(void **)(param_1 + 0xd8);
  __n = (long)puVar1 - (long)__src;
  uVar5 = ((long)__n >> 3) + 1;
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(undefined8 **)(param_1 + 0xe8) - (long)__src;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_007e1ff0;
    }
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar5 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar5 << 3);
LAB_007e1ff0:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = pvVar2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0xd8) = __dest;
  *(undefined8 **)(param_1 + 0xe0) = puVar1 + 1;
  *(void **)(param_1 + 0xe8) = (void *)((long)__dest + uVar5 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return pvVar2;
}


