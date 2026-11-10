/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb47a0; name: FUN_00fb47a0
 */


void FUN_00fb47a0(long *param_1)

{
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  (**(code **)(*param_1 + 0x48))();
  *(undefined1 *)((long)param_1 + 0x59) = 1;
  *(undefined4 *)((long)param_1 + 0x54) = 3;
  return;
}


