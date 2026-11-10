/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dc560; name: FUN_003dc560
 */


void FUN_003dc560(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x720);
  *(undefined8 *)(lVar1 + 0x6e0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x003dc574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x6e8) + 0xb0))();
  return;
}


