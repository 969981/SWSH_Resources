/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134e970; name: FUN_0134e970
 */


void FUN_0134e970(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x490) = *param_2;
  *(undefined8 *)(param_1 + 0x498) = param_2[1];
  *(undefined8 *)(param_1 + 0x4a0) = param_2[2];
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x4a8);
  *(long *)(param_1 + 0x4a8) = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0134e9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


