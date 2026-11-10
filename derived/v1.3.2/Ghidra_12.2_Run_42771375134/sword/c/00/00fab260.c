/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fab260; name: FUN_00fab260
 */


uint FUN_00fab260(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01679c20(lVar3);
  if (iVar1 == 5) {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x10))();
    }
    uVar2 = (**(code **)(*plVar4 + 0x68))(plVar4);
    if (plVar4 != (long *)0x0) {
      (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
    }
  }
  else {
    uVar2 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar2 & 1;
}


