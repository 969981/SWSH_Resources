/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014030a0; name: FUN_014030a0
 */


void FUN_014030a0(long param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  iVar2 = *(int *)(param_1 + 0x570);
  if (iVar2 == 6) {
    FUN_008c12f0(*(undefined8 *)(param_1 + 0x80));
    FUN_00ffa3f0(*(undefined8 *)(param_1 + 0x80));
    iVar2 = *(int *)(param_1 + 0x570);
  }
  if (iVar2 == 7) {
    pcVar3 = *(code **)(param_1 + 0x358);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(undefined8 *)(param_1 + 0x350) = 0;
      *(undefined8 *)(param_1 + 0x358) = 0;
      (*pcVar3)(param_1 + 0x370);
    }
    *(undefined1 **)(param_1 + 0x350) = &LAB_014055c0;
    *(undefined1 **)(param_1 + 0x360) = &LAB_014055e0;
    pcVar3 = *(code **)(param_1 + 0x3d8);
    *(undefined1 **)(param_1 + 0x358) = &LAB_014055d0;
    *(undefined1 **)(param_1 + 0x368) = &LAB_014055f0;
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x3e0) = 0;
      *(undefined8 *)(param_1 + 1000) = 0;
      *(undefined8 *)(param_1 + 0x3d0) = 0;
      *(undefined8 *)(param_1 + 0x3d8) = 0;
      (*pcVar3)(param_1 + 0x3f0);
    }
    *(undefined1 **)(param_1 + 0x3d0) = &LAB_01405600;
    lVar6 = *(long *)(param_1 + 0x78);
    *(undefined1 **)(param_1 + 0x3d8) = &LAB_01405610;
    *(undefined1 **)(param_1 + 0x3e0) = &LAB_01405620;
    *(undefined1 **)(param_1 + 1000) = &LAB_01405630;
    lVar4 = *(long *)(lVar6 + 0x4c0);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) {
      uVar7 = 0;
      uVar1 = FUN_016b5560(0);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar4 = *(long *)(*(long *)(lVar6 + 0x4c0) + 0x58);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_38 = &local_28;
      local_30 = 0x18cd1891cbc1757a;
      local_28 = 0;
      FUN_008a0cd0(lVar4,&local_38,0);
      uVar7 = local_28;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      uVar1 = FUN_016b5560(uVar7);
    }
    if ((uVar1 & 1) != 0) {
      FUN_016b5550(uVar7);
    }
  }
  return;
}


