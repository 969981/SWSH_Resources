/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d74180; name: FUN_00d74180
 */


void FUN_00d74180(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x1f0) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x200) + 0x18))
              (*(long **)(param_1 + 0x200),lVar1,*(long *)(param_1 + 0x1f8) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x1b8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x1c0) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18))
              (*(long **)(param_1 + 0x1d0),lVar1,*(long *)(param_1 + 0x1c8) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 != 0) {
    *(long *)(param_1 + 400) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x1a0) + 0x18))
              (*(long **)(param_1 + 0x1a0),lVar1,*(long *)(param_1 + 0x198) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x158);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x160) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x170) + 0x18))
              (*(long **)(param_1 + 0x170),lVar1,*(long *)(param_1 + 0x168) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x128);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x130) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
              (*(long **)(param_1 + 0x140),lVar1,*(long *)(param_1 + 0x138) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x100) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x110) + 0x18))
              (*(long **)(param_1 + 0x110),lVar1,*(long *)(param_1 + 0x108) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xd0) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),lVar1,*(long *)(param_1 + 0xd8) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xa0) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),lVar1,*(long *)(param_1 + 0xa8) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x70) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar1,*(long *)(param_1 + 0x78) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x40) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),lVar1,*(long *)(param_1 + 0x48) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00d74320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
  return;
}


