/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008de2d0; name: FUN_008de2d0
 */


void FUN_008de2d0(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_02717c20;
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)PTR_DAT_02717c20 = 0;
                    /* WARNING: Could not recover jumptable at 0x008de2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


