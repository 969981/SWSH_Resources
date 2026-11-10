/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc0b40; name: FUN_00bc0b40
 */


undefined8 FUN_00bc0b40(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar2 = (uint)((ulong)uVar4 >> 0x20);
  uVar3 = uVar2 - 2;
  if (uVar2 < 2) {
LAB_00bc0c48:
    uVar2 = 0xffffffff;
    iVar9 = 2;
    uVar3 = 0xffffffff;
  }
  else if ((int)uVar4 == 0) {
    if (5 < (int)uVar3) goto LAB_00bc0c48;
    uVar2 = *(uint *)(param_1 + 0x614);
    iVar9 = 1;
    uVar3 = FUN_00bcfb20(1,0,uVar3);
  }
  else {
    if (4 < uVar3) goto LAB_00bc0c48;
    lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar8 == 0) {
      uVar2 = FUN_0150b350(0);
    }
    else {
      plVar12 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar2 = FUN_0150b350(lVar8);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    uVar3 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar3);
    iVar9 = 0;
  }
  lVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar9,uVar2,uVar3);
  if (lVar11 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x6d8);
  if (uVar1 == 0) {
    uVar6 = 0;
LAB_00bc0cc8:
    if ((uint)uVar6 != (uint)uVar1) {
      lVar8 = *(long *)(param_1 + 0x2b0);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(lVar8 + 0x2e0);
      if (lVar10 == 0) {
        FUN_014c7bf0(0,0,lVar11);
      }
      else {
        plVar12 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_014c7bf0(lVar10,0,lVar11);
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      puVar5 = &DAT_02159de8;
      goto LAB_00bc0dd4;
    }
  }
  else {
    uVar6 = 0;
    puVar7 = (ushort *)(*(long *)(param_1 + 0x6d0) + 6);
    do {
      if (((*(int *)(puVar7 + -3) == iVar9) && (uVar2 == puVar7[-1])) && (uVar3 == *puVar7))
      goto LAB_00bc0cc8;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar6 < uVar1);
  }
  lVar8 = *(long *)(param_1 + 0x2b0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar8 + 0x2e0);
  if (lVar10 == 0) {
    FUN_014c7bf0(0,0,lVar11);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014c7bf0(lVar10,0,lVar11);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  puVar5 = &DAT_02159db8;
LAB_00bc0dd4:
  FUN_00bc4460(param_1,puVar5,3,0xd670b269319411f8,1,1);
  return 1;
}


