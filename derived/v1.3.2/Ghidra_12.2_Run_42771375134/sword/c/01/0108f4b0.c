/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108f4b0; name: FUN_0108f4b0
 */


void FUN_0108f4b0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ushort local_84;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined1 local_7c;
  undefined1 uStack_7b;
  ushort local_7a;
  ushort uStack_78;
  ushort uStack_76;
  ushort uStack_74;
  ushort local_72;
  undefined2 uStack_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_66;
  
  if (param_2 != 0) {
    plVar19 = *(long **)(param_1 + 0x60);
    if (5 < param_2) {
      param_2 = 6;
    }
    (**(code **)(**(long **)(param_1 + 0x4f0) + 0x70))();
    if (param_2 != 0) {
      uVar24 = 0;
      do {
        piVar10 = *(int **)(param_1 + 0x580);
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
           (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar16 == 0)) {
          lVar4 = 0;
          lVar17 = *(long *)(param_1 + 0x4f8);
          lVar5 = *(long *)(param_1 + 0x500) - lVar17;
          if (lVar5 == 0) goto LAB_0108f55c;
LAB_0108f578:
          uVar1 = *(uint *)(param_1 + 0x528);
          uVar9 = uVar1 + 1;
          uVar18 = lVar5 >> 1;
          *(uint *)(param_1 + 0x528) = uVar9;
          uVar16 = (ulong)*(ushort *)(lVar17 + (ulong)uVar1 * 2);
          iVar2 = 0;
          if (uVar18 != 0) {
            iVar2 = (int)(uVar9 / uVar18);
          }
          *(uint *)(param_1 + 0x528) = uVar9 - iVar2 * (int)uVar18;
        }
        else {
          puVar11 = (uint *)((long)piVar10 + uVar16);
          lVar4 = (long)puVar11 + (ulong)*puVar11;
          lVar17 = *(long *)(param_1 + 0x4f8);
          lVar5 = *(long *)(param_1 + 0x500) - lVar17;
          if (lVar5 != 0) goto LAB_0108f578;
LAB_0108f55c:
          uVar16 = 0;
        }
        puVar11 = (uint *)(lVar4 + uVar16 * 4 + 4);
        piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
           (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar16 == 0)) {
          piVar10 = (int *)0x0;
        }
        else {
          puVar11 = (uint *)((long)piVar10 + uVar16);
          piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
        }
        local_a0 = 0xffffffffffffffff;
        local_6c = 0xffff;
        local_66 = 0x1000100;
        local_b0 = 0;
        local_a8 = 0;
        local_88 = 0;
        local_90 = 0xffffffffffffffff;
        local_68 = 0;
        if (0xe < *(ushort *)((long)piVar10 - (long)*piVar10)) {
          uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[7];
          local_88 = 0;
          if (uVar16 != 0) {
            local_88 = *(undefined4 *)((long)piVar10 + uVar16);
          }
        }
        if (*(ushort *)((long)piVar10 - (long)*piVar10) < 7) {
          uVar7 = 0;
        }
        else {
          uVar7 = ((ushort *)((long)piVar10 - (long)*piVar10))[3];
          if ((ulong)uVar7 != 0) {
            uVar7 = (ushort)*(undefined4 *)((long)piVar10 + (ulong)uVar7);
          }
        }
        _local_84 = CONCAT44(0xffff00ff,CONCAT22(0x32,uVar7));
        if (*(ushort *)((long)piVar10 - (long)*piVar10) < 0x11) {
          uVar7 = 0;
        }
        else {
          uVar7 = ((ushort *)((long)piVar10 - (long)*piVar10))[8];
          if ((ulong)uVar7 != 0) {
            uVar7 = (ushort)*(undefined4 *)((long)piVar10 + (ulong)uVar7);
          }
        }
        _local_84 = CONCAT26(uVar7,_local_84);
        if (*(ushort *)((long)piVar10 - (long)*piVar10) < 0x15) {
LAB_0108f6ec:
          uVar9 = 0;
        }
        else {
          uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[10];
          uVar9 = 0;
          if (uVar16 != 0) {
            uVar9 = *(uint *)((long)piVar10 + uVar16);
            if (2 < uVar9) {
              if (uVar9 == 3) {
                uVar9 = 0xff;
              }
              else {
                if (uVar9 != 4) goto LAB_0108f6ec;
                uVar9 = 0xfe;
              }
            }
          }
        }
        _local_7c = CONCAT11(1,(char)uVar9);
        local_98 = 0x1ffffffff;
        if (*(ushort *)((long)piVar10 - (long)*piVar10) < 0xb) {
          piVar23 = (int *)0x0;
        }
        else {
          uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5];
          piVar23 = (int *)0x0;
          if (uVar16 != 0) {
            puVar11 = (uint *)((long)piVar10 + uVar16);
            piVar23 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if (*(ushort *)((long)piVar23 - (long)*piVar23) < 9) {
          uVar7 = 0;
        }
        else {
          uVar7 = ((ushort *)((long)piVar23 - (long)*piVar23))[4];
          if ((ulong)uVar7 != 0) {
            uVar7 = (ushort)*(undefined4 *)((long)piVar23 + (ulong)uVar7);
          }
        }
        if (*(ushort *)((long)piVar23 - (long)*piVar23) < 5) {
          uVar13 = 0;
        }
        else {
          uVar13 = ((ushort *)((long)piVar23 - (long)*piVar23))[2];
          if ((ulong)uVar13 != 0) {
            uVar13 = (ushort)*(undefined4 *)((long)piVar23 + (ulong)uVar13);
          }
        }
        if (*(ushort *)((long)piVar23 - (long)*piVar23) < 7) {
          uVar14 = 0;
        }
        else {
          uVar14 = ((ushort *)((long)piVar23 - (long)*piVar23))[3];
          if ((ulong)uVar14 != 0) {
            uVar14 = (ushort)*(undefined4 *)((long)piVar23 + (ulong)uVar14);
          }
        }
        if (*(ushort *)((long)piVar23 - (long)*piVar23) < 0xb) {
          uVar15 = 0;
        }
        else {
          uVar15 = ((ushort *)((long)piVar23 - (long)*piVar23))[5];
          if ((ulong)uVar15 != 0) {
            uVar15 = (ushort)*(undefined4 *)((long)piVar23 + (ulong)uVar15);
          }
        }
        _local_7a = CONCAT26(uVar15,CONCAT24(uVar14,CONCAT22(uVar13,uVar7)));
        if (*(ushort *)((long)piVar23 - (long)*piVar23) < 0xd) {
          uVar7 = 0;
        }
        else {
          uVar7 = ((ushort *)((long)piVar23 - (long)*piVar23))[6];
          if ((ulong)uVar7 != 0) {
            uVar7 = (ushort)*(undefined4 *)((long)piVar23 + (ulong)uVar7);
          }
        }
        if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 0xf) ||
           (uVar16 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[7], uVar16 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (undefined2)*(undefined4 *)((long)piVar23 + uVar16);
        }
        _local_72 = CONCAT22(uVar8,uVar7);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar19;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar5 = (**(code **)(*plVar19 + 0x10))(plVar19,0xb8,8);
        if (lVar5 == 0) {
          (**(code **)(*plVar19 + 0xb8))(plVar19);
        }
        FUN_008662a0(lVar5,plVar19,&local_b0);
        *(long **)(lVar5 + 8) = plVar19;
        *(long *)(lVar5 + 0x10) = lVar5;
        *(undefined8 *)(lVar5 + 0x18) = 0xb8;
        *(undefined8 *)(lVar5 + 0x20) = 8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        puVar12 = (ushort *)((long)piVar10 - (long)*piVar10);
        uVar7 = *puVar12;
        if (uVar7 < 0x17) {
          if (4 < uVar7) goto LAB_0108f92c;
          piVar21 = (int *)0x0;
          piVar23 = (int *)0x0;
LAB_0108f958:
          piVar22 = (int *)0x0;
        }
        else {
          if ((ulong)puVar12[0xb] == 0) {
LAB_0108f92c:
            piVar23 = (int *)0x0;
            uVar16 = (ulong)puVar12[2];
            if (uVar16 == 0) goto LAB_0108f900;
LAB_0108f938:
            piVar21 = (int *)((long)((long)piVar10 + uVar16) +
                             (ulong)*(uint *)((long)piVar10 + uVar16));
          }
          else {
            puVar11 = (uint *)((long)piVar10 + (ulong)puVar12[0xb]);
            piVar23 = (int *)((long)puVar11 + (ulong)*puVar11);
            uVar16 = (ulong)puVar12[2];
            if (uVar16 != 0) goto LAB_0108f938;
LAB_0108f900:
            piVar21 = (int *)0x0;
          }
          if ((uVar7 < 9) || ((ulong)puVar12[4] == 0)) goto LAB_0108f958;
          puVar11 = (uint *)((long)piVar10 + (ulong)puVar12[4]);
          piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
        }
        if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 5) ||
           (uVar16 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[2], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar23 + uVar16);
        }
        FUN_0087bfb0(lVar5,0,uVar6);
        uVar6 = 0;
        if (6 < *(ushort *)((long)piVar23 - (long)*piVar23)) {
          uVar16 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[3];
          if (uVar16 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)((long)piVar23 + uVar16);
          }
        }
        FUN_0087bfb0(lVar5,1,uVar6);
        if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 9) ||
           (uVar16 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[4], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar23 + uVar16);
        }
        FUN_0087bfb0(lVar5,2,uVar6);
        if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 0xb) ||
           (uVar16 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[5], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar23 + uVar16);
        }
        FUN_0087bfb0(lVar5,3,uVar6);
        FUN_0087c040(lVar5);
        FUN_0087c370(lVar5);
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 9) ||
           (uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar21 + uVar16);
        }
        FUN_0087a8a0(lVar5,0,uVar6);
        uVar6 = 0;
        if (4 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
          uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
          if (uVar16 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)((long)piVar21 + uVar16);
          }
        }
        FUN_0087a8a0(lVar5,1,uVar6);
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 7) ||
           (uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar21 + uVar16);
        }
        FUN_0087a8a0(lVar5,2,uVar6);
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xb) ||
           (uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[5], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar21 + uVar16);
        }
        FUN_0087a8a0(lVar5,3,uVar6);
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xd) ||
           (uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[6], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar21 + uVar16);
        }
        FUN_0087a8a0(lVar5,4,uVar6);
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xf) ||
           (uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[7], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar21 + uVar16);
        }
        FUN_0087a8a0(lVar5,5,uVar6);
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xd) ||
           (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar10 + uVar16);
        }
        FUN_00878810(lVar5,uVar6);
        if (((*(ushort *)((long)piVar22 - (long)*piVar22) < 7) ||
            (uVar16 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3], uVar16 == 0)) ||
           (*(char *)((long)piVar22 + uVar16) == '\0')) {
          FUN_00879880(lVar5);
        }
        else {
          FUN_00879870(lVar5);
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar16 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar16 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)piVar22 + uVar16);
        }
        FUN_008798b0(lVar5,uVar6);
        (**(code **)(**(long **)(param_1 + 0x4f0) + 0x28))(*(long **)(param_1 + 0x4f0),lVar5);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_2);
    }
    iVar2 = FUN_00884820(*(undefined8 *)(param_1 + 0x4f0));
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) {
      iVar20 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 0x4f0) + 0x58))(*(long **)(param_1 + 0x4f0),iVar2);
        iVar3 = FUN_0087cdb0();
        if (iVar3 != 0x95) {
          return;
        }
        (**(code **)(**(long **)(param_1 + 0x4f0) + 0x40))(*(long **)(param_1 + 0x4f0),iVar20,iVar2)
        ;
        iVar20 = iVar20 + 1;
      } while (iVar2 != iVar20);
    }
  }
  return;
}


