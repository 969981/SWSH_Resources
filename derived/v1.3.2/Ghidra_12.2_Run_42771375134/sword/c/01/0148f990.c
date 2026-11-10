/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148f990; name: FUN_0148f990
 */


uint FUN_0148f990(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar9 = *(long *)PTR_DAT_02710798;
  uVar3 = FUN_00878e20(param_2,3);
  iVar4 = FUN_00878e20(param_2,7);
  uVar7 = FUN_0087eb30(param_2);
  lVar9 = *(long *)(lVar9 + 0x1e8);
  if (lVar9 == 0) {
    uVar5 = FUN_01524c50(0,param_2);
  }
  else {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    uVar5 = FUN_01524c50(lVar9,param_2);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  uVar6 = FUN_00878a60(param_2);
  uVar8 = FUN_014b3320();
  if ((uVar8 & 1) != 0) {
    uVar6 = 0x12;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0x10;
    }
    goto LAB_0148fb34;
  }
  if (uVar6 < 0x2c) {
    bVar1 = (uVar7 & 1) == 0;
    uVar3 = 0xc;
  }
  else {
    if ((uVar7 & 1) == 0) {
      if (uVar3 != 0) {
        uVar6 = 4;
        if (60000 < uVar3) {
          uVar6 = 6;
        }
        goto LAB_0148fb34;
      }
      if (iVar4 == 0x7532) {
        uVar6 = 2;
        goto LAB_0148fb34;
      }
      if (iVar4 != 0x7542) {
        uVar6 = 0;
        goto LAB_0148fb34;
      }
    }
    else if (iVar4 != 0x7542) {
      uVar6 = 8;
      if (uVar3 != 0) {
        uVar6 = 10;
      }
      goto LAB_0148fb34;
    }
    iVar4 = FUN_00878e20(param_2,7);
    uVar7 = FUN_0087eb30(param_2);
    if ((iVar4 == 0x7542) && ((uVar7 & 1) == 0)) {
      uVar6 = 0xc;
      goto LAB_0148fb34;
    }
    iVar4 = FUN_00878e20(param_2,7);
    bVar2 = FUN_0087eb30(param_2);
    bVar1 = (bVar2 & iVar4 == 0x7542) == 0;
    uVar3 = 0x18;
  }
  uVar6 = 0xe;
  if (bVar1) {
    uVar6 = uVar3;
  }
LAB_0148fb34:
  return uVar6 | ~uVar5 & 1;
}


