/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010725c0; name: FUN_010725c0
 */


void FUN_010725c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x160);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x168) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
              (*(long **)(param_1 + 0x178),lVar1,*(long *)(param_1 + 0x170) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x130);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x138) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
              (*(long **)(param_1 + 0x148),lVar1,*(long *)(param_1 + 0x140) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x108) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x118) + 0x18))
              (*(long **)(param_1 + 0x118),lVar1,*(long *)(param_1 + 0x110) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xd8) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
              (*(long **)(param_1 + 0xe8),lVar1,*(long *)(param_1 + 0xe0) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xa8) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
              (*(long **)(param_1 + 0xb8),lVar1,*(long *)(param_1 + 0xb0) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x78) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),lVar1,*(long *)(param_1 + 0x80) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x48) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),lVar1,*(long *)(param_1 + 0x50) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x18) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x010726f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
            (*(long **)(param_1 + 0x28),lVar1,*(long *)(param_1 + 0x20) - lVar1,8);
  return;
}


