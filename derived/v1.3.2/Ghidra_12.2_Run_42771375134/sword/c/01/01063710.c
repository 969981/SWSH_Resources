/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01063710; name: FUN_01063710
 */


void FUN_01063710(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0271b190;
  *(undefined8 *)(PTR_DAT_0271b190 + 8) = param_1[1];
  *(undefined8 *)puVar1 = *param_1;
  return;
}


