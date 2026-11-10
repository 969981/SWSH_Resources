/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00575e30; name: FUN_00575e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00575e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,ulong param_10,float *param_11,undefined4 *param_12,long param_13,int param_14,
            undefined4 param_15)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_2a8 [130];
  
  uVar4 = (uint)param_10;
  uVar10 = uVar4 - 1;
  if (uVar10 < 0x20) {
    uVar15 = param_10 & 0xffffffff;
    if (((int)uVar4 < 0x15) ||
       (*(int *)(param_9 + (long)(int)uVar10 * 0x58 + (long)param_14 * 4 + 0x148) != 0)) {
      uVar3 = uVar15;
      puVar8 = local_2a8 + 2;
      do {
        uVar1 = *param_12;
        puVar8[-2] = uVar1;
        puVar8[-1] = uVar1;
        *puVar8 = uVar1;
        puVar8[1] = uVar1;
        uVar3 = uVar3 - 1;
        puVar8 = puVar8 + 4;
        param_12 = param_12 + 1;
      } while (uVar3 != 0);
      uVar2 = FUN_00575a10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           uVar15,param_11,local_2a8,param_13,param_14,param_15);
      return uVar2;
    }
    uVar3 = FUN_00542d00(*(undefined8 *)(param_9 + 0x20));
    if ((uVar3 & 1) == 0) {
      if (param_14 == 0x15) {
        return 0xfffffffc;
      }
      piVar6 = (int *)(param_9 + (long)param_14 * 4 + (long)(int)(uVar4 + 1) * 0x58 + 0xb98);
      lVar9 = (long)(int)(uVar4 + 1);
      do {
        iVar11 = *piVar6;
        lVar16 = lVar9 + -1;
        if (lVar9 < 2) break;
        piVar6 = piVar6 + -0x16;
        lVar9 = lVar16;
      } while (iVar11 == 0);
    }
    else {
      if (param_14 == 0x15) {
        return 0xfffffffc;
      }
      piVar6 = (int *)(param_9 + (long)(int)uVar10 * 0x58 + (long)param_14 * 4 + 0xc48);
      lVar9 = (long)(int)uVar10;
      do {
        iVar11 = *piVar6;
        lVar16 = lVar9 + 1;
        if (0x1e < lVar9) break;
        piVar6 = piVar6 + 0x16;
        lVar9 = lVar16;
      } while (iVar11 == 0);
    }
    if (iVar11 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      uVar5 = uVar4 - 8;
      uVar10 = uVar4;
      if (7 < (int)uVar4) {
        uVar10 = 8;
      }
      if (uVar5 == 0 || (int)uVar4 < 8) {
        uVar5 = 0;
      }
      iVar7 = (int)lVar16;
      iVar11 = iVar7;
      if (7 < iVar7) {
        iVar11 = 8;
      }
      if (0 < (int)uVar4) {
        _DAT_02760c18 = *(undefined8 *)param_11;
        _DAT_02760c20 = *(undefined8 *)(param_11 + 2);
        if (1 < (int)uVar10) {
          DAT_02760c28 = *(undefined8 *)(param_11 + 4);
          DAT_02760c30 = *(undefined8 *)(param_11 + 6);
          if (uVar10 != 2) {
            _DAT_02760c38 = *(undefined8 *)(param_11 + 8);
            _DAT_02760c40 = *(undefined8 *)(param_11 + 10);
            if (3 < (int)uVar10) {
              unique0x00048500 = *(undefined8 *)(param_11 + 0xc);
              unique0x00048800 = *(undefined8 *)(param_11 + 0xe);
              if (uVar10 != 4) {
                unique0x00048500 = *(undefined8 *)(param_11 + 0x10);
                unique0x00048800 = *(undefined8 *)(param_11 + 0x12);
                if (5 < (int)uVar10) {
                  unique0x00048500 = *(undefined8 *)(param_11 + 0x14);
                  unique0x00048800 = *(undefined8 *)(param_11 + 0x16);
                  if (uVar10 != 6) {
                    unique0x00048500 = *(undefined8 *)(param_11 + 0x18);
                    unique0x00048800 = *(undefined8 *)(param_11 + 0x1a);
                    if (7 < (int)uVar10) {
                      unique0x00048500 = *(undefined8 *)(param_11 + 0x1c);
                      unique0x00048800 = *(undefined8 *)(param_11 + 0x1e);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((int)uVar10 < iVar11) {
        uVar5 = 0xfffffff7;
        if (-9 < (int)~uVar4) {
          uVar5 = ~uVar4;
        }
        if (7 < iVar7) {
          iVar7 = 8;
        }
                    /* WARNING: Subroutine does not return */
        memset((void *)((long)(int)(uVar10 + 1) * 0x10 + 0x2760c08),0,
               (ulong)(uVar5 + iVar7) * 0x10 + 0x10);
      }
      uVar10 = iVar7 - 8U & ((int)(iVar7 - 8U) >> 0x1f ^ 0xffffffffU);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,iVar11);
      if (8 < (int)uVar4) {
        uVar3 = 0;
        pfVar13 = (float *)&DAT_02760c24;
        pfVar12 = param_11 + 0x23;
        do {
          fVar17 = pfVar12[-2];
          fVar21 = pfVar12[-1];
          fVar19 = param_11[1];
          fVar18 = param_11[2];
          fVar20 = param_11[3];
          fVar22 = *pfVar12;
          pfVar13[-3] = pfVar12[-3] - *param_11;
          pfVar13[-2] = fVar17 - fVar19;
          uVar3 = uVar3 + 1;
          pfVar13[-1] = fVar21 - fVar18;
          *pfVar13 = fVar22 - fVar20;
          pfVar13 = pfVar13 + 4;
          pfVar12 = pfVar12 + 4;
        } while (uVar3 < uVar5);
      }
      if ((int)uVar5 < (int)uVar10) {
        uVar3 = (ulong)uVar5;
        pfVar13 = (float *)(&DAT_02760c24 + (ulong)uVar5 * 4);
        do {
          fVar17 = param_11[1];
          fVar18 = param_11[2];
          fVar19 = param_11[3];
          uVar3 = uVar3 + 1;
          pfVar13[-3] = -*param_11;
          pfVar13[-2] = -fVar17;
          pfVar13[-1] = -fVar18;
          *pfVar13 = -fVar19;
          pfVar13 = pfVar13 + 4;
        } while (uVar3 < uVar10);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,uVar10);
      if (0 < (int)uVar4) {
        if (uVar4 == 1) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar8 = param_12 + 1;
          puVar14 = &DAT_02760a1c;
          do {
            puVar14[-1] = puVar8[-1];
            lVar9 = lVar9 + 2;
            *puVar14 = *puVar8;
            puVar8 = puVar8 + 2;
            puVar14 = puVar14 + 2;
          } while (uVar15 - (param_10 & 1) != lVar9);
        }
        if ((param_10 & 1) != 0) {
          (&DAT_02760a18)[lVar9] = param_12[lVar9];
        }
      }
      if ((int)uVar4 < iVar7) {
                    /* WARNING: Subroutine does not return */
        memset(&DAT_02760a18 + (int)uVar4,0,(ulong)(iVar7 + ~uVar4) * 4 + 4);
      }
      iVar11 = iVar7 + 6;
      if (-1 < iVar7 + 3) {
        iVar11 = iVar7 + 3;
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,
                 iVar11 >> 2);
      if (param_13 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_13);
      }
      uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_15);
      return uVar2;
    }
  }
  return 0xfffffffc;
}


