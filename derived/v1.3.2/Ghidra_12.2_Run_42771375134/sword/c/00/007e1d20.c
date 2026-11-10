/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e1d20; name: FUN_007e1d20
 */


string * FUN_007e1d20(long param_1,string *param_2)

{
  undefined8 *puVar1;
  string *this;
  void *__dest;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  this = operator_new(0x18);
  std::string::string(this,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != *(undefined8 **)(param_1 + 0xa0)) {
    *puVar1 = this;
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 8;
    return this;
  }
  __src = *(void **)(param_1 + 0x90);
  __n = (long)puVar1 - (long)__src;
  uVar4 = ((long)__n >> 3) + 1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = (long)*(undefined8 **)(param_1 + 0xa0) - (long)__src;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      goto LAB_007e1dd0;
    }
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar4 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar4 << 3);
LAB_007e1dd0:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = this;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0x90) = __dest;
  *(undefined8 **)(param_1 + 0x98) = puVar1 + 1;
  *(void **)(param_1 + 0xa0) = (void *)((long)__dest + uVar4 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return this;
}


