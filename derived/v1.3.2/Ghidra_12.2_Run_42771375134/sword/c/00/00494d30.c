/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00494d30; name: FUN_00494d30
 */


void FUN_00494d30(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027132e8 + 0x10;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (long)puVar1;
  *(undefined2 *)((long)param_1 + 10) = 0xffff;
  return;
}


