/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101cc30; name: FUN_0101cc30
 */


void FUN_0101cc30(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  lVar3 = *(long *)PTR_DAT_02710848;
  lVar2 = *(long *)(lVar3 + 0x78);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    FUN_00c58bf0(lVar2);
  }
  lVar3 = *(long *)(lVar3 + 0x80);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    FUN_0102bd20(lVar3);
  }
  if (*(long *)PTR_DAT_02710868 != 0) {
    FUN_00d93d00();
  }
  if (*(long *)PTR_DAT_02710870 != 0) {
    FUN_012b3a70();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  FUN_00774070(param_1);
  iVar1 = FUN_00774010(param_1);
  if (iVar1 == 2) {
    FUN_00774040(&local_28,param_1);
    if (local_28 != 0) {
      *(undefined1 *)(local_28 + 0x80) = 1;
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  FUN_00773f70(param_1);
  FUN_00774110(param_1);
  return;
}


