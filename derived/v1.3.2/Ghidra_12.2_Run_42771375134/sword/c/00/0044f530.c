/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f530; name: FUN_0044f530
 */


void FUN_0044f530(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x100);
  if (lVar2 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)PTR_DAT_02712dc8;
  uVar1 = FUN_00488860(*(undefined8 *)(param_1 + 0x148));
  FUN_0048ae80(uVar3,lVar2,uVar1);
  return;
}


