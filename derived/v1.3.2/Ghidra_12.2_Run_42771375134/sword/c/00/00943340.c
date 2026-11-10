/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943340; name: FUN_00943340
 */


void FUN_00943340(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02717e30 + 0x10;
  *(undefined1 *)((long)param_1 + 0xc) = 5;
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 1) = 0x5050505;
  return;
}


