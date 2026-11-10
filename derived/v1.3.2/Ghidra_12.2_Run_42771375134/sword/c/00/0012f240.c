/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012f240; name: FUN_0012f240
 */


void FUN_0012f240(long param_1,long *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint *puVar22;
  ulong local_78;
  ulong local_70;
  undefined8 local_68;
  
  if ((int)param_2[1] != *(int *)(param_1 + 0x208)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 8);
    uVar8 = *(undefined8 *)(param_1 + 0x98);
    puVar3 = (uint *)(param_2 + 2);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x120) + 8);
    *(int *)(param_2 + 1) = *(int *)(param_1 + 0x208);
    (**(code **)(*param_2 + 0x18))(param_2,puVar3,uVar6,uVar7,uVar8,param_1 + 0xc0);
    uVar19 = *(uint *)(param_2 + 3);
    if (uVar19 == 0) {
      uVar19 = 0;
    }
    else {
      uVar21 = 0;
      do {
        while( true ) {
          puVar1 = (uint *)(param_2[6] + uVar21 * 8);
          uVar13 = *puVar1;
          puVar22 = puVar1 + 1;
          uVar18 = *puVar22;
          uVar9 = uVar18 & 0x7fffffff;
          uVar20 = (uint)uVar21;
          if (-1 < (int)uVar13) break;
          local_78 = (ulong)(uVar13 & 0x7fffffff);
          local_70 = (ulong)uVar9;
          uVar12 = *(ulong *)(*(long *)(param_1 + 0xb0) + local_78 * 0x10) & 0xf;
          uVar21 = *(ulong *)(*(long *)(param_1 + 0xb0) + local_70 * 0x10) & 0xf;
          if ((uint)uVar21 <= (uint)uVar12) {
            uVar21 = uVar12;
          }
          lVar4 = param_1 + uVar21 * 0x10;
          local_68 = 0;
          if (*(uint *)(lVar4 + 0x150) < (*(uint *)(lVar4 + 0x154) & 0x7fffffff)) {
            puVar11 = (ulong *)(*(long *)(lVar4 + 0x148) + (ulong)*(uint *)(lVar4 + 0x150) * 0x18);
            puVar11[2] = 0;
            puVar11[1] = local_70;
            *puVar11 = local_78;
            *(int *)(lVar4 + 0x150) = *(int *)(lVar4 + 0x150) + 1;
          }
          else {
            FUN_00134310((long *)(lVar4 + 0x148),&local_78);
          }
          *puVar1 = *puVar1 & 0x7fffffff;
          uVar9 = *puVar22 & 0x7fffffff;
LAB_0012f420:
          *puVar22 = uVar9;
          uVar21 = (ulong)(uVar20 + 1);
          if (uVar19 <= uVar20 + 1) goto LAB_0012f56c;
        }
        if ((int)uVar18 < 0) goto LAB_0012f420;
        uVar12 = (ulong)(uVar13 & 0x7fffffff);
        uVar14 = *(ulong *)(*(long *)(param_1 + 0xb0) + uVar12 * 0x10);
        if (0xf < uVar14) {
          uVar10 = (ulong)uVar9;
          uVar17 = *(ulong *)(*(long *)(param_1 + 0xb0) + uVar10 * 0x10);
          if (0xf < uVar17) {
            uVar14 = uVar14 & 0xf;
            uVar17 = uVar17 & 0xf;
            if ((uint)uVar17 <= (uint)uVar14) {
              uVar17 = uVar14;
            }
            lVar4 = param_1 + uVar17 * 0x10;
            local_68 = 0;
            local_78 = uVar12;
            local_70 = uVar10;
            if (*(uint *)(lVar4 + 400) < (*(uint *)(lVar4 + 0x194) & 0x7fffffff)) {
              puVar11 = (ulong *)(*(long *)(lVar4 + 0x188) + (ulong)*(uint *)(lVar4 + 400) * 0x18);
              puVar11[2] = 0;
              puVar11[1] = uVar10;
              *puVar11 = uVar12;
              *(int *)(lVar4 + 400) = *(int *)(lVar4 + 400) + 1;
            }
            else {
              FUN_00134310((long *)(lVar4 + 0x188),&local_78);
            }
          }
        }
        uVar9 = uVar13 & 0xffff | uVar18 << 0x10;
        uVar9 = uVar9 + (uVar9 << 0xf ^ 0xffffffff);
        uVar9 = (uVar9 ^ uVar9 >> 10) * 9;
        uVar9 = uVar9 ^ uVar9 >> 6;
        uVar9 = uVar9 + (uVar9 << 0xb ^ 0xffffffff);
        uVar12 = (ulong)(*(uint *)((long)param_2 + 0x14) & (uVar9 ^ uVar9 >> 0x10));
        lVar4 = param_2[4];
        lVar5 = param_2[5];
        uVar9 = *(uint *)(lVar4 + uVar12 * 4);
        if (uVar9 == uVar20) {
          uVar16 = *(undefined4 *)(lVar5 + uVar21 * 4);
LAB_0012f4a4:
          *(undefined4 *)(lVar4 + uVar12 * 4) = uVar16;
        }
        else {
          do {
            uVar13 = uVar9;
            uVar9 = *(uint *)(lVar5 + (ulong)uVar13 * 4);
          } while (uVar9 != uVar20);
          uVar16 = *(undefined4 *)(lVar5 + uVar21 * 4);
          if (uVar13 == 0xffffffff) goto LAB_0012f4a4;
          *(undefined4 *)(lVar5 + (ulong)uVar13 * 4) = uVar16;
        }
        uVar9 = (int)param_2[3] - 1;
        uVar13 = uVar20;
        if (uVar9 != uVar20) {
          lVar15 = param_2[6];
          puVar2 = (ushort *)(lVar15 + (ulong)uVar9 * 8);
          uVar13 = (uint)*puVar2 | *(int *)(puVar2 + 2) << 0x10;
          uVar13 = uVar13 + (uVar13 << 0xf ^ 0xffffffff);
          uVar13 = (uVar13 ^ uVar13 >> 10) * 9;
          uVar13 = uVar13 ^ uVar13 >> 6;
          uVar13 = uVar13 + (uVar13 << 0xb ^ 0xffffffff);
          uVar12 = (ulong)((uVar13 ^ uVar13 >> 0x10) & *(uint *)((long)param_2 + 0x14));
          uVar13 = *(uint *)(lVar4 + uVar12 * 4);
          if (uVar13 == uVar9) {
            uVar16 = *(undefined4 *)(lVar5 + (ulong)uVar9 * 4);
LAB_0012f534:
            *(undefined4 *)(lVar4 + uVar12 * 4) = uVar16;
          }
          else {
            do {
              uVar18 = uVar13;
              uVar13 = *(uint *)(lVar5 + (ulong)uVar18 * 4);
            } while (uVar13 != uVar9);
            uVar16 = *(undefined4 *)(lVar5 + (ulong)uVar9 * 4);
            if (uVar18 == 0xffffffff) goto LAB_0012f534;
            *(undefined4 *)(lVar5 + (ulong)uVar18 * 4) = uVar16;
          }
          *(undefined8 *)(lVar15 + uVar21 * 8) = *(undefined8 *)puVar2;
          lVar4 = param_2[4];
          *(undefined4 *)(param_2[5] + uVar21 * 4) = *(undefined4 *)(lVar4 + uVar12 * 4);
          *(uint *)(lVar4 + uVar12 * 4) = uVar20;
          uVar13 = (int)param_2[3] - 1;
        }
        uVar19 = uVar19 - 1;
        *(uint *)(param_2 + 3) = uVar13;
      } while (uVar20 < uVar19);
LAB_0012f56c:
      uVar19 = *(uint *)(param_2 + 3);
    }
    uVar19 = uVar19 | uVar19 >> 1;
    uVar19 = uVar19 | uVar19 >> 2;
    uVar19 = uVar19 | uVar19 >> 4;
    uVar19 = uVar19 | uVar19 >> 8;
    uVar19 = uVar19 | uVar19 >> 0x10;
    uVar9 = uVar19 + 1;
    if ((*puVar3 != uVar9) && (*(uint *)(param_2 + 7) <= uVar9)) {
      *(uint *)(param_2 + 2) = uVar9;
      *(uint *)((long)param_2 + 0x14) = uVar19;
      FUN_00133f40(puVar3);
    }
  }
  return;
}


