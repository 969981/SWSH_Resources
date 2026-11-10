/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e773d0; name: FUN_00e773d0
 */


undefined8 FUN_00e773d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar4 = *(undefined8 *)PTR_DAT_02717c48;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = FUN_00e76460(param_1);
  if ((lVar1 != -0x340d631b7bddd9bb) && (lVar1 != 0)) {
    FUN_01511120(lVar3,lVar1);
  }
  FUN_00e14db0(uVar4,param_1);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return 1;
}


