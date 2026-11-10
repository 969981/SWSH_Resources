/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f88e0; name: FUN_014f88e0
 */


undefined8 FUN_014f88e0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x298);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = FUN_01529800(lVar3);
  if ((((iVar1 == 0) && (iVar1 = FUN_01529810(lVar3), iVar1 == 0)) &&
      (iVar1 = FUN_01529820(lVar3), iVar1 == 0)) &&
     ((iVar1 = FUN_01529830(lVar3), iVar1 == 0 && (iVar1 = FUN_01529840(lVar3), iVar1 == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar4;
}


