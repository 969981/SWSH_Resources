/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba4b0; name: FUN_003ba4b0
 */


void FUN_003ba4b0(long param_1,long param_2)

{
  uint uVar1;
  void *__dest;
  void *__src;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 == *(uint *)(param_1 + 0x30)) {
    if (uVar1 == 0xffffffff) {
      __dest = (void *)0x0;
      iVar3 = 0;
      __src = *(void **)(param_1 + 0x28);
    }
    else if (uVar1 + 1 < 5) {
      __dest = (void *)(param_1 + 8);
      iVar3 = 4;
      __src = *(void **)(param_1 + 0x28);
    }
    else {
      uVar2 = uVar1 | uVar1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      iVar3 = (uVar2 | uVar2 >> 0x10) + 1;
      __dest = (void *)FUN_003ddb60(*(undefined8 *)(param_1 + 0x48),iVar3);
      __src = *(void **)(param_1 + 0x28);
    }
    if (__src != (void *)0x0) {
      memcpy(__dest,__src,(ulong)(uVar1 << 3));
      if (*(long *)(param_1 + 0x28) != param_1 + 8) {
        FUN_003ddee0(*(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x28),
                     *(undefined4 *)(param_1 + 0x30));
      }
    }
    *(int *)(param_1 + 0x30) = iVar3;
    *(void **)(param_1 + 0x28) = __dest;
    uVar2 = *(uint *)(param_1 + 0x34);
  }
  else {
    __dest = *(void **)(param_1 + 0x28);
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x34) = uVar2 + 1;
  *(long *)((long)__dest + (ulong)uVar2 * 8) = param_2;
  if (*(long *)(param_2 + 8) == param_1) {
    *(uint *)(param_2 + 0x1c) = uVar1;
  }
  else {
    *(uint *)(param_2 + 0x20) = uVar1;
  }
  return;
}


