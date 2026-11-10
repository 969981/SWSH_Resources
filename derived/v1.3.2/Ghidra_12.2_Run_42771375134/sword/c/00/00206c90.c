/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206c90; name: FUN_00206c90
 */


void FUN_00206c90(long param_1)

{
  int iVar1;
  
  FUN_003ff490(param_1 + 0x108);
  if (*(int *)(param_1 + 0x108) < 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    iVar1 = FUN_003ff490(param_1 + 0x20);
  }
  else {
    iVar1 = FUN_003ff490(param_1 + 0x20);
  }
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00206cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


