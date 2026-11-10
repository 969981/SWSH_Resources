/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc4d00; name: FUN_00bc4d00
 */


undefined8 FUN_00bc4d00(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar6 = FUN_016b8190();
  uVar8 = *(undefined8 *)(param_1 + 0x5e8);
  uVar7 = (uint)((ulong)uVar6 >> 0x20);
  uVar1 = uVar7 - 2;
  if (1 < uVar7) {
    if ((int)uVar6 == 0) {
      if ((int)uVar1 < 6) {
        uVar4 = *(undefined4 *)(param_1 + 0x614);
        uVar6 = 1;
        uVar5 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bc4e1c;
      }
    }
    else if (uVar1 < 5) {
      lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar9 == 0) {
        uVar4 = FUN_0150b350(0);
      }
      else {
        plVar12 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        uVar4 = FUN_0150b350(lVar9);
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      uVar5 = FUN_00bcfb20(0,(int)uVar6 + -1,uVar1);
      uVar6 = 0;
      goto LAB_00bc4e1c;
    }
  }
  uVar4 = 0xffffffff;
  uVar6 = 2;
  uVar5 = 0xffffffff;
LAB_00bc4e1c:
  lVar11 = thunk_FUN_00bccb30(uVar8,uVar6,uVar4,uVar5);
  if ((lVar11 == 0) || (sVar2 = FUN_008787f0(), sVar2 == 0)) {
    uVar6 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x2b0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar9 + 0x2e0);
    if (lVar10 == 0) {
      uVar3 = FUN_008787f0(lVar11);
      FUN_014c9900(0,0,uVar3,1);
    }
    else {
      plVar12 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar3 = FUN_008787f0(lVar11);
      FUN_014c9900(lVar10,0,uVar3,1);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    uVar6 = 1;
    FUN_00bc4460(param_1,&DAT_02159ea8,2,0xba831c1f4d00ca55,1,0);
  }
  return uVar6;
}


