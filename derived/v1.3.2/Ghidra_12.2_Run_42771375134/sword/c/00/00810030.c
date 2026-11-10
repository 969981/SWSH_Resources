/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00810030; name: FUN_00810030
 */


undefined8 * FUN_00810030(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  void *__dest;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = operator_new(0x18);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    *param_1 = puVar5;
    puVar4 = (undefined4 *)puVar5[1];
    puVar2 = (undefined4 *)puVar5[2];
    if (puVar4 != puVar2) goto LAB_00810078;
  }
  else {
    puVar4 = (undefined4 *)puVar5[1];
    puVar2 = (undefined4 *)puVar5[2];
    if (puVar4 != puVar2) {
LAB_00810078:
      *puVar4 = param_2;
      puVar4[1] = 3;
      *(undefined8 **)(puVar4 + 2) = puVar1;
      puVar5[1] = puVar5[1] + 0x10;
      return puVar1;
    }
  }
  __src = (void *)*puVar5;
  __n = (long)puVar4 - (long)__src;
  uVar6 = ((long)__n >> 4) + 1;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((long)puVar2 - (long)__src >> 4) < 0x7ffffffffffffff) {
    uVar3 = (long)puVar2 - (long)__src >> 3;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
      goto LAB_00810110;
    }
    if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar6 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar6 << 4);
LAB_00810110:
  puVar4 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
  *puVar4 = param_2;
  puVar4[1] = 3;
  *(undefined8 **)(puVar4 + 2) = puVar1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *puVar5 = __dest;
  puVar5[1] = puVar4 + 4;
  puVar5[2] = (void *)((long)__dest + uVar6 * 0x10);
  if (__src == (void *)0x0) {
    return puVar1;
  }
  operator_delete(__src);
  return puVar1;
}


