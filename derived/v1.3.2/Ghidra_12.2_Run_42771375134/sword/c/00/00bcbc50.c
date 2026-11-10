/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcbc50; name: FUN_00bcbc50
 */


void FUN_00bcbc50(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar5 = (uint)((ulong)uVar4 >> 0x20);
  uVar1 = uVar5 - 2;
  if (uVar5 < 2) {
    return;
  }
  if ((int)uVar4 == 0) {
    if (5 < (int)uVar1) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x614);
    uVar4 = 1;
    uVar3 = FUN_00bcfb20(1,0,uVar1);
    uVar8 = 3;
  }
  else {
    if (4 < uVar1) {
      return;
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar6 == 0) {
      uVar2 = FUN_0150b350(0);
    }
    else {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar2 = FUN_0150b350(lVar6);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    uVar3 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar1);
    uVar4 = 0;
    uVar8 = 0;
  }
  uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),uVar4,uVar2,uVar3);
  FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),uVar4,uVar8,uVar3,0);
  return;
}


