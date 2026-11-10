/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ddcd0; name: FUN_004ddcd0
 */


undefined8 FUN_004ddcd0(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1[3] + 0x26b) >> 0x16 & 1) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x004ddcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 200))();
  return uVar1;
}


