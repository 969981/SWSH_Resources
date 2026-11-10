/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fc50; name: FUN_0044fc50
 */


undefined8 FUN_0044fc50(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x155) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0044fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x108))();
    return uVar1;
  }
  return 0;
}


