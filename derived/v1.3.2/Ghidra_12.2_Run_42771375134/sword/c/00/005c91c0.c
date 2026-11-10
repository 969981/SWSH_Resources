/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c91c0; name: FUN_005c91c0
 */


float FUN_005c91c0(float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = (int)param_1;
  uVar1 = *(int *)PTR_DAT_02713ef8 + (int)param_2;
  param_2 = param_2 - (float)(int)param_2;
  param_1 = param_1 - (float)iVar2;
  fVar4 = param_1 * *(float *)(PTR_DAT_02713f00 +
                              (long)*(int *)(PTR_DAT_02713ef8 +
                                            (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                            (ulong)(uVar1 & 0xff) * 4) + iVar2 &
                                                   0xff) * 4) * 4) +
          param_2 * *(float *)(PTR_DAT_02713f08 +
                              (long)*(int *)(PTR_DAT_02713ef8 +
                                            (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                            (ulong)(uVar1 & 0xff) * 4) + iVar2 &
                                                   0xff) * 4) * 4);
  fVar5 = param_1 * *(float *)(PTR_DAT_02713f00 +
                              (long)*(int *)(PTR_DAT_02713ef8 +
                                            (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                            (ulong)(uVar1 + 1 & 0xff) * 4) + iVar2 &
                                                   0xff) * 4) * 4) +
          (param_2 + -1.0) *
          *(float *)(PTR_DAT_02713f08 +
                    (long)*(int *)(PTR_DAT_02713ef8 +
                                  (ulong)(*(int *)(PTR_DAT_02713ef8 + (ulong)(uVar1 + 1 & 0xff) * 4)
                                          + iVar2 & 0xff) * 4) * 4);
  fVar3 = param_1 * param_1 * param_1 * (param_1 * (param_1 * 6.0 + -15.0) + 10.0);
  fVar4 = fVar4 + fVar3 * (((param_1 + -1.0) *
                            *(float *)(PTR_DAT_02713f00 +
                                      (long)*(int *)(PTR_DAT_02713ef8 +
                                                    (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                                    (ulong)(uVar1 & 0xff) * 4) +
                                                            iVar2 + 1 & 0xff) * 4) * 4) +
                           param_2 * *(float *)(PTR_DAT_02713f08 +
                                               (long)*(int *)(PTR_DAT_02713ef8 +
                                                             (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                                             (ulong)(uVar1 & 0xff) *
                                                                             4) + iVar2 + 1 & 0xff)
                                                             * 4) * 4)) - fVar4);
  return fVar4 + param_2 * param_2 * param_2 * (param_2 * (param_2 * 6.0 + -15.0) + 10.0) *
                 ((fVar5 + fVar3 * (((param_1 + -1.0) *
                                     *(float *)(PTR_DAT_02713f00 +
                                               (long)*(int *)(PTR_DAT_02713ef8 +
                                                             (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                                             (ulong)(uVar1 + 1 &
                                                                                    0xff) * 4) +
                                                                     iVar2 + 1 & 0xff) * 4) * 4) +
                                    (param_2 + -1.0) *
                                    *(float *)(PTR_DAT_02713f08 +
                                              (long)*(int *)(PTR_DAT_02713ef8 +
                                                            (ulong)(*(int *)(PTR_DAT_02713ef8 +
                                                                            (ulong)(uVar1 + 1 & 0xff
                                                                                   ) * 4) +
                                                                    iVar2 + 1 & 0xff) * 4) * 4)) -
                                   fVar5)) - fVar4);
}


