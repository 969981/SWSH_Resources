/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c8c50; name: FUN_013c8c50
 */


void FUN_013c8c50(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013c8c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


