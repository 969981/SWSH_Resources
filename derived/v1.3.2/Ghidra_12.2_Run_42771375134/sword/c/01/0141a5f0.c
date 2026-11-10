/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141a5f0; name: FUN_0141a5f0
 */


void FUN_0141a5f0(long param_1,int param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  ulong *local_250 [13];
  long local_1e8;
  byte abStack_1e0 [384];
  ulong local_58;
  
  memcpy(abStack_1e0,"msg_ui_pokecamp_cooking_05_11",0x180);
  iVar11 = 3;
  if ((param_3 & 1) == 0) {
    iVar11 = 0;
  }
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),2);
  lVar14 = *(long *)(local_58 + 0x60);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  uVar2 = iVar11 + param_2;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  bVar3 = abStack_1e0[-(ulong)(uVar2 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar2 << 6];
  local_58 = 0xcbf29ce484222645;
  if (bVar3 != 0) {
    pbVar13 = (byte *)((ulong)(abStack_1e0 + (long)(int)uVar2 * 0x40) | 1);
    do {
      local_58 = (local_58 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar3 != 0);
  }
  lVar15 = *(long *)(param_1 + 0x2b0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar15 + 0x2e8);
  if (lVar16 == 0) {
    FUN_0077eb10(lVar14,&local_58,0);
  }
  else {
    plVar18 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_0077eb10(lVar14,&local_58,lVar16);
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  lVar15 = *(long *)(param_1 + 0x2b0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  local_58 = *(ulong *)(lVar15 + 0x2e0);
  if (local_58 == 0) {
    uVar17 = 0;
  }
  else {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    uVar17 = local_58;
  }
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  FUN_014c75c0(uVar17);
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar15 == 0) {
    FUN_014c9030(uVar17,0,0);
    lVar15 = *(long *)PTR_DAT_02727748;
    puVar6 = (undefined8 *)PTR_DAT_0271df28;
    pbVar13 = PTR_DAT_02727750;
    puVar7 = (undefined8 *)PTR_DAT_02727758;
  }
  else {
    plVar18 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_014c9030(uVar17,0,lVar15);
    (**(code **)(*plVar18 + 0x18))(plVar18);
    lVar15 = *(long *)PTR_DAT_02727748;
    puVar6 = (undefined8 *)PTR_DAT_0271df28;
    pbVar13 = PTR_DAT_02727750;
    puVar7 = (undefined8 *)PTR_DAT_02727758;
  }
  PTR_DAT_0271df28 = (undefined *)puVar6;
  PTR_DAT_02727750 = pbVar13;
  PTR_DAT_02727758 = (undefined *)puVar7;
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_0141a90c:
    lVar16 = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x54);
    iVar11 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        puVar12 = *(undefined8 **)(lVar15 + 0x58);
        if (((*pbVar13 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar13), iVar9 != 0)) {
          if (((*PTR_DAT_0271df20 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar9 != 0)) {
            uVar10 = FUN_00d3ff90();
            *puVar6 = uVar10;
            __cxa_guard_release(PTR_DAT_0271df20);
          }
          *puVar7 = puVar6;
          __cxa_guard_release(pbVar13);
        }
        while( true ) {
          if (puVar12 == (undefined8 *)0x0) goto LAB_0141a90c;
          if (puVar12 == puVar7) break;
          puVar12 = (undefined8 *)*puVar12;
        }
        iVar9 = *piVar1;
        if (iVar9 != iVar11) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar16 = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            lVar16 = *(long *)(lVar15 + 0x60) + -0x50;
          }
          goto LAB_0141a910;
        }
        lVar16 = 0;
        iVar11 = iVar9;
        if (iVar9 == 0) goto LAB_0141a910;
      }
      ClearExclusiveLocal();
      lVar16 = 0;
      iVar11 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0141a910:
  local_250[0] = &local_58;
  local_270 = &LAB_0141b450;
  local_268 = FUN_0141b4f0;
  local_260 = &LAB_0141b500;
  local_258 = &LAB_0141b510;
  FUN_01309760(&local_1e8,lVar16,&local_270);
  if (local_1e8 != 0) {
    (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
    local_1e8 = 0;
  }
  pcVar8 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar8)(local_250);
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  uVar17 = local_58;
  lVar15 = *(long *)(param_1 + 0x2b0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar15 + 0x2f0);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar19 = *(long *)(param_1 + 0x2b0);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar20 = *(long *)(lVar19 + 0x2e8);
  plVar18 = (long *)(lVar20 + 0x48);
  if (lVar20 != 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  FUN_014c62d0(uVar17,lVar16,lVar20);
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar18);
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  lVar15 = *(long *)(param_1 + 0x2b0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar15 + 0x2f0);
  if (lVar16 == 0) {
    uVar10 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_text_02",uVar10,10);
  }
  else {
    plVar18 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar18 + 0x10))(plVar18);
    uVar10 = FUN_0077d470(lVar16);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_text_02",uVar10,10);
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return;
}


