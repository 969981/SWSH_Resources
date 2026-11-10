/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f4a470; name: FUN_00f4a470
 */


void FUN_00f4a470(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_a0;
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
  
  piVar7 = (int *)FUN_00f4a340();
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
  FUN_00f4aa30(piVar7,piVar7,&local_a0);
  puVar3 = PTR_DAT_02710860;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00f4aa24:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_4;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*param_4 + 0x10))(param_4,0xb8,8);
  if (lVar9 == 0) {
    (**(code **)(*param_4 + 0xb8))(param_4);
  }
  FUN_008662a0(lVar9,param_4,&local_a0);
  *(long **)(lVar9 + 8) = param_4;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0xb8;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  *param_1 = lVar9;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x13) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[9], uVar12 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)((long)piVar7 + uVar12);
  }
  FUN_00878810(lVar9,uVar10);
  FUN_00878180(lVar9);
  puVar13 = (ushort *)((long)piVar7 - (long)*piVar7);
  uVar2 = *puVar13;
  if (0x3a < uVar2) {
    if (((ulong)puVar13[0x1d] != 0) && (*(int *)((long)piVar7 + (ulong)puVar13[0x1d]) != 0)) {
      FUN_0087bd30(lVar9);
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x3b) ||
         (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x1d], uVar12 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((long)piVar7 + uVar12);
      }
      FUN_0087b9a0(lVar9,0,uVar10);
      puVar13 = (ushort *)((long)piVar7 - (long)*piVar7);
    }
    uVar2 = *puVar13;
  }
  if (((0x10 < uVar2) && ((ulong)puVar13[8] != 0)) &&
     (*(char *)((long)piVar7 + (ulong)puVar13[8]) != '\0')) {
    FUN_00879870(lVar9);
    puVar13 = (ushort *)((long)piVar7 - (long)*piVar7);
  }
  if (((4 < *puVar13) && ((ulong)puVar13[2] != 0)) &&
     (*(int *)((long)piVar7 + (ulong)puVar13[2]) == 1)) {
    FUN_0087d6d0(lVar9,param_4);
  }
  plVar15 = *(long **)(param_2 + 8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00f4aa24;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  FUN_0077d050(lVar9,0xd);
  *(long **)(lVar9 + 8) = plVar15;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x80;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x23) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x11], uVar12 == 0)) {
    local_48 = 0;
LAB_00f4a7e4:
    lVar8 = *(long *)(*(long *)(param_2 + 0x78) + 0x60);
    if (lVar8 == 0) {
      FUN_0077eb10(0,&local_48,lVar9);
    }
    else {
      plVar15 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0077eb10(lVar8,&local_48,lVar9);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    lVar8 = *param_1;
    FUN_0087d350(lVar8,lVar9);
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x25) ||
       (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x12], uVar12 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)((long)piVar7 + uVar12);
    }
  }
  else {
    local_48 = *(long *)((long)piVar7 + uVar12);
    if (local_48 != -0x340d631b7bddd9bb) goto LAB_00f4a7e4;
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar14 != 0) {
      plVar15 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_01524b90(lVar14,lVar9);
      lVar8 = *param_1;
      FUN_0087d350(lVar8,lVar9);
      uVar4 = FUN_01524bf0(lVar14);
      FUN_0087d3a0(lVar8,uVar4);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      goto LAB_00f4a878;
    }
    FUN_01524b90(0,lVar9);
    lVar8 = *param_1;
    FUN_0087d350(lVar8,lVar9);
    uVar6 = FUN_01524bf0(0);
    uVar6 = uVar6 & 0xff;
  }
  FUN_0087d3a0(lVar8,uVar6);
LAB_00f4a878:
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar12 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)((long)piVar7 + uVar12);
  }
  iVar5 = FUN_00888d50(uVar10);
  iVar1 = 4;
  if (iVar5 != 0) {
    iVar1 = iVar5;
  }
  FUN_00878a90(lVar8,iVar1);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar12 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)piVar7 + uVar12);
  }
  FUN_008798b0(lVar8,uVar4);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x21) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x10], uVar12 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)piVar7 + uVar12);
  }
  FUN_00878f70(lVar8,10,uVar4);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x1b) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xd], uVar12 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)piVar7 + uVar12);
  }
  FUN_00878f70(lVar8,0xb,uVar4);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x1d) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xe], uVar12 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined2 *)((long)piVar7 + uVar12);
  }
  FUN_00878f70(lVar8,0xc,uVar11);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x1f) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xf], uVar12 == 0)) {
    FUN_00878f70(lVar8,0xd,0);
  }
  else {
    FUN_00878f70(lVar8,0xd,*(undefined1 *)((long)piVar7 + uVar12));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


