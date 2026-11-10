/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457700; name: FUN_00457700
 */


void FUN_00457700(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x160) != param_2) {
    *(int *)(param_1 + 0x160) = param_2;
    if (*(int *)(param_1 + 0xc0) != 0) {
      uVar1 = 0;
      do {
        FUN_00457700(*(undefined8 *)(*(long *)(param_1 + 0xb8) + uVar1 * 8),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xc0));
    }
    if (*(long *)(param_1 + 0x80) == 0) {
      FUN_004c5bc0(1);
      return;
    }
  }
  return;
}


