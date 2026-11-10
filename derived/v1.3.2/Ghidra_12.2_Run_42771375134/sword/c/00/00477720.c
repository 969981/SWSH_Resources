/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00477720; name: FUN_00477720
 */


void FUN_00477720(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    FUN_00474530(lVar2);
    FUN_00404870(uVar1,lVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


