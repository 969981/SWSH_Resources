/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b02c0; name: FUN_003b02c0
 */


void FUN_003b02c0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
    uVar1 = uVar1 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x003b0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x2e0))
            (*(long **)(param_1 + 0x20),param_2,param_2 + uVar1 * 0x10);
  return;
}


