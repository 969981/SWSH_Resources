/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769280; name: FUN_00769280
 */


void FUN_00769280(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  if (puVar5 != *(undefined4 **)(param_1 + 0x30)) {
    *puVar5 = param_2;
    *(undefined8 *)(puVar5 + 2) = param_3;
    puVar5[4] = param_4;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x18;
    goto LAB_007693ac;
  }
  __src = *(void **)(param_1 + 0x20);
  __n = (long)puVar5 - (long)__src;
  uVar6 = 0xaaaaaaaaaaaaaaa;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(undefined4 **)(param_1 + 0x30) - (long)__src >> 3;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0x555555555555555) {
    uVar4 = lVar3 * 0x5555555555555556;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) goto LAB_00769340;
    pvVar2 = (void *)0x0;
  }
  else {
LAB_00769340:
    pvVar2 = operator_new(uVar6 * 0x18);
  }
  lVar3 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  puVar5 = (undefined4 *)((long)pvVar2 + ((long)__n >> 3) * 8);
  puVar5[4] = param_4;
  *(undefined8 *)(puVar5 + 2) = param_3;
  *puVar5 = param_2;
  if (0 < (long)__n) {
    memcpy(puVar5 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 6,__src,__n);
  }
  *(undefined4 **)(param_1 + 0x20) = puVar5 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 6;
  *(undefined4 **)(param_1 + 0x28) = puVar5 + 6;
  *(void **)(param_1 + 0x30) = (void *)((long)pvVar2 + uVar6 * 0x18);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_007693ac:
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


