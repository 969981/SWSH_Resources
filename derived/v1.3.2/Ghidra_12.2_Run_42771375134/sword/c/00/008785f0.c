/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008785f0; name: FUN_008785f0
 */


void FUN_008785f0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027173d8;
  FUN_00867df0(*(undefined8 *)(param_2 + 0x98),PTR_DAT_027173d8);
                    /* WARNING: Could not recover jumptable at 0x0087862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,puVar1);
  return;
}


