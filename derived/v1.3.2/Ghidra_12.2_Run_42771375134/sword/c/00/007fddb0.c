/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fddb0; name: FUN_007fddb0
 */


void * FUN_007fddb0(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  pvVar2 = operator_new(0x58);
  FUN_00858d60();
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 < *(undefined8 **)(param_1 + 0xb8)) {
    *puVar1 = pvVar2;
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 8;
    return pvVar2;
  }
  __src = *(void **)(param_1 + 0xa8);
  __n = (long)puVar1 - (long)__src;
  uVar5 = ((long)__n >> 3) + 1;
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(undefined8 **)(param_1 + 0xb8) - (long)__src;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_007fde58;
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
LAB_007fde58:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = pvVar2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0xa8) = __dest;
  *(undefined8 **)(param_1 + 0xb0) = puVar1 + 1;
  *(void **)(param_1 + 0xb8) = (void *)((long)__dest + uVar5 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return pvVar2;
}


