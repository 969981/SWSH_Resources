/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ba1b0; name: FUN_014ba1b0
 */


void FUN_014ba1b0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_4 == 10) {
    param_4 = FUN_014bf840();
  }
  FUN_0077d660(lVar1);
  FUN_0077d5c0(lVar1,param_3 + 0x11);
  FUN_0077d560(lVar1,param_2);
  FUN_0077d5c0(lVar1,param_4 + 0x11);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014ba23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


