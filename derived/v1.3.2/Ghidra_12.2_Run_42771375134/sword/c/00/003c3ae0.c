/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c3ae0; name: FUN_003c3ae0
 */


void FUN_003c3ae0(long *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ushort uVar7;
  long lVar8;
  ushort uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 auStack_6a0 [8];
  long *local_698;
  long local_690;
  uint local_688;
  undefined4 uStack_684;
  undefined1 local_680 [1536];
  undefined1 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  uVar14 = 0;
  local_70 = 0x4000000000;
  local_78 = local_680;
  local_80 = 1;
  plVar17 = param_1;
  do {
    while( true ) {
      lVar8 = *plVar17;
      if ((*(byte *)(*(long *)(lVar8 + 0x50) + 0x2c) & 1) != 0) break;
      *(byte *)(plVar17 + 0xb) = *(byte *)(plVar17 + 0xb) & 0xfe;
      local_688 = 0;
      local_690 = 0;
      iVar18 = *(int *)(lVar8 + 0x34);
      local_698 = plVar17;
      if (iVar18 != 0) {
        uVar16 = 0;
        uVar20 = 0x18000000;
        plVar11 = *(long **)(lVar8 + 0x28);
        do {
          if (*(char *)(*plVar11 + 0x24) == '\x04') {
            lVar13 = *(long *)(*plVar11 + 0x28);
            lVar12 = *local_698;
                    /* try { // try from 003c3bbc to 003c3bc3 has its CatchHandler @ 003c42a0 */
            uVar3 = FUN_003c5430(lVar13);
            lVar8 = *(long *)(lVar13 + 0x78);
            uVar9 = 0;
            if ((uVar3 & 1) == 0) {
              uVar9 = **(ushort **)(lVar13 + 0x68) & 6;
            }
            if (lVar8 == lVar12) {
              lVar8 = *(long *)(lVar13 + 0x80);
              uVar7 = uVar9 & 2;
              uVar9 = uVar9 & 4;
              if (lVar8 != 0) goto LAB_003c3bf0;
LAB_003c3c2c:
              uVar16 = 0;
              if (uVar9 != 0) {
                uVar20 = 0;
                local_688 = local_688 & 0xe7ffffff;
                uVar14 = uVar14 + 1;
                uVar16 = 0x80000000;
              }
              uVar15 = 0x40000000;
              if (lVar8 != 0) {
                uVar15 = 0x20000000;
              }
              if ((local_690 == 0) || (local_688 < (uVar16 | uVar15))) {
                local_690 = lVar13;
              }
              uVar16 = local_688 | uVar16 | uVar15;
            }
            else {
              uVar7 = uVar9 & 4;
              uVar9 = uVar9 & 2;
              if (lVar8 == 0) goto LAB_003c3c2c;
LAB_003c3bf0:
              if ((*(byte *)(*(long *)(lVar8 + 0x50) + 0x2c) & 1) != 0) goto LAB_003c3c2c;
              if (uVar9 == 0 || uVar7 == 0) {
                if (uVar9 != 0) {
                  uVar20 = 0;
                  local_688 = local_688 & 0xe7ffffff;
                  goto LAB_003c3c7c;
                }
                if (uVar7 != 0) {
                  local_688 = uVar20 | local_688 | 0x80000000;
                  goto LAB_003c3c7c;
                }
              }
              else {
                uVar20 = uVar20 & 0xefffffff;
                local_688 = local_688 & 0xefffffff;
LAB_003c3c7c:
                uVar14 = uVar14 + 1;
              }
              uVar16 = local_688 + 1;
            }
            local_688 = uVar16;
          }
          iVar18 = iVar18 + -1;
          plVar11 = plVar11 + 1;
        } while (iVar18 != 0);
        if (8 < uVar16 >> 0x1c) {
          *(byte *)(plVar17 + 0xb) = *(byte *)(plVar17 + 0xb) | 1;
        }
      }
      if ((uint)local_70 < (local_70._4_4_ & 0x7fffffff)) {
        puVar5 = (undefined8 *)(local_78 + (local_70 & 0xffffffff) * 0x18);
        puVar5[2] = CONCAT44(uStack_684,local_688);
        puVar5[1] = local_690;
        *puVar5 = local_698;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 + 1);
        plVar17 = (long *)plVar17[4];
      }
      else {
                    /* try { // try from 003c3cf8 to 003c3d03 has its CatchHandler @ 003c4290 */
        FUN_003c4540(local_680,&local_698);
        plVar17 = (long *)plVar17[4];
      }
      if (plVar17 == (long *)0x0) goto LAB_003c3d0c;
    }
    *(byte *)(plVar17 + 0xb) = *(byte *)(plVar17 + 0xb) | 1;
    plVar17 = (long *)plVar17[4];
  } while (plVar17 != (long *)0x0);
LAB_003c3d0c:
  bVar1 = *(byte *)(param_1 + 0xb) & 7;
  if (uVar14 < 0x41) {
    if (uVar14 < 0x11) {
      if (uVar14 < 5) {
        if (uVar14 != 0) {
          bVar1 = bVar1 | 8;
        }
        *(byte *)(param_1 + 0xb) = bVar1;
      }
      else {
        *(byte *)(param_1 + 0xb) = bVar1 | 0x10;
      }
    }
    else {
      *(byte *)(param_1 + 0xb) = bVar1 | 0x20;
    }
  }
  else {
    *(byte *)(param_1 + 0xb) = bVar1 | 0x40;
  }
  if ((uint)local_70 == 0) goto LAB_003c3e88;
                    /* try { // try from 003c3d88 to 003c3d97 has its CatchHandler @ 003c41e0 */
  FUN_003c46d0(local_78,local_70 & 0xffffffff,auStack_6a0,auStack_68,0x20);
  uVar3 = local_70 & 0xffffffff;
  if ((uint)local_70 != 0) {
                    /* try { // try from 003c3da0 to 003c3dcb has its CatchHandler @ 003c4200 */
    plVar17 = (long *)FUN_00400d30();
    plVar17 = (long *)(**(code **)(*plVar17 + 0x10))
                                (plVar17,uVar3 << 3,"NonTrackedAlloc",
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScConstraintProjectionTree.cpp"
                                 ,0x106);
    if (plVar17 != (long *)0x0) {
      uVar14 = (uint)local_70;
      if ((uint)local_70 == 0) {
        lVar8 = 0;
        uVar3 = 0;
LAB_003c3fc0:
        uVar14 = (uint)uVar3;
        iVar18 = 0;
      }
      else {
        uVar3 = 0;
        plVar11 = plVar17;
        lVar12 = 0;
        do {
          puVar2 = local_78;
          if (*(uint *)(local_78 + uVar3 * 0x18 + 0x10) >> 0x1c < 9) {
            lVar8 = lVar12;
            break;
          }
          lVar8 = *(long *)(local_78 + uVar3 * 0x18);
          puVar5 = (undefined8 *)(local_78 + uVar3 * 0x18 + 8);
                    /* try { // try from 003c3e14 to 003c3e1f has its CatchHandler @ 003c4280 */
          FUN_003c17a0(lVar8,0,*puVar5);
          if ((puVar2[uVar3 * 0x18 + 0x13] & 0x60) == 0) {
                    /* try { // try from 003c3e3c to 003c3e47 has its CatchHandler @ 003c4240 */
            uVar6 = FUN_003c4300(lVar8,*puVar5,plVar11);
            uVar6 = uVar6 & 0xffffffff;
          }
          else {
            uVar6 = 1;
            *plVar11 = lVar8;
          }
          plVar11 = plVar11 + uVar6;
          uVar16 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar16;
          *(long *)(lVar8 + 0x30) = lVar12;
          lVar12 = lVar8;
        } while (uVar16 < uVar14);
        if (plVar11 != plVar17) {
          plVar10 = plVar17;
          do {
                    /* try { // try from 003c3f18 to 003c3f1f has its CatchHandler @ 003c4260 */
            uVar6 = FUN_003c4300(*plVar10,*(undefined8 *)(*plVar10 + 0x50),plVar11);
            plVar11 = plVar11 + (uVar6 & 0xffffffff);
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar11);
        }
        if ((uint)local_70 <= (uint)uVar3) goto LAB_003c3fc0;
        iVar18 = 0;
        uVar6 = uVar3;
        uVar19 = uVar3;
        do {
          while( true ) {
            uVar14 = (uint)uVar19;
            plVar11 = (long *)(local_78 + uVar6 * 0x18);
            if (*(uint *)(plVar11 + 2) >> 0x1b < 0x11) goto LAB_003c3fc8;
            bVar1 = *(byte *)(*plVar11 + 0x58);
            if ((bVar1 & 1) != 0) break;
            *(byte *)(*plVar11 + 0x58) = bVar1 | 1;
            plVar10 = (long *)(local_78 + uVar19 * 0x18);
            plVar10[2] = plVar11[2];
            plVar10[1] = plVar11[1];
            *plVar10 = *plVar11;
            uVar14 = uVar14 + 1;
            uVar19 = (ulong)uVar14;
            uVar16 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar16;
            if ((uint)local_70 <= uVar16) goto LAB_003c3fc8;
          }
          iVar18 = iVar18 + 1;
          uVar16 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar16;
        } while (uVar16 < (uint)local_70);
      }
LAB_003c3fc8:
      uVar16 = (uint)uVar3;
      if (uVar16 < uVar14) {
        lVar12 = lVar8;
        plVar11 = plVar17;
        do {
          puVar2 = local_78;
          uVar16 = (uint)uVar3;
          if (*(uint *)(local_78 + uVar3 * 0x18 + 0x10) >> 0x1b < 0x11) {
            lVar8 = lVar12;
            break;
          }
          lVar8 = *(long *)(local_78 + uVar3 * 0x18);
          puVar5 = (undefined8 *)(local_78 + uVar3 * 0x18 + 8);
                    /* try { // try from 003c4004 to 003c400f has its CatchHandler @ 003c4250 */
          FUN_003c17a0(lVar8,0,*puVar5);
          if ((puVar2[uVar3 * 0x18 + 0x13] & 0x60) == 0) {
                    /* try { // try from 003c402c to 003c4037 has its CatchHandler @ 003c4220 */
            uVar3 = FUN_003c4300(lVar8,*puVar5,plVar11);
            uVar3 = uVar3 & 0xffffffff;
          }
          else {
            *plVar11 = lVar8;
            uVar3 = 1;
          }
          plVar11 = plVar11 + uVar3;
          uVar16 = uVar16 + 1;
          uVar3 = (ulong)uVar16;
          *(long *)(lVar8 + 0x30) = lVar12;
          lVar12 = lVar8;
        } while (uVar16 < uVar14);
        if (plVar11 != plVar17) {
          plVar10 = plVar17;
          do {
                    /* try { // try from 003c4070 to 003c4077 has its CatchHandler @ 003c4230 */
            uVar3 = FUN_003c4300(*plVar10,*(undefined8 *)(*plVar10 + 0x50),plVar11);
            plVar11 = plVar11 + (uVar3 & 0xffffffff);
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar11);
        }
      }
      uVar16 = uVar16 + iVar18;
      if (uVar16 < (uint)local_70) {
        uVar20 = uVar16;
        uVar14 = uVar16;
        do {
          plVar11 = (long *)(local_78 + (ulong)uVar20 * 0x18);
          if (*(uint *)(plVar11 + 2) >> 0x1b < 0x11) break;
          bVar1 = *(byte *)(*plVar11 + 0x58);
          if ((bVar1 & 1) == 0) {
            *(byte *)(*plVar11 + 0x58) = bVar1 | 1;
            plVar10 = (long *)(local_78 + (ulong)uVar14 * 0x18);
            plVar10[2] = plVar11[2];
            plVar10[1] = plVar11[1];
            *plVar10 = *plVar11;
            uVar14 = uVar14 + 1;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < (uint)local_70);
      }
      if (uVar16 < (uint)local_70) {
        uVar3 = (ulong)uVar16;
        lVar12 = lVar8;
        uVar14 = (uint)local_70;
        do {
          while( true ) {
            lVar8 = *(long *)(local_78 + uVar3 * 0x18);
            if ((*(byte *)(lVar8 + 0x58) & 1) != 0) break;
            *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
                    /* try { // try from 003c4138 to 003c4143 has its CatchHandler @ 003c4210 */
            uVar6 = FUN_003c4300(lVar8,*(undefined8 *)(local_78 + uVar3 * 0x18 + 8),plVar17);
            if ((uVar6 & 0xffffffff) != 0) {
              plVar11 = plVar17 + (uVar6 & 0xffffffff);
              plVar10 = plVar17;
              do {
                    /* try { // try from 003c4160 to 003c4167 has its CatchHandler @ 003c4270 */
                uVar6 = FUN_003c4300(*plVar10,*(undefined8 *)(*plVar10 + 0x50),plVar11);
                plVar11 = plVar11 + (uVar6 & 0xffffffff);
                plVar10 = plVar10 + 1;
              } while (plVar10 != plVar11);
            }
            *(long *)(lVar8 + 0x30) = lVar12;
            uVar3 = uVar3 + 1;
            lVar12 = lVar8;
            uVar14 = (uint)local_70;
            if ((local_70 & 0xffffffff) <= uVar3) goto LAB_003c41ac;
          }
          uVar3 = uVar3 + 1;
          lVar8 = lVar12;
        } while (uVar3 < uVar14);
      }
      else {
      }
LAB_003c41ac:
      param_1[5] = lVar8;
                    /* try { // try from 003c41b4 to 003c41c7 has its CatchHandler @ 003c41cc */
      plVar11 = (long *)FUN_00400d30();
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar17);
      goto LAB_003c3e88;
    }
  }
                    /* try { // try from 003c3e68 to 003c3e87 has its CatchHandler @ 003c41f0 */
  uVar4 = FUN_00400880();
  FUN_00400890(uVar4,0x10,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScConstraintProjectionTree.cpp"
               ,0x195,"Allocating projection node queue failed!");
LAB_003c3e88:
  puVar2 = local_78;
  if ((((-1 < (long)local_70) && ((local_70 & 0x7fffffff00000000) != 0)) && (local_680 != local_78))
     && (local_78 != (undefined1 *)0x0)) {
                    /* try { // try from 003c3eac to 003c3ebf has its CatchHandler @ 003c41dc */
    plVar17 = (long *)FUN_00400d30();
    (**(code **)(*plVar17 + 0x18))(plVar17,puVar2);
  }
  return;
}


