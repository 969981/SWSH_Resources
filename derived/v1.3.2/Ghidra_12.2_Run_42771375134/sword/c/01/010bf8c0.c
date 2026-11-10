/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bf8c0; name: FUN_010bf8c0
 */


void FUN_010bf8c0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 == 0) {
    uVar1 = FUN_01524de0(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_01524de0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_016bff10(*(undefined8 *)(param_1 + 0x5e8),uVar1,0);
  return;
}


