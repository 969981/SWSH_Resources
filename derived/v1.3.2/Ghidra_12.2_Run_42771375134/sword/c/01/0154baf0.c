/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154baf0; name: FUN_0154baf0
 */


void FUN_0154baf0(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_34;
  long local_28;
  
  bVar1 = FUN_01532a50();
  if (bVar1 < 2) {
    plVar4 = *(long **)(*(long *)PTR_DAT_02710540 + 200);
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1241c,8);
    FUN_011b7fa0(4,lVar2);
    local_34 = 0;
    local_28 = lVar2;
    uVar3 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_34);
    FUN_0154b7f0(uVar3,PTR_DAT_0272ad48 + 0x10,&local_28,PTR_DAT_0272ad50 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,0x1241c,8);
    }
  }
  bVar1 = FUN_01532a50();
  if (bVar1 < 3) {
    plVar4 = *(long **)(*(long *)PTR_DAT_02710540 + 200);
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1241c,8);
    FUN_011b7fa0(5,lVar2);
    local_34 = 0;
    local_28 = lVar2;
    uVar3 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_34);
    FUN_0154b7f0(uVar3,PTR_DAT_0272ad48 + 0x14,&local_28,PTR_DAT_0272ad50 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,0x1241c,8);
    }
  }
  return;
}


