/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002298e0; name: FUN_002298e0
 */


void FUN_002298e0(long *param_1,float *param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  fVar11 = param_2[2];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = (param_2[4] - fVar13) * (param_2[8] - fVar11) -
           (param_2[5] - fVar11) * (param_2[7] - fVar13);
  fVar15 = (param_2[5] - fVar11) * (param_2[6] - fVar12) -
           (param_2[3] - fVar12) * (param_2[8] - fVar11);
  fVar16 = (param_2[3] - fVar12) * (param_2[7] - fVar13) -
           (param_2[4] - fVar13) * (param_2[6] - fVar12);
  fVar10 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
  if (fVar10 <= 0.0) {
    local_60 = 0.0;
    fStack_5c = 0.0;
    local_58 = 0.0;
  }
  else {
    local_58 = sqrtf(fVar10);
    local_58 = 1.0 / local_58;
    local_60 = fVar14 * local_58;
    fStack_5c = fVar15 * local_58;
    local_58 = fVar16 * local_58;
    fVar11 = param_2[2];
    fVar12 = *param_2;
    fVar13 = param_2[1];
  }
  fVar10 = local_60 * fVar12 + fStack_5c * fVar13 + local_58 * fVar11;
  fStack_54 = -fVar10;
  if (0.0 <= (local_60 * *(float *)(param_1 + 0x10e) + fStack_5c * *(float *)((long)param_1 + 0x874)
             + local_58 * *(float *)(param_1 + 0x10f)) - fVar10) {
    fVar10 = (fVar12 + param_2[3] + param_2[6]) * DAT_01d4bd24;
    fVar12 = (fVar13 + param_2[4] + param_2[7]) * DAT_01d4bd24;
    fVar11 = (fVar11 + param_2[5] + param_2[8]) * DAT_01d4bd24;
    uVar5 = FUN_0022a000(fVar10 * *(float *)(param_1 + 0x108) +
                         fVar12 * *(float *)((long)param_1 + 0x84c) +
                         fVar11 * *(float *)(param_1 + 0x10b) + *(float *)((long)param_1 + 0x864),
                         fVar10 * *(float *)((long)param_1 + 0x844) +
                         fVar12 * *(float *)(param_1 + 0x10a) +
                         fVar11 * *(float *)((long)param_1 + 0x85c) + *(float *)(param_1 + 0x10d),
                         fVar10 * *(float *)(param_1 + 0x109) +
                         fVar12 * *(float *)((long)param_1 + 0x854) +
                         fVar11 * *(float *)(param_1 + 0x10c) + *(float *)((long)param_1 + 0x86c),
                         (int)param_1[0x115],*(undefined4 *)((long)param_1 + 0x8ac),param_1[0x111],
                         param_4,param_2,&local_60,param_1[0x113],param_1 + 0x102,param_1 + 0x108,
                         param_1[0x114],&local_70,&local_74,local_78,
                         *(undefined1 *)((long)param_1 + 0x8b1));
    if ((uVar5 & 1) != 0) {
      if (local_78[0] == '\0') {
        lVar6 = *param_1;
        uVar8 = *(uint *)(lVar6 + 0x1110);
        uVar2 = uVar8 + 0x11;
        if ((*(uint *)(lVar6 + 0x1114) & 0x7fffffff) < uVar2) {
          FUN_0022bf00(lVar6,uVar2);
          lVar6 = *param_1;
          uVar8 = *(uint *)(lVar6 + 0x1110);
        }
        puVar1 = (undefined4 *)(*(long *)(lVar6 + 0x1108) + (ulong)uVar8 * 4);
        *(uint *)(lVar6 + 0x1110) = uVar2;
        *puVar1 = param_3;
        puVar1[1] = *param_2;
        puVar1[2] = param_2[1];
        puVar1[3] = param_2[2];
        puVar1[4] = param_2[3];
        puVar1[5] = param_2[4];
        puVar1[6] = param_2[5];
        puVar1[7] = param_2[6];
        puVar1[8] = param_2[7];
        puVar1[9] = param_2[8];
        puVar1[10] = *param_5;
        puVar1[0xb] = param_5[1];
        puVar1[0xc] = param_5[2];
        puVar1[0xd] = local_70;
        puVar1[0xe] = local_6c;
        puVar1[0xf] = local_68;
        puVar1[0x10] = local_74;
      }
      else {
        uVar5 = FUN_0022b5f0(fVar10,fVar12,fVar11,local_74,param_1,&local_60,param_2,&local_70,
                             param_3);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x11a) = 1;
          iVar7 = (int)param_1[0xa1];
          uVar8 = *param_5;
          uVar9 = param_5[1];
          uVar2 = uVar9;
          uVar4 = uVar8;
          if (uVar9 <= uVar8) {
            uVar2 = uVar8;
            uVar4 = uVar9;
          }
          if (iVar7 == 0x80) {
            iVar7 = *(int *)((long)param_1 + 0x80c);
          }
          else {
            uVar9 = uVar2 | uVar4 << 0x10;
            uVar9 = uVar9 + (uVar9 << 0xf ^ 0xffffffff);
            uVar9 = (uVar9 ^ uVar9 >> 10) * 9;
            uVar9 = uVar9 ^ uVar9 >> 6;
            uVar9 = uVar9 + (uVar9 << 0xb ^ 0xffffffff);
            uVar9 = (uVar9 ^ uVar9 >> 0x10) & 0x7f;
            bVar3 = *(byte *)((long)param_1 + (ulong)uVar9 + 0x488);
            if (bVar3 == 0xff) {
              lVar6 = (ulong)uVar9 + 0x488;
            }
            else {
              do {
                uVar5 = (ulong)bVar3;
                if ((*(uint *)(param_1 + uVar5 + 1) == uVar4) &&
                   (*(uint *)((long)param_1 + uVar5 * 8 + 0xc) == uVar2)) goto LAB_00229cd8;
                bVar3 = *(byte *)((long)param_1 + uVar5 + 0x408);
              } while (bVar3 != 0xff);
              lVar6 = uVar5 + 0x408;
            }
            *(char *)((long)param_1 + lVar6) = (char)param_1[0xa1];
            *(undefined1 *)((long)param_1 + (ulong)*(uint *)(param_1 + 0xa1) + 0x408) = 0xff;
            uVar8 = *(uint *)(param_1 + 0xa1);
            *(uint *)(param_1 + 0xa1) = uVar8 + 1;
            param_1[(ulong)uVar8 + 1] = CONCAT44(uVar2,uVar4);
            iVar7 = (int)param_1[0xa1];
            uVar8 = *param_5;
LAB_00229cd8:
            uVar9 = param_5[2];
            uVar2 = uVar9;
            if (uVar9 <= uVar8) {
              uVar2 = uVar8;
              uVar8 = uVar9;
            }
            if (iVar7 != 0x80) {
              uVar4 = uVar2 | uVar8 << 0x10;
              uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
              uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
              uVar4 = uVar4 ^ uVar4 >> 6;
              uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
              uVar4 = (uVar4 ^ uVar4 >> 0x10) & 0x7f;
              bVar3 = *(byte *)((long)param_1 + (ulong)uVar4 + 0x488);
              if (bVar3 == 0xff) {
                lVar6 = (ulong)uVar4 + 0x488;
              }
              else {
                do {
                  uVar5 = (ulong)bVar3;
                  if ((*(uint *)(param_1 + uVar5 + 1) == uVar8) &&
                     (*(uint *)((long)param_1 + uVar5 * 8 + 0xc) == uVar2)) goto LAB_00229da4;
                  bVar3 = *(byte *)((long)param_1 + uVar5 + 0x408);
                } while (bVar3 != 0xff);
                lVar6 = uVar5 + 0x408;
              }
              *(char *)((long)param_1 + lVar6) = (char)iVar7;
              *(undefined1 *)((long)param_1 + (ulong)*(uint *)(param_1 + 0xa1) + 0x408) = 0xff;
              uVar9 = *(uint *)(param_1 + 0xa1);
              *(uint *)(param_1 + 0xa1) = uVar9 + 1;
              param_1[(ulong)uVar9 + 1] = CONCAT44(uVar2,uVar8);
              uVar9 = param_5[2];
              iVar7 = (int)param_1[0xa1];
            }
LAB_00229da4:
            uVar8 = param_5[1];
            uVar2 = uVar9;
            if (uVar9 <= uVar8) {
              uVar2 = uVar8;
              uVar8 = uVar9;
            }
            if (iVar7 != 0x80) {
              uVar9 = uVar2 | uVar8 << 0x10;
              uVar9 = uVar9 + (uVar9 << 0xf ^ 0xffffffff);
              uVar9 = (uVar9 ^ uVar9 >> 10) * 9;
              uVar9 = uVar9 ^ uVar9 >> 6;
              uVar9 = uVar9 + (uVar9 << 0xb ^ 0xffffffff);
              uVar9 = (uVar9 ^ uVar9 >> 0x10) & 0x7f;
              bVar3 = *(byte *)((long)param_1 + (ulong)uVar9 + 0x488);
              if (bVar3 == 0xff) {
                lVar6 = (ulong)uVar9 + 0x488;
              }
              else {
                do {
                  uVar5 = (ulong)bVar3;
                  if ((*(uint *)(param_1 + uVar5 + 1) == uVar8) &&
                     (*(uint *)((long)param_1 + uVar5 * 8 + 0xc) == uVar2)) goto LAB_00229e64;
                  bVar3 = *(byte *)((long)param_1 + uVar5 + 0x408);
                } while (bVar3 != 0xff);
                lVar6 = uVar5 + 0x408;
              }
              *(char *)((long)param_1 + lVar6) = (char)iVar7;
              *(undefined1 *)((long)param_1 + (ulong)*(uint *)(param_1 + 0xa1) + 0x408) = 0xff;
              uVar9 = *(uint *)(param_1 + 0xa1);
              *(uint *)(param_1 + 0xa1) = uVar9 + 1;
              param_1[(ulong)uVar9 + 1] = CONCAT44(uVar2,uVar8);
            }
LAB_00229e64:
            iVar7 = *(int *)((long)param_1 + 0x80c);
          }
          if (iVar7 != 0x80) {
            uVar2 = *param_5;
            bVar3 = *(byte *)((long)param_1 + (ulong)(uVar2 & 0x7f) + 0x78c);
            if (bVar3 == 0xff) {
              lVar6 = (ulong)(uVar2 & 0x7f) + 0x78c;
            }
            else {
              do {
                uVar5 = (ulong)bVar3;
                if (*(uint *)((long)param_1 + uVar5 * 4 + 0x50c) == uVar2) goto LAB_00229ee4;
                bVar3 = *(byte *)((long)param_1 + uVar5 + 0x70c);
              } while (bVar3 != 0xff);
              lVar6 = uVar5 + 0x70c;
            }
            *(char *)((long)param_1 + lVar6) = (char)iVar7;
            *(undefined1 *)((long)param_1 + (ulong)*(uint *)((long)param_1 + 0x80c) + 0x70c) = 0xff;
            uVar8 = *(uint *)((long)param_1 + 0x80c);
            *(uint *)((long)param_1 + 0x80c) = uVar8 + 1;
            *(uint *)((long)param_1 + (ulong)uVar8 * 4 + 0x50c) = uVar2;
            iVar7 = *(int *)((long)param_1 + 0x80c);
LAB_00229ee4:
            if (iVar7 != 0x80) {
              uVar2 = param_5[1];
              bVar3 = *(byte *)((long)param_1 + (ulong)(uVar2 & 0x7f) + 0x78c);
              if (bVar3 == 0xff) {
                lVar6 = (ulong)(uVar2 & 0x7f) + 0x78c;
              }
              else {
                do {
                  uVar5 = (ulong)bVar3;
                  if (*(uint *)((long)param_1 + uVar5 * 4 + 0x50c) == uVar2) goto LAB_00229f60;
                  bVar3 = *(byte *)((long)param_1 + uVar5 + 0x70c);
                } while (bVar3 != 0xff);
                lVar6 = uVar5 + 0x70c;
              }
              *(char *)((long)param_1 + lVar6) = (char)iVar7;
              *(undefined1 *)((long)param_1 + (ulong)*(uint *)((long)param_1 + 0x80c) + 0x70c) =
                   0xff;
              uVar8 = *(uint *)((long)param_1 + 0x80c);
              *(uint *)((long)param_1 + 0x80c) = uVar8 + 1;
              *(uint *)((long)param_1 + (ulong)uVar8 * 4 + 0x50c) = uVar2;
              iVar7 = *(int *)((long)param_1 + 0x80c);
LAB_00229f60:
              if (iVar7 != 0x80) {
                uVar2 = param_5[2];
                bVar3 = *(byte *)((long)param_1 + (ulong)(uVar2 & 0x7f) + 0x78c);
                if (bVar3 == 0xff) {
                  lVar6 = (ulong)(uVar2 & 0x7f) + 0x78c;
                }
                else {
                  do {
                    uVar5 = (ulong)bVar3;
                    if (*(uint *)((long)param_1 + uVar5 * 4 + 0x50c) == uVar2) {
                      return;
                    }
                    bVar3 = *(byte *)((long)param_1 + uVar5 + 0x70c);
                  } while (bVar3 != 0xff);
                  lVar6 = uVar5 + 0x70c;
                }
                *(char *)((long)param_1 + lVar6) = (char)iVar7;
                *(undefined1 *)((long)param_1 + (ulong)*(uint *)((long)param_1 + 0x80c) + 0x70c) =
                     0xff;
                uVar8 = *(uint *)((long)param_1 + 0x80c);
                *(uint *)((long)param_1 + 0x80c) = uVar8 + 1;
                *(uint *)((long)param_1 + (ulong)uVar8 * 4 + 0x50c) = uVar2;
              }
            }
          }
        }
      }
    }
  }
  return;
}


