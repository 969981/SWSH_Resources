/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918430; name: FUN_00918430
 */


void FUN_00918430(uint *param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(undefined1 *)((long)param_1 + (ulong)uVar1 + 8) = 0;
  *(undefined1 *)((long)param_1 + (ulong)(uVar1 + 1) + 8) = 0xc0;
  *param_1 = uVar1 + 3;
  *(undefined1 *)((long)param_1 + (ulong)(uVar1 + 2) + 8) = param_2;
  return;
}


