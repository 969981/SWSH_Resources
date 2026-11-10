/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eea5f0; name: FUN_00eea5f0
 */


void FUN_00eea5f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar3 = (**(code **)(**(long **)(param_2 + 0x438) + 0x50))(*(long **)(param_2 + 0x438),0);
  FUN_0087df30(lVar3,0,0);
  puVar1 = PTR_DAT_02710798;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  if (lVar6 == 0) {
    FUN_01534a40(0,lVar3,0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_01534a40(lVar6,lVar3,0);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  puVar2 = PTR_DAT_02710848;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  FUN_01511030(lVar7,0x973fe0e132a339e9);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar6 = *(long *)(*(long *)puVar2 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)puVar1;
  lVar9 = *(long *)(lVar7 + 0x228);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(lVar7 + 0x220);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  plVar8 = *(long **)(lVar6 + 0x58);
  if (plVar8 != (long *)0x0) {
    (**(code **)(plVar8[9] + 0x10))();
  }
  uVar4 = (**(code **)(*plVar8 + 0x28))(plVar8,lVar3);
  if ((uVar4 & 1) == 0) {
    uStack_44 = FUN_0150b350(lVar9);
    local_48 = 0;
    local_50 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
    }
    FUN_01506770(lVar7,&local_50,uVar5,&uStack_44,&local_48);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


