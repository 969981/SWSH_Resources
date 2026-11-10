/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc9700; name: FUN_00bc9700
 */


undefined8 FUN_00bc9700(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar6 = FUN_016b8190();
  puVar3 = PTR_DAT_02710848;
  uVar8 = (uint)((ulong)uVar6 >> 0x20);
  uVar1 = uVar8 - 2;
  if (((1 < uVar8) && ((int)uVar6 != 0)) && (uVar1 < 5)) {
    lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    puVar2 = PTR_DAT_02710798;
    lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    lVar10 = *(long *)(*(long *)puVar3 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(*(long *)puVar2 + 0x228);
    if (lVar11 == 0) {
      uVar4 = FUN_0150b350(0);
    }
    else {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar4 = FUN_0150b350(lVar11);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    uVar5 = FUN_00bcfb20(0,(int)uVar6 + -1,uVar1);
    uVar7 = FUN_0150aef0(lVar9,uVar4,uVar5);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


