/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073ea70; name: FUN_0073ea70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073ea70(long param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  uVar4 = _DAT_01d4b400;
  uVar3 = _UNK_01d4ae58;
  uVar2 = _DAT_01d4ae50;
  uVar1 = DAT_01d4a580;
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x634));
  fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x636));
  lVar8 = *(long *)(param_1 + 0x788);
  uVar7 = (ulong)*(uint *)(param_1 + 0x898);
  fVar29 = *param_4 / fVar21;
  fVar18 = fVar29 + (*param_2 + *param_2) / fVar21 + -1.0;
  fVar21 = *param_5 / fVar24;
  fVar19 = ((*param_3 * -2.0) / fVar24 + 1.0) - fVar21;
  *(undefined8 *)(param_1 + 0x6b8) = 0x3f80000000000000;
  *(ulong *)(param_1 + 0x6b0) = CONCAT44(fVar19 + 0.0,fVar18 + 0.0);
  bVar10 = SUB41(fVar29,0);
  bVar11 = (byte)((uint)fVar29 >> 8);
  bVar12 = (byte)((uint)fVar29 >> 0x10);
  bVar13 = (byte)((uint)fVar29 >> 0x18);
  fVar29 = (float)CONCAT13(bVar13 & (byte)((ulong)uVar1 >> 0x18),
                           CONCAT12(bVar12 & (byte)((ulong)uVar1 >> 0x10),
                                    CONCAT11(bVar11 & (byte)((ulong)uVar1 >> 8),bVar10 & (byte)uVar1
                                            )));
  bVar14 = SUB41(fVar21,0);
  bVar15 = (byte)((uint)fVar21 >> 8);
  bVar16 = (byte)((uint)fVar21 >> 0x10);
  bVar17 = (byte)((uint)fVar21 >> 0x18);
  fVar22 = (float)CONCAT13(bVar13 & (byte)((ulong)uVar4 >> 0x18),
                           CONCAT12(bVar12 & (byte)((ulong)uVar4 >> 0x10),
                                    CONCAT11(bVar11 & (byte)((ulong)uVar4 >> 8),bVar10 & (byte)uVar4
                                            )));
  fVar21 = (float)CONCAT13(bVar13 & (byte)((ulong)_DAT_01d4b1e0 >> 0x18),
                           CONCAT12(bVar12 & (byte)((ulong)_DAT_01d4b1e0 >> 0x10),
                                    CONCAT11(bVar11 & (byte)((ulong)_DAT_01d4b1e0 >> 8),
                                             bVar10 & (byte)_DAT_01d4b1e0)));
  fVar25 = (float)uVar2;
  fVar26 = (float)((ulong)uVar2 >> 0x20);
  fVar27 = (float)uVar3;
  fVar28 = (float)((ulong)uVar3 >> 0x20);
  fVar20 = (float)(CONCAT17(bVar17 & (byte)((ulong)uVar1 >> 0x38),
                            CONCAT16(bVar16 & (byte)((ulong)uVar1 >> 0x30),
                                     CONCAT15(bVar15 & (byte)((ulong)uVar1 >> 0x28),
                                              CONCAT14(bVar14 & (byte)((ulong)uVar1 >> 0x20),fVar29)
                                             ))) >> 0x20);
  fVar30 = (float)_DAT_01d4b580;
  fVar32 = (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar34 = (float)_UNK_01d4b588;
  fVar36 = (float)((ulong)_UNK_01d4b588 >> 0x20);
  fVar23 = (float)(CONCAT17(bVar17 & (byte)((ulong)uVar4 >> 0x38),
                            CONCAT16(bVar16 & (byte)((ulong)uVar4 >> 0x30),
                                     CONCAT15(bVar15 & (byte)((ulong)uVar4 >> 0x28),
                                              CONCAT14(bVar14 & (byte)((ulong)uVar4 >> 0x20),fVar22)
                                             ))) >> 0x20);
  fVar24 = (float)(CONCAT17(bVar17 & (byte)((ulong)_DAT_01d4b1e0 >> 0x38),
                            CONCAT16(bVar16 & (byte)((ulong)_DAT_01d4b1e0 >> 0x30),
                                     CONCAT15(bVar15 & (byte)((ulong)_DAT_01d4b1e0 >> 0x28),
                                              CONCAT14(bVar14 & (byte)((ulong)_DAT_01d4b1e0 >> 0x20)
                                                       ,fVar21)))) >> 0x20);
  fVar31 = (float)_DAT_01d49dc0;
  fVar33 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
  fVar35 = (float)_UNK_01d49dc8;
  fVar37 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
  *(ulong *)(param_1 + 0x688) =
       CONCAT44(fVar28 * fVar29 + fVar36 * fVar20 + fVar37 * 0.0 + 0.0,
                fVar27 * fVar29 + fVar34 * fVar20 + fVar35 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x680) =
       CONCAT44(fVar26 * fVar29 + fVar32 * fVar20 + fVar33 * 0.0 + fVar19 * 0.0,
                fVar25 * fVar29 + fVar30 * fVar20 + fVar31 * 0.0 + fVar18 * 0.0);
  *(ulong *)(param_1 + 0x698) =
       CONCAT44(fVar28 * fVar22 + fVar36 * fVar23 + fVar37 * 0.0 + 0.0,
                fVar27 * fVar22 + fVar34 * fVar23 + fVar35 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x690) =
       CONCAT44(fVar26 * fVar22 + fVar32 * fVar23 + fVar33 * 0.0 + fVar19 * 0.0,
                fVar25 * fVar22 + fVar30 * fVar23 + fVar31 * 0.0 + fVar18 * 0.0);
  *(ulong *)(param_1 + 0x6a8) =
       CONCAT44(fVar28 * fVar21 + fVar36 * fVar24 + fVar37 * 0.0 + 0.0,
                fVar27 * fVar21 + fVar34 * fVar24 + fVar35 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x6a0) =
       CONCAT44(fVar26 * fVar21 + fVar32 * fVar24 + fVar33 * 0.0 + fVar19 * 0.0,
                fVar25 * fVar21 + fVar30 * fVar24 + fVar31 * 0.0 + fVar18 * 0.0);
  if ((ulong)((*(long *)(param_1 + 0x790) - lVar8 >> 3) * -0x5555555555555555) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar6 = (undefined4 *)(lVar8 + uVar7 * 0x18);
  *(undefined4 *)(param_1 + 0x610) = *puVar6;
  lVar9 = *(long *)(puVar6 + 2);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x618);
  *(long *)(param_1 + 0x618) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(lVar8 + uVar7 * 0x18 + 0x10);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_1 + 0x620);
  *(long *)(param_1 + 0x620) = lVar8;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  FUN_0073e860(param_1);
  return;
}


