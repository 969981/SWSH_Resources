/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015064c0; name: FUN_015064c0
 */


undefined8 FUN_015064c0(long param_1,long *param_2,long *param_3,uint param_4,undefined4 *param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_4 < 0x20) {
    uVar7 = 0;
    lVar2 = param_1 + (ulong)param_4 * 0x2850 + 0x60;
    do {
      lVar3 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar6 = *param_3;
      if (lVar6 == 0) {
        FUN_008664b0(0,lVar2);
        uVar1 = FUN_008787d0(0);
        if ((uVar1 & 1) == 0) {
          bVar5 = false;
        }
        else {
          FUN_008664a0(lVar3,lVar2);
          bVar5 = true;
        }
      }
      else {
        plVar4 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_008664b0(lVar6,lVar2);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        uVar1 = FUN_008787d0(lVar6);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        bVar5 = (uVar1 & 1) != 0;
        if (bVar5) {
          FUN_008664a0(lVar3,lVar2);
        }
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (bVar5) goto LAB_01506744;
      uVar7 = uVar7 + 1;
      lVar2 = lVar2 + 0x158;
    } while (uVar7 < 0x1e);
  }
  else {
    uVar7 = 0;
    lVar2 = param_1 + (ulong)param_4 * 0x2850 + 0x60;
    do {
      lVar3 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar6 = *param_3;
      if (lVar6 == 0) {
        uVar1 = FUN_008787d0(0);
        if ((uVar1 & 1) == 0) {
          bVar5 = false;
        }
        else {
          FUN_008664a0(lVar3,lVar2);
          bVar5 = true;
        }
      }
      else {
        plVar4 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        uVar1 = FUN_008787d0(lVar6);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        bVar5 = (uVar1 & 1) != 0;
        if (bVar5) {
          FUN_008664a0(lVar3,lVar2);
        }
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (bVar5) {
LAB_01506744:
        *param_5 = (int)uVar7;
        return 1;
      }
      uVar7 = uVar7 + 1;
      lVar2 = lVar2 + 0x158;
    } while (uVar7 < 0x1e);
  }
  return 0;
}


