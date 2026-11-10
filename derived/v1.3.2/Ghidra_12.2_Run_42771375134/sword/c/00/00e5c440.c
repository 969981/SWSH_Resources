/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5c440; name: FUN_00e5c440
 */


uint FUN_00e5c440(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x1a8) == -0x340d631b7bddd9bb) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar3 == 0) {
      uVar1 = FUN_01510f00(0,*(undefined8 *)(param_1 + 0x1a8));
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar1 = FUN_01510f00(lVar3,*(undefined8 *)(param_1 + 0x1a8));
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return uVar1 & 1;
}


