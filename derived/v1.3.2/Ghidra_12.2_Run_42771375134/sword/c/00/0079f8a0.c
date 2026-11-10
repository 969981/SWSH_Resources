/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079f8a0; name: FUN_0079f8a0
 */


void FUN_0079f8a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_0079ffb0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0079f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
            (*(long **)(param_1 + 0x58),lVar1,*(undefined8 *)(param_1 + 0x60),
             *(undefined8 *)(param_1 + 0x68));
  return;
}


