/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bea40; name: FUN_006bea40
 */


void FUN_006bea40(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;
  bool bVar18;
  int iVar19;
  int *piVar20;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long local_90 [2];
  undefined1 *local_80;
  long local_78;
  long local_70;
  
  plVar15 = *(long **)(param_1 + 0x178);
  if (plVar15 == (long *)0x0) {
    plVar15 = *(long **)(param_1 + 8);
  }
  puVar17 = *(uint **)(param_1 + 400);
  uVar4 = *puVar17;
  piVar1 = (int *)((long)puVar17 + (ulong)uVar4);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
     (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar10 == 0)) {
    lVar16 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar10);
    lVar16 = (long)puVar2 + (ulong)*puVar2;
  }
  uVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,0xb8,8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006bef28;
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar15;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  FUN_006b9f60(uVar6,plVar15,lVar16);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar6;
  if (lVar7 != 0) {
    FUN_006bf8d0(lVar7);
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x18))
              (*(long **)(param_1 + 0x1b8),lVar7,*(undefined8 *)(param_1 + 0x1c0),
               *(undefined8 *)(param_1 + 0x1c8));
  }
  *(long **)(param_1 + 0x1b8) = plVar15;
  *(undefined8 *)(param_1 + 0x1c0) = 0xb8;
  *(undefined8 *)(param_1 + 0x1c8) = 8;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
     (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar10 == 0)) {
    piVar20 = (int *)0x0;
LAB_006bec50:
    bVar18 = true;
  }
  else {
    uVar11 = (ulong)*(uint *)((long)piVar1 + uVar10);
    piVar20 = (int *)((long)((long)piVar1 + uVar10) + uVar11);
    if (piVar20 == (int *)0x0) goto LAB_006bec50;
    uVar12 = (ulong)*(ushort *)((long)piVar20 + (4 - (long)*piVar20));
    puVar2 = (uint *)((long)piVar20 + uVar12);
    uVar13 = (ulong)*puVar2;
    uVar14 = (ulong)*(uint *)((long)puVar2 + uVar13);
    if (uVar14 != 0) {
      lVar3 = uVar4 + uVar13 + uVar12 + uVar11 + uVar10;
      lVar7 = 0;
      do {
        uVar10 = (ulong)*(uint *)((long)puVar17 + lVar7 + lVar3 + 4);
        lVar9 = lVar7 + (uVar10 - (long)*(int *)((long)puVar17 + lVar7 + uVar10 + lVar3 + 4)) +
                        lVar3;
        if ((*(ushort *)((long)puVar17 + lVar9 + 4) < 7) ||
           (uVar11 = (ulong)*(ushort *)((long)puVar17 + lVar9 + 10), uVar11 == 0)) {
          lVar9 = 0;
        }
        else {
          lVar9 = uVar10 + uVar11;
          lVar9 = (long)puVar17 +
                  lVar7 + lVar9 + (ulong)*(uint *)((long)puVar17 + lVar7 + lVar9 + lVar3 + 4) +
                  lVar3 + 4;
        }
        FUN_006bef90(param_1,lVar9);
        lVar7 = lVar7 + 4;
      } while (uVar14 * 4 != lVar7);
    }
    bVar18 = false;
  }
  uVar6 = FUN_006e1b00(param_1);
  local_98 = 0;
  local_a8 = 0xcbf29ce484222645;
  puStack_a0 = &DAT_01d38550;
  FUN_006bfc20(local_90,param_1 + 0x60,&local_a8,&DAT_01d38550);
  FUN_006ba870(*(undefined8 *)(param_1 + 0x1b0),plVar15,local_90,uVar6);
  FUN_006ba8f0(*(undefined8 *)(param_1 + 0x1b0));
  if ((local_78 != 0) && (local_90[0] != 0)) {
    (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
  }
  local_90[0] = 0;
  local_90[1] = 0xcbf29ce484222645;
  local_80 = &DAT_01d38550;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (bVar18) {
LAB_006beda0:
    iVar19 = 0;
  }
  else {
    uVar10 = (ulong)*(ushort *)((long)piVar20 + (4 - (long)*piVar20));
    puVar17 = (uint *)((long)piVar20 + uVar10);
    uVar11 = (ulong)*puVar17;
    uVar12 = (ulong)*(uint *)((long)puVar17 + uVar11);
    if (uVar12 == 0) goto LAB_006beda0;
    lVar3 = uVar11 + uVar10;
    lVar7 = 0;
    iVar19 = 0;
    do {
      uVar10 = (ulong)*(uint *)((long)piVar20 + lVar7 + lVar3 + 4);
      lVar9 = lVar7 + (uVar10 - (long)*(int *)((long)piVar20 + lVar7 + uVar10 + lVar3 + 4)) + lVar3;
      if ((*(ushort *)((long)piVar20 + lVar9 + 4) < 7) ||
         (uVar11 = (ulong)*(ushort *)((long)piVar20 + lVar9 + 10), uVar11 == 0)) {
        lVar9 = 0;
      }
      else {
        lVar9 = uVar10 + uVar11;
        lVar9 = (long)piVar20 +
                lVar7 + lVar9 + (ulong)*(uint *)((long)piVar20 + lVar7 + lVar9 + lVar3 + 4) + lVar3
                + 4;
      }
      iVar5 = FUN_006bf260(lVar16,lVar9);
      lVar7 = lVar7 + 4;
      iVar19 = iVar5 + iVar19;
    } while (uVar12 * 4 != lVar7);
  }
  *(int *)(param_1 + 0x200) = iVar19;
  if (((0x12 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
      (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar10 != 0)) &&
     (puVar17 = (uint *)((long)piVar1 + uVar10), lVar16 = (long)puVar17 + (ulong)*puVar17,
     lVar16 != 0)) {
    uVar8 = (**(code **)(*plVar15 + 0x10))(plVar15,0x60,8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_006bef28:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar15;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    FUN_006c0070(uVar8,plVar15,lVar16);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar16 = *(long *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = uVar8;
    if (lVar16 != 0) {
      FUN_006bfa60(lVar16 + 8);
      (**(code **)(**(long **)(param_1 + 0x210) + 0x18))
                (*(long **)(param_1 + 0x210),lVar16,*(undefined8 *)(param_1 + 0x218),
                 *(undefined8 *)(param_1 + 0x220));
    }
    *(undefined8 *)(param_1 + 0x218) = 0x60;
    *(long **)(param_1 + 0x210) = plVar15;
    *(undefined8 *)(param_1 + 0x220) = 8;
    local_a8 = 0xcbf29ce484222645;
    puStack_a0 = &DAT_01d38550;
    local_98 = 0;
    FUN_006bfc20(local_90,param_1 + 0x60,&local_a8,&DAT_01d38550);
    FUN_006c04b0(*(undefined8 *)(param_1 + 0x208),plVar15,uVar6,local_90);
    if ((local_78 != 0) && (local_90[0] != 0)) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
    }
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
  }
  return;
}


