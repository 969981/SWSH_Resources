/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f4d4d0; name: FUN_00f4d4d0
 */


void FUN_00f4d4d0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined2 uVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  long *plVar15;
  long local_a8;
  long local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined4 local_62;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_56;
  long local_48;
  
  piVar8 = (int *)FUN_00f4d3a0();
  local_90 = 0xffffffffffffffff;
  uStack_88 = 0x3ffffffff;
  local_78 = 899;
  local_74 = 0xffff00ff00010000;
  local_6c = 0x1ff;
  local_5c = 0xffff;
  local_56 = 0x1000100;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0xffffffffffffffff;
  local_58 = 0;
  local_62 = 0xffffffff;
  local_6a = 0xffffffffffffffff;
  FUN_00f4dc00(piVar8,piVar8,&local_a0);
  puVar3 = PTR_DAT_02710860;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00f4dbfc;
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = (**(code **)(*param_4 + 0x10))(param_4,0xb8,8);
  if (lVar10 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_008662a0(lVar10,param_4,&local_a0);
  *(long **)(lVar10 + 8) = param_4;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0xb8;
  *(undefined8 *)(lVar10 + 0x20) = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  *param_1 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x17) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0xb], uVar12 == 0)) {
    local_48 = 0;
LAB_00f4d64c:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00f4dbfc;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar14 = (**(code **)(*param_4 + 0x10))(param_4,0x80,8);
    if (lVar14 == 0) {
      (**(code **)(*param_4 + 0xb8))(param_4);
    }
    FUN_0077d050(lVar14,0xd);
    *(long **)(lVar14 + 8) = param_4;
    *(long *)(lVar14 + 0x10) = lVar14;
    *(undefined8 *)(lVar14 + 0x18) = 0x80;
    *(undefined8 *)(lVar14 + 0x20) = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(*(long *)(param_2 + 0x78) + 0x60);
    if (lVar9 == 0) {
      FUN_0077eb10(0,&local_48,lVar14);
    }
    else {
      plVar15 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0077eb10(lVar9,&local_48,lVar14);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    lVar10 = *param_1;
    FUN_0087d230(lVar10,lVar14);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
  }
  else {
    local_48 = *(long *)((long)piVar8 + uVar12);
    if (local_48 != -0x340d631b7bddd9bb) goto LAB_00f4d64c;
  }
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x11) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[8], uVar12 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((long)piVar8 + uVar12);
  }
  FUN_00878810(lVar10,uVar5);
  FUN_00878180(lVar10);
  lVar9 = -(long)*piVar8;
  puVar13 = (ushort *)((long)piVar8 - (long)*piVar8);
  uVar2 = *puVar13;
  if (0x42 < uVar2) {
    if (((ulong)puVar13[0x21] != 0) && (*(int *)((long)piVar8 + (ulong)puVar13[0x21]) != 0)) {
      FUN_0087bd30(lVar10);
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x43) ||
         (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x21], uVar12 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((long)piVar8 + uVar12);
      }
      FUN_0087b9a0(lVar10,0,uVar5);
      lVar9 = -(long)*piVar8;
      puVar13 = (ushort *)((long)piVar8 - (long)*piVar8);
    }
    uVar2 = *puVar13;
  }
  if ((uVar2 < 7) || (uVar12 = (ulong)*(ushort *)((long)piVar8 + lVar9 + 6), uVar12 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)piVar8 + uVar12);
  }
  FUN_008798b0(lVar10,uVar4);
  if (((0xe < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
      (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[7], uVar12 != 0)) &&
     (*(char *)((long)piVar8 + uVar12) != '\0')) {
    FUN_00879870(lVar10);
  }
  plVar15 = *(long **)(param_2 + 8);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00f4dbfc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
  if (lVar10 == 0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  FUN_0077d050(lVar10,0xd);
  *(long **)(lVar10 + 8) = plVar15;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x80;
  *(undefined8 *)(lVar10 + 0x20) = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x23) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x11], uVar12 == 0)) {
    local_a8 = 0;
LAB_00f4d9b0:
    lVar9 = *(long *)(*(long *)(param_2 + 0x78) + 0x60);
    if (lVar9 == 0) {
      FUN_0077eb10(0,&local_a8,lVar10);
    }
    else {
      plVar15 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0077eb10(lVar9,&local_a8,lVar10);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    lVar9 = *param_1;
    FUN_0087d350(lVar9,lVar10);
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x25) ||
       (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x12], uVar12 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((long)piVar8 + uVar12);
    }
  }
  else {
    local_a8 = *(long *)((long)piVar8 + uVar12);
    if (local_a8 != -0x340d631b7bddd9bb) goto LAB_00f4d9b0;
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar14 != 0) {
      plVar15 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar9 = *param_1;
      uVar5 = FUN_01524d00(lVar14);
      FUN_0087ec80(lVar9,uVar5);
      FUN_01524b90(lVar14,lVar10);
      FUN_0087d350(lVar9,lVar10);
      uVar4 = FUN_01524bf0(lVar14);
      FUN_0087d3a0(lVar9,uVar4);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      goto LAB_00f4da44;
    }
    lVar9 = *param_1;
    uVar5 = FUN_01524d00(0);
    FUN_0087ec80(lVar9,uVar5);
    FUN_01524b90(0,lVar10);
    FUN_0087d350(lVar9,lVar10);
    uVar7 = FUN_01524bf0(0);
    uVar7 = uVar7 & 0xff;
  }
  FUN_0087d3a0(lVar9,uVar7);
LAB_00f4da44:
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x21) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x10], uVar12 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)piVar8 + uVar12);
  }
  FUN_00878f70(lVar9,10,uVar4);
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x1b) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0xd], uVar12 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)piVar8 + uVar12);
  }
  FUN_00878f70(lVar9,0xb,uVar4);
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x1d) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0xe], uVar12 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined2 *)((long)piVar8 + uVar12);
  }
  FUN_00878f70(lVar9,0xc,uVar11);
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0x1f) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0xf], uVar12 == 0)) {
    FUN_00878f70(lVar9,0xd,0);
  }
  else {
    FUN_00878f70(lVar9,0xd,*(undefined1 *)((long)piVar8 + uVar12));
  }
  if (lVar9 != 0) {
    plVar15 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar12 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((long)piVar8 + uVar12);
  }
  iVar6 = FUN_00888d50(uVar5);
  iVar1 = 4;
  if (iVar6 != 0) {
    iVar1 = iVar6;
  }
  FUN_00878a90(lVar9,iVar1);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


