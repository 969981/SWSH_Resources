/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01375d90; name: FUN_01375d90
 */


void FUN_01375d90(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [96];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *local_a0 [12];
  
  lVar9 = *(long *)PTR_DAT_02727748;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        uVar6 = FUN_012eac20(*(undefined8 *)(lVar9 + 0x58));
        if ((uVar6 & 1) == 0) goto LAB_01375e30;
        iVar2 = *piVar1;
        if (iVar2 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            FUN_0130a7f0(lVar9 + -0x50,2);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
            goto LAB_01375e3c;
          }
          goto LAB_01375e30;
        }
        iVar10 = iVar2;
        if (iVar2 == 0) goto LAB_01375e30;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01375e30:
  FUN_0130a7f0(0,2);
LAB_01375e3c:
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar8)(puVar8);
  lVar9 = FUN_0132d9a0();
  for (; plVar7 != (long *)lVar9; plVar7 = (long *)*plVar7) {
  }
  lVar9 = puVar8[0x61];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_140 = &LAB_0137b080;
  local_138 = FUN_0137b090;
  local_130 = &LAB_0137b0a0;
  puStack_128 = &LAB_0137b0b0;
  local_c0 = PTR_LAB_02727728;
  local_b8 = (code *)PTR_FUN_02727730;
  local_b0 = PTR_LAB_02727738;
  local_a8 = PTR_LAB_02727740;
  local_a0[0] = (undefined1 *)&local_140;
  FUN_01306a00(lVar9,&local_c0);
  pcVar5 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(local_a0);
  }
  pcVar5 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar5)(auStack_120);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


