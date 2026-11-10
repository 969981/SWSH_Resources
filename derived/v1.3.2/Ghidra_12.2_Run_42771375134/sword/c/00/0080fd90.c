/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080fd90; name: FUN_0080fd90
 */


void FUN_0080fd90(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *__dest;
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = operator_new(0x18);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    *param_1 = puVar4;
    puVar3 = (undefined4 *)puVar4[1];
    puVar1 = (undefined4 *)puVar4[2];
    if (puVar3 != puVar1) goto LAB_0080fdc4;
  }
  else {
    puVar3 = (undefined4 *)puVar4[1];
    puVar1 = (undefined4 *)puVar4[2];
    if (puVar3 != puVar1) {
LAB_0080fdc4:
      *puVar3 = param_2;
      puVar3[1] = 1;
      puVar3[2] = param_3;
      puVar4[1] = puVar4[1] + 0x10;
      return;
    }
  }
  __src = (void *)*puVar4;
  __n = (long)puVar3 - (long)__src;
  uVar5 = ((long)__n >> 4) + 1;
  if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)puVar1 - (long)__src >> 4) < 0x7ffffffffffffff) {
    uVar2 = (long)puVar1 - (long)__src >> 3;
    if (uVar5 <= uVar2) {
      uVar5 = uVar2;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_0080fe74;
    }
    if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar5 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar5 << 4);
LAB_0080fe74:
  puVar3 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
  puVar3[2] = param_3;
  *puVar3 = param_2;
  puVar3[1] = 1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *puVar4 = __dest;
  puVar4[1] = puVar3 + 4;
  puVar4[2] = (void *)((long)__dest + uVar5 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


