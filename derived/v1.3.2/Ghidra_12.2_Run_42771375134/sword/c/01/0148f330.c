/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148f330; name: FUN_0148f330
 */


void FUN_0148f330(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_50;
  long local_48;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x58);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar2 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),4);
  lVar6 = *(long *)(local_48 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  uVar1 = FUN_0087d4d0(uVar2);
  if (*(uint *)PTR_DAT_0272a160 < uVar1) {
    if (*(uint *)(PTR_DAT_0272a160 + 0x10) < uVar1) {
      if (*(uint *)(PTR_DAT_0272a160 + 0x20) < uVar1) {
        if (*(uint *)(PTR_DAT_0272a160 + 0x30) < uVar1) {
          uVar2 = *(undefined8 *)(PTR_DAT_0272a160 + 0x38);
          goto LAB_0148f448;
        }
        lVar3 = 3;
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 0;
  }
  uVar2 = *(undefined8 *)(PTR_DAT_0272a160 + lVar3 * 0x10 + 8);
LAB_0148f448:
  local_50 = lVar6;
  if (lVar6 == 0) {
    FUN_0148f880(param_1,uVar2,0x36ed694f8cd1a33d,&local_50);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0148f880(param_1,uVar2,0x36ed694f8cd1a33d,&local_50);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_50 = 0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


