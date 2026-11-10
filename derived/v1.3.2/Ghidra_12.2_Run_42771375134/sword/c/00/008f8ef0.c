/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8ef0; name: FUN_008f8ef0
 */


void FUN_008f8ef0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x88);
  *param_1 = *(undefined8 *)(lVar2 + 0x360);
  param_1[1] = *(undefined8 *)(lVar2 + 0x368);
  lVar1 = *(long *)(lVar2 + 0x378);
  param_1[2] = *(undefined8 *)(lVar2 + 0x370);
  param_1[3] = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f8f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


