/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040bab0; name: FUN_0040bab0
 */


void FUN_0040bab0(long param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00408b50();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_00404870(uVar1,param_1);
  return;
}


