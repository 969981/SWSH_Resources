/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb120; name: FUN_008fb120
 */


void FUN_008fb120(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  param_2 = param_2 + (param_3 & 0xff) * 0x70;
  *param_1 = *(undefined8 *)(param_2 + 0x238);
  param_1[1] = *(undefined8 *)(param_2 + 0x240);
  lVar1 = *(long *)(param_2 + 0x250);
  param_1[2] = *(undefined8 *)(param_2 + 0x248);
  param_1[3] = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008fb154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


