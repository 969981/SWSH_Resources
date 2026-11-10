/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01562f30; name: FUN_01562f30
 */


void FUN_01562f30(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_40;
  long local_38;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  if (param_1 < 4) {
    uVar2 = *(undefined8 *)(&DAT_01d4de00 + (long)(int)param_1 * 8);
    local_38 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    local_40 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x48);
    local_24 = 0;
    lVar1 = FUN_01563020(auStack_28,local_40,&local_40,&local_38,&local_24);
    if (lVar1 == 0) {
      FUN_01563570(0,uVar2);
    }
    else {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01563570(lVar1,uVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


