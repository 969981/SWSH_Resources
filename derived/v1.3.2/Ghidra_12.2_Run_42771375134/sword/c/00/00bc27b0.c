/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc27b0; name: FUN_00bc27b0
 */


bool FUN_00bc27b0(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar5 = FUN_016b8190();
  uVar2 = (uint)((ulong)uVar5 >> 0x20);
  uVar3 = uVar2 - 2;
  if (1 < uVar2) {
    if ((int)uVar5 == 0) {
      if ((int)uVar3 < 6) {
        uVar2 = *(uint *)(param_1 + 0x614);
        uVar3 = FUN_00bcfb20(1,0,uVar3);
        bVar1 = false;
        goto LAB_00bc28c4;
      }
    }
    else if (uVar3 < 5) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar7 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar9 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar2 = FUN_0150b350(lVar7);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      uVar3 = FUN_00bcfb20(0,(int)uVar5 + -1,uVar3);
      bVar1 = true;
      goto LAB_00bc28c4;
    }
  }
  uVar2 = 0xffffffff;
  bVar1 = false;
  uVar3 = 0xffffffff;
LAB_00bc28c4:
  piVar6 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  if (bVar1) {
    if (*piVar6 != 0) {
      return false;
    }
    uVar4 = FUN_00bcfb20(0,(uint)piVar6[1] >> 8 & 0x3f,(uint)piVar6[1] >> 0xe & 0x3f);
    if (uVar3 != uVar4) {
      return false;
    }
    uVar4 = (uint)*(byte *)(piVar6 + 1);
  }
  else {
    if (*piVar6 != 1) {
      return false;
    }
    uVar4 = piVar6[1];
    if (uVar3 != (uVar4 >> 0xe & 0x3f)) {
      return false;
    }
  }
  return (uVar4 & 0xff) == uVar2;
}


