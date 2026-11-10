/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed5c50; name: FUN_00ed5c50
 */


void FUN_00ed5c50(long *param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  
  lVar10 = FUN_01225e70(param_2);
  lVar10 = lVar10 + 0x10;
  uVar11 = FUN_0121af80(param_1 + 0xba);
  bVar2 = (uVar11 & 1) == 0;
  if (bVar2) {
    plVar12 = (long *)FUN_01225e50(param_2);
    param_1[0xba] = *plVar12;
    lVar13 = plVar12[1];
    lVar3 = plVar12[2];
    lVar15 = plVar12[4];
    param_1[0xbd] = plVar12[3];
    param_1[0xbe] = lVar15;
    param_1[0xbb] = lVar13;
    param_1[0xbc] = lVar3;
    lVar13 = FUN_01225e60(param_2);
    uVar9 = FUN_0121d1c0(lVar13 + 4);
    *(undefined4 *)(param_1 + 0xc0) = uVar9;
    lVar13 = FUN_01225e60(param_2);
    FUN_0121d210(&local_d0,lVar13 + 4);
    memcpy(param_1 + 199,&local_d0,0x90);
    lVar13 = FUN_01225e60(param_2);
    uVar7 = FUN_0121d1f0(lVar13 + 4);
    *(undefined1 *)(param_1 + 0xd9) = uVar7;
    lVar13 = FUN_01225e60(param_2);
    uVar16 = FUN_0121d1b0(lVar13 + 4);
    FUN_0077dea0((long)param_1 + 0x604,0x34,uVar16,0xd);
  }
  puVar4 = PTR_DAT_0271e860;
  param_1[0xbf] = 0;
  local_b8 = *(long **)(*(long *)puVar4 + 0xa8);
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_a8 = 0;
  uStack_b0 = 0;
  if ((bVar2) || (uVar11 = (**(code **)(*param_1 + 0x70))(param_1), (uVar11 & 1) == 0)) {
    plVar14 = (long *)FUN_01223ca0(lVar10);
    lVar13 = plVar14[1];
    lVar3 = plVar14[2];
    lVar15 = plVar14[3];
    *(int *)(param_1 + 0xe4) = (int)plVar14[4];
    param_1[0xe3] = lVar15;
    param_1[0xe2] = lVar3;
    param_1[0xe1] = lVar13;
    plVar12 = param_1 + 0xe0;
    param_1[0xe0] = *plVar14;
    auVar17 = FUN_01223380(plVar12);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 (*) [16])(param_1 + 0x16) = auVar17;
    uVar16 = FUN_012233a0(plVar12);
    auVar17 = FUN_00a92cd0(uVar16,0,0);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 (*) [16])(param_1 + 0x14) = auVar17;
    cVar8 = FUN_01223390(plVar12);
    if ((*(char *)((long)param_1 + 0x731) != cVar8) ||
       (((char)param_1[0xe6] != '\0' && ((char)param_1[0xe6] != cVar8)))) {
      *(char *)(param_1 + 0xe6) = cVar8;
    }
    cVar8 = FUN_01223ba0(lVar10);
    plVar1 = local_b8;
    plVar14 = local_c8;
    if ((char)param_1[0xe7] != cVar8) {
      *(char *)((long)param_1 + 0x737) = cVar8;
    }
    local_d8 = plVar12;
    if (local_c8 < local_c0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00ed60d0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar1;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *plVar14 = (long)local_d8;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      local_c8 = local_c8 + 1;
    }
    else {
      FUN_00ed6f80(&local_d0,&local_d8);
    }
    param_1[0xdb] = param_1[0xda];
  }
  else {
    plVar12 = (long *)FUN_01223ca0(lVar10);
    cVar8 = FUN_01223390();
    if (cVar8 == '\0') {
LAB_00ed6098:
      if (local_d0 == local_c8) goto LAB_00ed5f20;
    }
    else {
      plVar14 = param_1 + 0xe0;
      uVar11 = FUN_012232f0(plVar12,plVar14);
      plVar5 = local_b8;
      plVar1 = local_c8;
      if ((uVar11 & 1) != 0) goto LAB_00ed6098;
      local_d8 = plVar12;
      if (local_c8 < local_c0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00ed60d0;
        *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar5;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *plVar1 = (long)local_d8;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        local_c8 = local_c8 + 1;
      }
      else {
        FUN_00ed6f80(&local_d0,&local_d8);
      }
      plVar1 = plVar12 + 6;
      cVar8 = FUN_01223390(plVar1);
      if ((cVar8 == '\0') ||
         (uVar11 = FUN_012232f0(plVar1,plVar14), plVar6 = local_b8, plVar5 = local_c8,
         (uVar11 & 1) != 0)) goto LAB_00ed6098;
      local_d8 = plVar1;
      if (local_c8 < local_c0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00ed60d0;
        *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar6;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *plVar5 = (long)local_d8;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        local_c8 = local_c8 + 1;
      }
      else {
        FUN_00ed6f80(&local_d0,&local_d8);
      }
      plVar12 = plVar12 + 0xc;
      cVar8 = FUN_01223390(plVar12);
      if ((cVar8 == '\0') ||
         (uVar11 = FUN_012232f0(plVar12,plVar14), plVar1 = local_b8, plVar14 = local_c8,
         (uVar11 & 1) != 0)) goto LAB_00ed6098;
      local_d8 = plVar12;
      if (local_c0 <= local_c8) {
        FUN_00ed6f80(&local_d0,&local_d8);
        goto LAB_00ed6098;
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00ed60d0;
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar1;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *plVar14 = (long)local_d8;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      local_c8 = local_c8 + 1;
      if (local_d0 == local_c8) goto LAB_00ed5f20;
    }
    plVar12 = (long *)*local_d0;
    lVar13 = plVar12[2];
    lVar3 = plVar12[3];
    lVar15 = plVar12[1];
    *(int *)(param_1 + 0xe4) = (int)plVar12[4];
    param_1[0xe2] = lVar13;
    param_1[0xe3] = lVar3;
    param_1[0xe1] = lVar15;
    param_1[0xe0] = *plVar12;
  }
  FUN_00ed6130(param_1,lVar10,&local_d0);
LAB_00ed5f20:
  if (local_d0 != (long *)0x0) {
    local_c8 = local_d0;
    (**(code **)(*local_b8 + 0x18))(local_b8,local_d0,(long)local_c0 - (long)local_d0,8);
  }
  return;
}


