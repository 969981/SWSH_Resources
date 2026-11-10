/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006446c0; name: FUN_006446c0
 */


undefined8
FUN_006446c0(float param_1,long param_2,long param_3,float *param_4,uint param_5,undefined4 *param_6
            )

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_10a8 [1026];
  
  if (param_3 == 0) {
LAB_00644b68:
    uVar8 = 1;
  }
  else {
    if (0 < *(int *)(param_2 + 0x28)) {
      if ((param_5 >> 0xd & 1) == 0) {
        FUN_005c4dc0();
      }
      else {
        FUN_005c4e40(param_3,local_10a8,0x400);
      }
      lVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0xa0))();
      iVar1 = *(int *)(param_2 + 0x80);
      lVar11 = (long)iVar1;
      if (iVar1 < *(int *)(param_2 + 0x98)) {
        pfVar12 = (float *)(*(long *)(param_2 + 0xb0) + lVar11 * 0x14);
        iVar14 = *(int *)(lVar4 + 8);
        iVar15 = *(int *)(lVar4 + 0xc);
        fVar20 = *param_4;
        fVar17 = param_4[1];
        fVar16 = param_4[2];
        fVar18 = param_4[3];
        pfVar12[4] = 0.0;
        pfVar12[0] = 0.0;
        pfVar12[1] = 0.0;
        pfVar12[2] = 0.0;
        pfVar12[3] = 0.0;
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        if (pfVar12 != (float *)0x0) {
          fVar17 = fVar17 - fVar20;
          fVar18 = fVar18 - fVar16;
          fVar16 = fVar16 + (float)iVar14;
          fVar22 = 0.0;
          fVar23 = 0.0;
          fVar21 = 0.0;
          fVar19 = (float)(int)(((float)iVar14 - (float)iVar15) * param_1);
          bVar2 = false;
          lVar4 = 0;
          iVar14 = local_10a8[0];
          fVar9 = 0.0;
          do {
            while( true ) {
              while (iVar15 = (int)lVar4, iVar14 == 10) {
                fVar13 = fVar9;
                if ((param_5 >> 5 & 1) == 0) {
                  if (0.0 < fVar23) {
                    *pfVar12 = fVar23;
                    pfVar12[1] = fVar19;
                    pfVar12[2] = fVar20;
                    pfVar12[3] = fVar16 + fVar22;
                    if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) goto LAB_00644a48;
                    pfVar12 = (float *)(*(long *)(param_2 + 0xb0) +
                                       (long)*(int *)(param_2 + 0x80) * 0x14);
                    pfVar12[4] = 0.0;
                    pfVar12[0] = 0.0;
                    pfVar12[1] = 0.0;
                    pfVar12[2] = 0.0;
                    pfVar12[3] = 0.0;
                    bVar2 = false;
                    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
                    if (pfVar12 == (float *)0x0) {
                      return 0;
                    }
                  }
                  fVar22 = fVar19 + fVar22;
                  fVar21 = fVar19 + fVar21;
                  fVar23 = 0.0;
                  fVar9 = 0.0;
                  fVar13 = 0.0;
                  if (fVar18 <= fVar19 + fVar22) goto LAB_00644a54;
                }
                fVar9 = fVar13;
                lVar4 = (long)iVar15 + 1;
                iVar14 = local_10a8[lVar4];
              }
              if (iVar14 == 0) goto LAB_00644a54;
              plVar10 = *(long **)(param_2 + 0x20);
              if (plVar10 == (long *)0x0) goto LAB_00644a48;
              plVar5 = (long *)(**(code **)(*plVar10 + 0x28))(plVar10);
              iVar3 = (**(code **)(*plVar5 + 0x70))();
              if ((iVar3 != 8) || (lVar6 = FUN_005ffc90(plVar10,iVar14), lVar6 == 0))
              goto LAB_00644a48;
              if ((param_5 >> 5 & 1) != 0) break;
              fVar13 = fVar9;
              if (fVar17 < fVar23 + (float)*(int *)(lVar6 + 0x58)) {
                if (0.0 < fVar23) {
                  *pfVar12 = fVar23;
                  pfVar12[1] = fVar19;
                  pfVar12[2] = fVar20;
                  pfVar12[3] = fVar16 + fVar22;
                  if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) goto LAB_00644a48;
                  pfVar12 = (float *)(*(long *)(param_2 + 0xb0) +
                                     (long)*(int *)(param_2 + 0x80) * 0x14);
                  pfVar12[4] = 0.0;
                  pfVar12[0] = 0.0;
                  pfVar12[1] = 0.0;
                  pfVar12[2] = 0.0;
                  pfVar12[3] = 0.0;
                  bVar2 = false;
                  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
                  if (pfVar12 == (float *)0x0) {
                    return 0;
                  }
                }
                fVar22 = fVar19 + fVar22;
                fVar21 = fVar19 + fVar21;
                fVar23 = 0.0;
                fVar13 = 0.0;
                fVar9 = 0.0;
                if (fVar18 <= fVar19 + fVar22) goto LAB_00644a54;
              }
              fVar9 = fVar13;
              if (0 < *(int *)(lVar6 + 0x68)) goto LAB_00644980;
LAB_006448c4:
              if (0 < *(int *)(lVar6 + 0x6c)) goto LAB_00644980;
              lVar4 = (long)iVar15 + 1;
              iVar14 = local_10a8[lVar4];
              if (iVar14 == 0) {
LAB_00644ba4:
                if (!bVar2) goto LAB_00644a74;
                goto LAB_00644a58;
              }
              fVar23 = fVar23 + (float)*(int *)(lVar6 + 0x58);
              fVar9 = fVar23;
            }
            if (*(int *)(lVar6 + 0x68) < 1) goto LAB_006448c4;
LAB_00644980:
            if (*(int *)(param_2 + 0x40) <= *(int *)(param_2 + 0x2c)) goto LAB_00644ba4;
            puVar7 = (undefined8 *)
                     (*(long *)(param_2 + 0x58) + (long)*(int *)(param_2 + 0x2c) * 0x38);
            *puVar7 = pfVar12;
            puVar7[1] = lVar6;
            *(undefined4 *)(puVar7 + 2) = *param_6;
            bVar2 = true;
            *(float *)((long)puVar7 + 0x14) = fVar23 + (float)*(int *)(lVar6 + 0x60);
            *(float *)(puVar7 + 3) = (float)-*(int *)(lVar6 + 100);
            *(float *)((long)puVar7 + 0x1c) = (float)*(int *)(lVar6 + 0x90);
            *(float *)(puVar7 + 4) = (float)*(int *)(lVar6 + 0x94);
            uVar8 = *(undefined8 *)(lVar6 + 0x80);
            *(undefined8 *)((long)puVar7 + 0x2c) = *(undefined8 *)(lVar6 + 0x88);
            *(undefined8 *)((long)puVar7 + 0x24) = uVar8;
            *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
            fVar23 = fVar23 + (float)*(int *)(lVar6 + 0x58);
            lVar4 = (long)iVar15 + 1;
            iVar15 = local_10a8[lVar4];
            if (iVar15 != 0) {
              iVar14 = iVar15;
            }
            iVar3 = 3;
            if (iVar15 != 0) {
              iVar3 = 0;
            }
            fVar9 = fVar23;
          } while ((iVar3 == 0) || (iVar3 == 2));
          if (iVar3 != 3) {
            return 0;
          }
LAB_00644a54:
          if (bVar2) {
LAB_00644a58:
            if (pfVar12 != (float *)0x0) {
              pfVar12[1] = fVar19;
              pfVar12[2] = fVar20;
              fVar21 = fVar19 + fVar21;
              *pfVar12 = fVar9;
              pfVar12[3] = fVar16 + fVar22;
            }
          }
LAB_00644a74:
          fVar16 = 0.0;
          if ((param_5 & 8) != 0) {
            fVar16 = fVar18 - fVar21;
          }
          if ((param_5 & 4) != 0) {
            fVar16 = fVar18 * 0.5 - fVar21 * 0.5;
          }
          if (iVar1 < *(int *)(param_2 + 0x80)) {
            if ((param_5 & 1) == 0) {
              lVar4 = lVar11 * 0x14;
              if ((param_5 >> 1 & 1) == 0) {
                do {
                  lVar6 = *(long *)(param_2 + 0xb0) + lVar4;
                  lVar4 = lVar4 + 0x14;
                  *(float *)(lVar6 + 8) = fVar20;
                  *(float *)(lVar6 + 0xc) = fVar16 + *(float *)(lVar6 + 0xc);
                  lVar11 = lVar11 + 1;
                } while (lVar11 < *(int *)(param_2 + 0x80));
                return 1;
              }
              do {
                pfVar12 = (float *)(*(long *)(param_2 + 0xb0) + lVar4);
                lVar4 = lVar4 + 0x14;
                pfVar12[2] = fVar20 + (fVar17 - *pfVar12);
                pfVar12[3] = fVar16 + pfVar12[3];
                lVar11 = lVar11 + 1;
              } while (lVar11 < *(int *)(param_2 + 0x80));
              return 1;
            }
            lVar4 = lVar11 * 0x14;
            do {
              pfVar12 = (float *)(*(long *)(param_2 + 0xb0) + lVar4);
              lVar4 = lVar4 + 0x14;
              pfVar12[2] = fVar20 + (fVar17 - *pfVar12) * 0.5;
              pfVar12[3] = fVar16 + pfVar12[3];
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(param_2 + 0x80));
          }
          goto LAB_00644b68;
        }
      }
    }
LAB_00644a48:
    uVar8 = 0;
  }
  return uVar8;
}


