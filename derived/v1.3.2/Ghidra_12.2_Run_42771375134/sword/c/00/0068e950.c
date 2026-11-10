/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068e950; name: FUN_0068e950
 */


void FUN_0068e950(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  size_t __n;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  
  uVar2 = *(uint *)((long)param_1 + 0x44);
  uVar13 = (ulong)uVar2;
  uVar8 = *(uint *)((long)param_1 + 0xa4);
  uVar9 = uVar2;
  do {
    uVar14 = ((int)param_1[0xb] - uVar8) - *(uint *)((long)param_1 + 0x9c);
    if ((uVar2 - 0x106) + uVar9 <= *(uint *)((long)param_1 + 0x9c)) {
      memcpy((void *)param_1[10],(void *)(param_1[10] + uVar13),uVar13);
      uVar8 = *(uint *)((long)param_1 + 0x74);
      uVar6 = (ulong)uVar8;
      *(uint *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) - uVar2;
      *(uint *)(param_1 + 0x14) = (int)param_1[0x14] - uVar2;
      puVar7 = (ushort *)(param_1[0xd] + uVar6 * 2);
      param_1[0x11] = param_1[0x11] - uVar13;
      sVar4 = (short)uVar2;
      if ((uVar8 & 3) != 0) {
        iVar11 = -(uVar8 & 3);
        do {
          puVar7 = puVar7 + -1;
          uVar9 = uVar2;
          if (uVar2 <= *puVar7) {
            uVar9 = (uint)*puVar7;
          }
          iVar11 = iVar11 + 1;
          uVar6 = (ulong)((int)uVar6 - 1);
          *puVar7 = (short)uVar9 - sVar4;
        } while (iVar11 != 0);
      }
      if (2 < uVar8 - 1) {
        puVar7 = puVar7 + -2;
        do {
          uVar8 = uVar2;
          if (uVar2 <= puVar7[1]) {
            uVar8 = (uint)puVar7[1];
          }
          puVar7[1] = (short)uVar8 - sVar4;
          uVar8 = uVar2;
          if (uVar2 <= *puVar7) {
            uVar8 = (uint)*puVar7;
          }
          *puVar7 = (short)uVar8 - sVar4;
          uVar8 = uVar2;
          if (uVar2 <= puVar7[-1]) {
            uVar8 = (uint)puVar7[-1];
          }
          puVar7[-1] = (short)uVar8 - sVar4;
          uVar8 = uVar2;
          if (uVar2 <= puVar7[-2]) {
            uVar8 = (uint)puVar7[-2];
          }
          puVar7[-2] = (short)uVar8 - sVar4;
          uVar8 = (int)uVar6 - 4;
          uVar6 = (ulong)uVar8;
          puVar7 = puVar7 + -4;
        } while (uVar8 != 0);
      }
      puVar7 = (ushort *)(param_1[0xc] + uVar13 * 2);
      uVar6 = uVar13;
      if ((uVar2 & 3) != 0) {
        uVar8 = 0;
        do {
          puVar7 = puVar7 + -1;
          uVar9 = uVar2;
          if (uVar2 <= *puVar7) {
            uVar9 = (uint)*puVar7;
          }
          uVar8 = uVar8 + 1;
          *puVar7 = (short)uVar9 - sVar4;
        } while ((uVar2 & 3) != uVar8);
        uVar6 = (ulong)(uVar2 - uVar8);
      }
      if (2 < uVar2 - 1) {
        puVar7 = puVar7 + -2;
        do {
          uVar8 = uVar2;
          if (uVar2 <= puVar7[1]) {
            uVar8 = (uint)puVar7[1];
          }
          puVar7[1] = (short)uVar8 - sVar4;
          uVar8 = uVar2;
          if (uVar2 <= *puVar7) {
            uVar8 = (uint)*puVar7;
          }
          *puVar7 = (short)uVar8 - sVar4;
          uVar8 = uVar2;
          if (uVar2 <= puVar7[-1]) {
            uVar8 = (uint)puVar7[-1];
          }
          puVar7[-1] = (short)uVar8 - sVar4;
          uVar8 = uVar2;
          if (uVar2 <= puVar7[-2]) {
            uVar8 = (uint)puVar7[-2];
          }
          puVar7[-2] = (short)uVar8 - sVar4;
          uVar8 = (int)uVar6 - 4;
          uVar6 = (ulong)uVar8;
          puVar7 = puVar7 + -4;
        } while (uVar8 != 0);
      }
      uVar14 = uVar14 + uVar2;
    }
    plVar15 = (long *)*param_1;
    uVar9 = *(uint *)(plVar15 + 1);
    if (uVar9 == 0) {
      return;
    }
    uVar8 = *(uint *)((long)param_1 + 0xa4);
    if (uVar9 <= uVar14) {
      uVar14 = uVar9;
    }
    if (uVar14 != 0) {
      lVar10 = param_1[10];
      uVar3 = *(uint *)((long)param_1 + 0x9c);
      *(uint *)(plVar15 + 1) = uVar9 - uVar14;
      if (*(int *)(plVar15[7] + 0x2c) == 1) {
        lVar5 = FUN_0068ef30(plVar15[0xc],*plVar15,uVar14);
LAB_0068eb9c:
        plVar15[0xc] = lVar5;
      }
      else if (*(int *)(plVar15[7] + 0x2c) == 2) {
        lVar5 = FUN_0068f300(plVar15[0xc],*plVar15,uVar14);
        goto LAB_0068eb9c;
      }
      uVar6 = (ulong)uVar14;
      memcpy((void *)(lVar10 + (ulong)uVar3 + (ulong)uVar8),(void *)*plVar15,uVar6);
      *plVar15 = *plVar15 + uVar6;
      plVar15[2] = plVar15[2] + uVar6;
      uVar8 = *(uint *)((long)param_1 + 0xa4);
    }
    uVar8 = uVar8 + uVar14;
    *(uint *)((long)param_1 + 0xa4) = uVar8;
    if (2 < uVar8) {
      uVar9 = (uint)*(byte *)(param_1[10] + (ulong)*(uint *)((long)param_1 + 0x9c));
      *(uint *)(param_1 + 0xe) = uVar9;
      *(uint *)(param_1 + 0xe) =
           (uVar9 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) ^
           (uint)*(byte *)(param_1[10] + (ulong)(*(uint *)((long)param_1 + 0x9c) + 1))) &
           *(uint *)((long)param_1 + 0x7c);
      if (0x105 < uVar8) {
LAB_0068ec20:
        uVar6 = param_1[0x2e5];
        uVar12 = param_1[0xb];
        uVar13 = uVar12 - uVar6;
        if (uVar6 <= uVar12 && uVar13 != 0) {
          uVar1 = (ulong)*(uint *)((long)param_1 + 0x9c) + (ulong)uVar8;
          if (uVar6 < uVar1) {
            __n = uVar12 - uVar1;
            if (0x101 < __n) {
              __n = 0x102;
            }
                    /* WARNING: Subroutine does not return */
            memset((void *)(param_1[10] + uVar1),0,__n);
          }
          uVar12 = (uVar1 + 0x102) - uVar6;
          if (uVar6 <= uVar1 + 0x102 && uVar12 != 0) {
            if (uVar12 <= uVar13) {
              uVar13 = uVar12;
            }
                    /* WARNING: Subroutine does not return */
            memset((void *)(param_1[10] + uVar6),0,uVar13 & 0xffffffff);
          }
        }
        return;
      }
    }
    if (*(int *)(*param_1 + 8) == 0) goto LAB_0068ec20;
    uVar9 = *(uint *)((long)param_1 + 0x44);
  } while( true );
}


