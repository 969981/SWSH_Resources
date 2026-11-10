/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b40d0; name: thunk_FUN_001b3670
 */


void thunk_FUN_001b3670(long param_1)

{
  ulong uVar1;
  
  FUN_001b7cc0();
  FUN_003ff570(*(undefined8 *)(param_1 + 0xb8));
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    do {
      FUN_003dc5a0(*(long *)(*(long *)(param_1 + 8) + uVar1 * 8) + 0x20);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xb8));
  return;
}


