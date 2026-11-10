/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc0950; name: FUN_00bc0950
 */


undefined8 FUN_00bc0950(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  if (*(short *)(param_1 + 0x6da) == 0) {
    return 0;
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar3 = (uint)((ulong)uVar4 >> 0x20);
  uVar2 = uVar3 - 2;
  if (uVar3 < 2) {
LAB_00bc0a48:
    uVar2 = 0xffffffff;
    iVar8 = 2;
    uVar3 = 0xffffffff;
  }
  else {
    if ((int)uVar4 == 0) {
      if ((int)uVar2 < 6) {
        iVar8 = 1;
        uVar2 = FUN_00bcfb20(1,0);
        uVar3 = *(uint *)(param_1 + 0x614);
        uVar1 = *(ushort *)(param_1 + 0x6d8);
        goto joined_r0x00bc0ac8;
      }
      goto LAB_00bc0a48;
    }
    if (4 < uVar2) goto LAB_00bc0a48;
    uVar2 = FUN_00bcfb20(0,(int)uVar4 + -1);
    lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar7 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar10 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      uVar3 = FUN_0150b350(lVar7);
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    iVar8 = 0;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      iVar8 = 0;
      uVar1 = *(ushort *)(param_1 + 0x6d8);
      goto joined_r0x00bc0ac8;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x6d8);
joined_r0x00bc0ac8:
  if (uVar1 == 0) {
    uVar5 = 0;
LAB_00bc0ad0:
    if ((uint)uVar5 != (uint)uVar1) {
      *(undefined4 *)(*(long *)(param_1 + 0x6d0) + (uVar5 & 0xffffffff) * 8) = 2;
      *(short *)(param_1 + 0x6da) = *(short *)(param_1 + 0x6da) + -1;
      FUN_00bca320(param_1);
      if (iVar8 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 3;
      }
      FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),uVar4,uVar2,0);
      return 1;
    }
  }
  else {
    uVar5 = 0;
    puVar6 = (ushort *)(*(long *)(param_1 + 0x6d0) + 6);
    do {
      if (((*(int *)(puVar6 + -3) == iVar8) && (uVar3 == puVar6[-1])) && (uVar2 == *puVar6))
      goto LAB_00bc0ad0;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar5 < uVar1);
  }
  return 0;
}


