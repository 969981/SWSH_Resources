/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e0fe0; name: FUN_007e0fe0
 */


undefined8 FUN_007e0fe0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__dest;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  void *__src;
  size_t __n;
  byte *local_60;
  undefined8 *puStack_58;
  
  local_60 = (byte *)*param_2;
  puStack_58 = param_2;
  if ((*local_60 & 1) == 0) {
    local_60 = local_60 + 1;
    uVar1 = FUN_007fb850(param_1 + 0x118,&local_60);
  }
  else {
    local_60 = *(byte **)(local_60 + 0x10);
    uVar1 = FUN_007fb850(param_1 + 0x118,&local_60);
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  pbVar2 = (byte *)*param_2;
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
    plVar5 = *(long **)(param_1 + 400);
    plVar3 = *(long **)(param_1 + 0x198);
    if (plVar5 < plVar3) {
LAB_007e10bc:
      *plVar5 = (long)pbVar2;
      *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 8;
      return 1;
    }
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
    plVar5 = *(long **)(param_1 + 400);
    plVar3 = *(long **)(param_1 + 0x198);
    if (plVar5 < plVar3) goto LAB_007e10bc;
  }
  __src = *(void **)(param_1 + 0x188);
  __n = (long)plVar5 - (long)__src;
  uVar1 = ((long)__n >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)plVar3 - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar4 = (long)plVar3 - (long)__src >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
      goto LAB_007e10e0;
    }
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar1 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar1 << 3);
LAB_007e10e0:
  plVar5 = (long *)((long)__dest + ((long)__n >> 3) * 8);
  *plVar5 = (long)pbVar2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0x188) = __dest;
  *(long **)(param_1 + 400) = plVar5 + 1;
  *(void **)(param_1 + 0x198) = (void *)((long)__dest + uVar1 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return 1;
}


