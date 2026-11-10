/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004678f0; name: FUN_004678f0
 */


void FUN_004678f0(float param_1,float param_2,long param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  undefined4 local_240 [2];
  long local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined1 local_224;
  undefined1 uStack_21f;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_1c4;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_b0;
  undefined1 local_a8;
  long local_a0;
  undefined1 local_98;
  long local_90;
  float local_88;
  undefined1 local_80;
  
  if (*(int *)(param_3 + 0x20) != 0) {
    local_98 = *param_4 == 0;
    lVar11 = *(long *)(param_3 + 0x18);
    local_a0 = param_3;
    local_88 = param_2;
    do {
      lVar7 = *(long *)(lVar11 + 0x10);
      if (lVar7 != 0) {
        lVar9 = *(long *)(param_3 + 0x30);
        if (*(char *)(lVar9 + 0xf0) != '\0') {
          fVar13 = *(float *)(lVar11 + 0x28);
          if (fVar13 <= param_1) {
            bVar5 = *(float *)(lVar11 + 0x2c) < param_1;
            if (fVar13 <= param_2) goto LAB_004679c8;
LAB_00467a00:
            if (!bVar5) {
              bVar4 = true;
              plVar12 = *(long **)(lVar9 + 0xe8);
              if (plVar12 != (long *)0x0) goto LAB_00467a20;
            }
          }
          else {
            bVar5 = true;
            if (param_2 < fVar13) goto LAB_00467a00;
LAB_004679c8:
            bVar4 = *(float *)(lVar11 + 0x2c) < param_2;
            if ((!(bool)(bVar5 ^ bVar4)) ||
               (plVar12 = *(long **)(lVar9 + 0xe8), plVar12 == (long *)0x0)) goto LAB_00467df4;
LAB_00467a20:
            do {
              if ((((((*param_4 == 0) || (plVar12[1] == *param_4)) &&
                    (((int)param_4[1] == 0 || ((int)plVar12[2] == (int)param_4[1])))) &&
                   (((int)param_4[2] == 0 || ((int)plVar12[3] == (int)param_4[2])))) &&
                  (((char)param_4[3] == -1 || ((char)plVar12[4] == (char)param_4[3])))) &&
                 (((((char)param_4[4] == -1 || ((char)plVar12[5] == (char)param_4[4])) &&
                   ((param_4[5] == 0 || (plVar12[6] == param_4[5])))) &&
                  (((param_5 == (undefined8 *)0x0 ||
                    (uVar6 = (**(code **)*param_5)(param_5), (uVar6 & 1) == 0)) &&
                   (iVar8 = (int)plVar12[0xc] + -1, -1 < iVar8)))))) {
                lVar7 = plVar12[0xb];
                iVar10 = 0;
                do {
                  while( true ) {
                    iVar3 = iVar8 - iVar10;
                    if (iVar3 < 0) {
                      iVar3 = iVar3 + 1;
                    }
                    uVar1 = iVar10 + (iVar3 >> 1);
                    lVar9 = (long)(int)uVar1;
                    uVar2 = *(uint *)(lVar7 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                              (ulong)uVar1 << 3));
                    if (*(uint *)(lVar11 + 8) < uVar2) break;
                    if (*(uint *)(lVar11 + 8) <= uVar2) {
                      if (lVar7 + lVar9 * 8 != 0) {
                        if (!bVar4 && bVar5) {
                          lVar7 = lVar7 + lVar9 * 8;
                          iVar8 = *(int *)(lVar7 + 4) + -1;
                          *(int *)(lVar7 + 4) = iVar8;
                          if (iVar8 == 0) {
                            local_218 = 0;
                            uStack_210 = 0;
                            uStack_21f = 0;
                            local_1c4 = 0;
                            local_1a8 = 0;
                            local_1b0 = 0;
                            local_1a7 = 0xff;
                            local_1a0 = 0;
                            local_a8 = 0;
                            local_e8 = 0;
                            uStack_e0 = 0;
                            local_198 = 0;
                            local_110 = 0;
                            uStack_108 = 0;
                            local_194 = 0x3f800000;
                            local_180 = 0;
                            local_190 = 0;
                            uStack_188 = 0;
                            local_178 = 0;
                            local_b0 = 0x400000000;
                    /* WARNING: Subroutine does not return */
                            memset(auStack_170,0,0x5c);
                          }
                        }
                        else if ((!bVar5 && bVar4) &&
                                (lVar7 = lVar7 + lVar9 * 8, iVar8 = *(int *)(lVar7 + 4),
                                *(int *)(lVar7 + 4) = iVar8 + 1, iVar8 == 0)) {
                          local_224 = 0;
                          local_218 = 0;
                          local_240[0] = 0;
                          local_238 = plVar12[1];
                          local_230 = (undefined4)plVar12[2];
                          local_22c = 0x400000000;
                          uStack_21f = 0;
                          (**(code **)(**(long **)(lVar11 + 0x10) + 0x98))
                                    (*(long **)(lVar11 + 0x10),local_240);
                          FUN_004399e0(*(undefined8 *)PTR_DAT_02712de0,
                                       *(undefined8 *)(lVar11 + 0x10),plVar12[1],(int)plVar12[2]);
                          plVar12 = (long *)*plVar12;
                          goto joined_r0x00467bb0;
                        }
                      }
                      goto LAB_00467de8;
                    }
                    iVar10 = uVar1 + 1;
                    if (iVar8 < iVar10) goto LAB_00467de8;
                  }
                  iVar8 = uVar1 - 1;
                } while (iVar10 <= iVar8);
              }
LAB_00467de8:
              plVar12 = (long *)*plVar12;
joined_r0x00467bb0:
            } while (plVar12 != (long *)0x0);
            lVar7 = *(long *)(lVar11 + 0x10);
          }
        }
LAB_00467df4:
        if ((*(long *)(lVar7 + 0x70) != 0) && (0 < *(short *)(*(long *)(lVar7 + 0x70) + 0x90))) {
          local_90 = lVar11 + 0x18;
          local_80 = 0;
          (**(code **)(**(long **)(lVar11 + 0x10) + 0xf0))
                    (*(long **)(lVar11 + 0x10),&LAB_00467e70,param_4,&local_a0);
        }
      }
      lVar11 = lVar11 + 0x30;
    } while (lVar11 != *(long *)(param_3 + 0x18) + (ulong)*(uint *)(param_3 + 0x20) * 0x30);
  }
  return;
}


