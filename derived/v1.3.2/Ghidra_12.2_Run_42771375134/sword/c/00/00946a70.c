/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946a70; name: FUN_00946a70
 */


void FUN_00946a70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 local_50 [48];
  
  FUN_00943e60(local_50);
  uVar1 = *param_1;
  uVar8 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = param_1[3];
  uVar3 = param_1[4];
  uVar10 = param_1[5];
  uVar4 = param_1[6];
  uVar11 = param_1[7];
  uVar5 = param_1[8];
  uVar12 = param_1[9];
  uVar6 = param_1[10];
  uVar13 = param_1[0xb];
  uVar7 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar15;
  *param_1 = uVar7;
  param_1[1] = uVar14;
  uVar7 = param_2[4];
  uVar14 = param_2[5];
  uVar15 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar15;
  param_1[4] = uVar7;
  param_1[5] = uVar14;
  uVar7 = param_2[8];
  uVar14 = param_2[9];
  uVar15 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar15;
  param_1[8] = uVar7;
  param_1[9] = uVar14;
  param_2[2] = uVar2;
  param_2[3] = uVar9;
  *param_2 = uVar1;
  param_2[1] = uVar8;
  param_2[6] = uVar4;
  param_2[7] = uVar11;
  param_2[4] = uVar3;
  param_2[5] = uVar10;
  param_2[8] = uVar5;
  param_2[9] = uVar12;
  param_2[10] = uVar6;
  param_2[0xb] = uVar13;
  return;
}


