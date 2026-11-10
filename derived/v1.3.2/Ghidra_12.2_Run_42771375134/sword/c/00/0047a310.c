/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047a310; name: FUN_0047a310
 */


void FUN_0047a310(long *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  iVar3 = (int)param_1[0x1a] + -1;
  if (-1 < iVar3) {
    uVar11 = param_1[0x19];
    iVar6 = 0;
    do {
      while( true ) {
        iVar1 = iVar3 - iVar6;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar7 = iVar6 + (iVar1 >> 1);
        lVar13 = (long)(int)uVar7;
        uVar9 = *(ulong *)(uVar11 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 |
                                    (ulong)uVar7 << 4));
        if (param_2 < uVar9) break;
        if (param_2 <= uVar9) {
          plVar8 = (long *)(uVar11 + lVar13 * 0x10);
          if (plVar8 == (long *)0x0) {
            return;
          }
          piVar4 = (int *)(uVar11 + lVar13 * 0x10 + 8);
          iVar3 = *piVar4;
          iVar6 = iVar3 + -1;
          if (iVar3 != 0 && iVar6 != 0) {
            *piVar4 = iVar6;
            return;
          }
          uVar9 = (**(code **)(*param_1 + 0x260))(param_1);
          if ((uVar9 & 1) == 0) {
            lVar10 = *plVar8;
            if (lVar10 != 0) {
              FUN_0045b670(lVar10);
            }
            lVar2 = *param_3;
            *param_3 = lVar10;
            if (lVar2 != 0) {
              FUN_0045b680();
            }
          }
          FUN_0045b680(*plVar8);
          uVar7 = *(uint *)(param_1 + 0x1a);
          plVar5 = (long *)(param_1[0x19] + (ulong)uVar7 * 0x10 + -0x10);
          if (plVar8 < plVar5) {
            uVar11 = param_1[0x19] + (((ulong)uVar7 - 1) - lVar13) * 0x10 + ~uVar11;
            uVar7 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
            if ((uVar7 & 7) != 0) {
              lVar13 = -((ulong)uVar7 & 7);
              plVar12 = plVar8;
              do {
                plVar8 = plVar12 + 2;
                *(int *)(plVar12 + 1) = (int)plVar12[3];
                *plVar12 = *plVar8;
                lVar13 = lVar13 + 1;
                plVar12 = plVar8;
              } while (lVar13 != 0);
            }
            if (0x6f < uVar11) {
              do {
                *(int *)(plVar8 + 1) = (int)plVar8[3];
                *plVar8 = plVar8[2];
                plVar8[2] = plVar8[4];
                *(int *)(plVar8 + 3) = (int)plVar8[5];
                plVar8[4] = plVar8[6];
                *(int *)(plVar8 + 5) = (int)plVar8[7];
                plVar8[6] = plVar8[8];
                *(int *)(plVar8 + 7) = (int)plVar8[9];
                *(int *)(plVar8 + 9) = (int)plVar8[0xb];
                plVar8[8] = plVar8[10];
                *(int *)(plVar8 + 0xb) = (int)plVar8[0xd];
                plVar8[10] = plVar8[0xc];
                *(int *)(plVar8 + 0xd) = (int)plVar8[0xf];
                plVar8[0xc] = plVar8[0xe];
                plVar12 = plVar8 + 0x10;
                plVar8[0xe] = *plVar12;
                *(int *)(plVar8 + 0xf) = (int)plVar8[0x11];
                plVar8 = plVar12;
              } while (plVar12 < plVar5);
            }
            uVar7 = *(uint *)(param_1 + 0x1a);
          }
          *(uint *)(param_1 + 0x1a) = uVar7 - 1;
          return;
        }
        iVar6 = uVar7 + 1;
        if (iVar3 < iVar6) {
          return;
        }
      }
      iVar3 = uVar7 - 1;
    } while (iVar6 <= iVar3);
  }
  return;
}


