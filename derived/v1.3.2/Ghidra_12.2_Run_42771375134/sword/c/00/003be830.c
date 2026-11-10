/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be830; name: FUN_003be830
 */


void FUN_003be830(undefined4 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *(undefined4 *)(param_2 + 0x13) = param_1;
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x48) + 0x760);
                    /* WARNING: Could not recover jumptable at 0x003be858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x60,*(uint *)(lVar2 + 0xb0) >> 6);
  return;
}


