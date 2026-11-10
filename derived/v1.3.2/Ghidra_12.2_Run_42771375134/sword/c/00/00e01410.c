/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e01410; name: FUN_00e01410
 */


void FUN_00e01410(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  if (uVar1 < 8) {
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2d8) = 1;
    }
    else {
      uVar2 = 0;
      do {
        if (7 < uVar2) goto LAB_00e01464;
        if (*(long *)(param_1 + 0x298 + uVar2 * 8) == *param_2) {
          return;
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)uVar1);
      *(uint *)(param_1 + 0x2d8) = uVar1 + 1;
      if (7 < uVar1) {
LAB_00e01464:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    *(long *)(param_1 + (long)(int)uVar1 * 8 + 0x298) = *param_2;
  }
  return;
}


