/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014e700; name: FUN_0014e700
 */


void FUN_0014e700(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  
  param_1[6] = param_2;
  param_1[7] = param_3;
  fVar10 = *(float *)(param_2 + 400);
  uVar13 = (undefined1)((uint)fVar10 >> 8);
  uVar15 = (undefined1)((uint)fVar10 >> 0x10);
  uVar17 = (undefined1)((uint)fVar10 >> 0x18);
  fVar11 = fVar10 * fVar10;
  param_1[1] = CONCAT17(uVar17,CONCAT16(uVar15,CONCAT15(uVar13,CONCAT14(SUB41(fVar10,0),fVar10))));
  *param_1 = CONCAT17(uVar17,CONCAT16(uVar15,CONCAT15(uVar13,CONCAT14(SUB41(fVar10,0),fVar10))));
  param_1[3] = CONCAT44(fVar11,fVar11);
  param_1[2] = CONCAT44(fVar11,fVar11);
  uVar1 = *(undefined4 *)(param_2 + 0x194);
  bVar12 = (byte)uVar1;
  bVar14 = (byte)((uint)uVar1 >> 8);
  bVar16 = (byte)((uint)uVar1 >> 0x10);
  bVar18 = (byte)((uint)uVar1 >> 0x18);
  bVar9 = (byte)DAT_02736a20;
  uVar2 = (ulong)DAT_02736a20 >> 8;
  uVar3 = (ulong)DAT_02736a20 >> 0x10;
  uVar4 = (ulong)DAT_02736a20 >> 0x18;
  uVar5 = (ulong)DAT_02736a20 >> 0x20;
  uVar6 = (ulong)DAT_02736a20 >> 0x28;
  uVar7 = (ulong)DAT_02736a20 >> 0x30;
  uVar8 = (ulong)DAT_02736a20 >> 0x38;
  param_1[5] = CONCAT17((byte)((ulong)DAT_02736a28 >> 0x38) & bVar18,
                        CONCAT16((byte)((ulong)DAT_02736a28 >> 0x30) & bVar16,
                                 CONCAT15((byte)((ulong)DAT_02736a28 >> 0x28) & bVar14,
                                          CONCAT14((byte)((ulong)DAT_02736a28 >> 0x20) & bVar12,
                                                   CONCAT13((byte)((ulong)DAT_02736a28 >> 0x18) &
                                                            bVar18,CONCAT12((byte)((ulong)
                                                  DAT_02736a28 >> 0x10) & bVar16,
                                                  CONCAT11((byte)((ulong)DAT_02736a28 >> 8) & bVar14
                                                           ,(byte)DAT_02736a28 & bVar12)))))));
  param_1[4] = CONCAT17((byte)uVar8 & bVar18,
                        CONCAT16((byte)uVar7 & bVar16,
                                 CONCAT15((byte)uVar6 & bVar14,
                                          CONCAT14((byte)uVar5 & bVar12,
                                                   CONCAT13((byte)uVar4 & bVar18,
                                                            CONCAT12((byte)uVar3 & bVar16,
                                                                     CONCAT11((byte)uVar2 & bVar14,
                                                                              bVar9 & bVar12)))))));
  return;
}


