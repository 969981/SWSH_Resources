/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148f500; name: FUN_0148f500
 */


void FUN_0148f500(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_68;
  long local_60;
  long local_58;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),4);
  lVar5 = *(long *)(local_58 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  uVar2 = FUN_0087cd00(uVar1);
  uVar6 = *(undefined8 *)(&DAT_0216f0f0 + (uVar2 & 0xffffffff) * 8);
  local_60 = lVar5;
  if (lVar5 == 0) {
    FUN_0148f880(param_1,uVar6,0x6232ebcd6265dcfd,&local_60);
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0148f880(param_1,uVar6,0x6232ebcd6265dcfd,&local_60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_60 = 0;
  }
  uVar2 = FUN_014b7940(uVar1);
  uVar1 = *(undefined8 *)(&DAT_0216f1b8 + (uVar2 & 0xff) * 8);
  local_68 = lVar5;
  if (lVar5 == 0) {
    FUN_0148f880(param_1,uVar1,0xfe70b5e1afc1d741,&local_68);
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0148f880(param_1,uVar1,0xfe70b5e1afc1d741,&local_68);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_68 = 0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


