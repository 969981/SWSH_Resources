/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00515cb0; name: FUN_00515cb0
 */


void FUN_00515cb0(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pOut","../include\\PPFX/ppfxTypes.h",0x4c73,"MATRIXT44_MatrixMultiply");
  }
  if (param_2 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pM1","../include\\PPFX/ppfxTypes.h",0x4c74,"MATRIXT44_MatrixMultiply");
  }
  if (param_3 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pM2","../include\\PPFX/ppfxTypes.h",0x4c75,"MATRIXT44_MatrixMultiply");
  }
  fVar1 = *param_2;
  fVar5 = param_2[1];
  fVar9 = *param_3;
  fVar11 = param_3[4];
  fVar13 = param_3[8];
  fVar21 = param_2[2];
  fVar25 = param_2[3];
  fVar15 = param_3[0xc];
  fVar17 = param_3[1];
  fVar19 = param_3[5];
  fVar29 = param_3[9];
  fVar31 = param_3[0xd];
  fVar33 = param_3[2];
  fVar35 = param_3[6];
  fVar37 = param_3[10];
  fVar39 = param_3[0xe];
  fVar41 = param_3[3];
  fVar43 = param_3[7];
  fVar45 = param_3[0xb];
  fVar47 = param_3[0xf];
  fVar2 = param_2[4];
  fVar6 = param_2[5];
  fVar22 = param_2[6];
  fVar26 = param_2[7];
  fVar3 = param_2[8];
  fVar7 = param_2[9];
  fVar10 = *param_3;
  fVar12 = param_3[4];
  fVar14 = param_3[8];
  fVar23 = param_2[10];
  fVar27 = param_2[0xb];
  fVar16 = param_3[0xc];
  fVar18 = param_3[1];
  fVar20 = param_3[5];
  fVar30 = param_3[9];
  fVar32 = param_3[0xd];
  fVar34 = param_3[2];
  fVar36 = param_3[6];
  fVar38 = param_3[10];
  fVar40 = param_3[0xe];
  fVar42 = param_3[3];
  fVar44 = param_3[7];
  fVar46 = param_3[0xb];
  fVar48 = param_3[0xf];
  fVar4 = param_2[0xc];
  fVar8 = param_2[0xd];
  fVar24 = param_2[0xe];
  fVar28 = param_2[0xf];
  param_1[2] = CONCAT44(fVar2 * fVar17 + fVar6 * fVar19 + fVar22 * fVar29 + fVar26 * fVar31,
                        fVar2 * fVar9 + fVar6 * fVar11 + fVar22 * fVar13 + fVar26 * fVar15);
  param_1[3] = CONCAT44(fVar2 * fVar41 + fVar6 * fVar43 + fVar22 * fVar45 + fVar26 * fVar47,
                        fVar2 * fVar33 + fVar6 * fVar35 + fVar22 * fVar37 + fVar26 * fVar39);
  *param_1 = CONCAT44(fVar1 * fVar17 + fVar5 * fVar19 + fVar21 * fVar29 + fVar25 * fVar31,
                      fVar1 * fVar9 + fVar5 * fVar11 + fVar21 * fVar13 + fVar25 * fVar15);
  param_1[1] = CONCAT44(fVar1 * fVar41 + fVar5 * fVar43 + fVar21 * fVar45 + fVar25 * fVar47,
                        fVar1 * fVar33 + fVar5 * fVar35 + fVar21 * fVar37 + fVar25 * fVar39);
  param_1[6] = CONCAT44(fVar4 * fVar18 + fVar8 * fVar20 + fVar24 * fVar30 + fVar28 * fVar32,
                        fVar4 * fVar10 + fVar8 * fVar12 + fVar24 * fVar14 + fVar28 * fVar16);
  param_1[7] = CONCAT44(fVar4 * fVar42 + fVar8 * fVar44 + fVar24 * fVar46 + fVar28 * fVar48,
                        fVar4 * fVar34 + fVar8 * fVar36 + fVar24 * fVar38 + fVar28 * fVar40);
  param_1[4] = CONCAT44(fVar3 * fVar18 + fVar7 * fVar20 + fVar23 * fVar30 + fVar27 * fVar32,
                        fVar3 * fVar10 + fVar7 * fVar12 + fVar23 * fVar14 + fVar27 * fVar16);
  param_1[5] = CONCAT44(fVar3 * fVar42 + fVar7 * fVar44 + fVar23 * fVar46 + fVar27 * fVar48,
                        fVar3 * fVar34 + fVar7 * fVar36 + fVar23 * fVar38 + fVar27 * fVar40);
  return;
}


