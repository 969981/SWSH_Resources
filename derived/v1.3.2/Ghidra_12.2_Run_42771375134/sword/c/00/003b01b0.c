/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b01b0; name: FUN_003b01b0
 */


void FUN_003b01b0(long param_1,void *param_2)

{
  undefined1 auVar1 [12];
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003b01fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x210))();
    return;
  }
  auVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x208))();
  memcpy(auVar1._0_8_,param_2,(ulong)(uint)(auVar1._8_4_ - auVar1._0_4_) & 0xfffffff0);
  return;
}


