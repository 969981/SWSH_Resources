/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f6ac0; name: FUN_004f6ac0
 */


void FUN_004f6ac0(long *param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  if (((int)param_1[1] != 0) && (*(uint *)(param_1 + 2) != 0)) {
    uVar2 = 0;
    do {
      pvVar1 = *(void **)(*param_1 + uVar2 * 8);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar1,0,(ulong)(uint)((int)param_1[1] << 2));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 2));
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (((int)param_1[4] != 0) && (*(uint *)(param_1 + 5) != 0)) {
    uVar2 = 0;
    do {
      pvVar1 = *(void **)(param_1[3] + uVar2 * 8);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar1,0,(ulong)(uint)((int)param_1[4] << 2));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 5));
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return;
}


