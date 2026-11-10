/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdaad0; name: FUN_00bdaad0
 */


void FUN_00bdaad0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_00bdec50(auStack_38,*(undefined8 *)(param_1 + 0x68));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x18d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18d8) = 0;
  }
  *(long *)(param_1 + 0x18d8) = lVar1;
  if (lVar1 != 0) {
    lVar5 = *(long *)PTR_DAT_02710880;
    if (lVar5 != 0) {
      lVar3 = *(long *)(lVar1 + 0x58);
      if (lVar3 == 0) {
        lVar2 = *(long *)(lVar5 + 200);
        *(undefined8 *)(lVar5 + 200) = 0;
      }
      else {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = *(long *)(lVar5 + 200);
        *(long *)(lVar5 + 200) = lVar3;
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      *(long *)(lVar5 + 0xd0) = lVar1 + 0x60;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
    }
    FUN_011f47f0(*(undefined8 *)(param_1 + 0x18d8));
  }
  return;
}


