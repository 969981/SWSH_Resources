/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786b10; name: FUN_00786b10
 */


void FUN_00786b10(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0xe8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00786b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_3,1);
  return;
}


