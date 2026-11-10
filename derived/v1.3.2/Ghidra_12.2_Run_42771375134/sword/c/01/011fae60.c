/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fae60; name: FUN_011fae60
 */


void FUN_011fae60(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_011fbad0();
    lVar1 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011fae98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x58) + 0x18))();
      return;
    }
  }
  return;
}


