/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a050; name: FUN_0029a050
 */


uint FUN_0029a050(undefined8 param_1,undefined4 *param_2,float *param_3,int *param_4,
                 undefined8 param_5,undefined8 param_6,ushort *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  ushort local_80 [4];
  ushort local_78 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ushort local_30 [4];
  ushort local_28 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  uVar3 = 0;
  switch(*param_2) {
  case 0:
    uStack_1c = param_2[1];
    local_20 = 2;
    local_18 = 0;
    local_70 = *(undefined8 *)(param_3 + 4);
    local_60 = *(undefined8 *)(param_3 + 5);
    local_68 = CONCAT44(param_3[4],param_3[6]);
    local_58 = CONCAT44(local_58._4_4_,uStack_1c);
    local_28[0] = *param_7;
    puVar1 = (undefined8 *)(PTR_PTR_02711f48 + (long)*param_4 * 8);
    if ((local_28[0] & 0x100) != 0) {
      puVar1 = (undefined8 *)((long)(PTR_PTR_02711f48 + (long)*param_4 * 8) + 0x38);
    }
                    /* try { // try from 0029a0e4 to 0029a107 has its CatchHandler @ 0029a370 */
    uVar3 = (*(code *)*puVar1)(param_4,param_5,&local_20,param_3,&local_70,param_1,param_6,local_28)
    ;
    break;
  case 2:
    fVar9 = param_3[3];
    fVar4 = *param_3;
    fVar5 = fVar4 + fVar4;
    fVar6 = fVar9 + fVar9;
    fVar8 = (float)param_2[2];
    fVar4 = fVar8 * (fVar4 * fVar5 + fVar9 * fVar6 + -1.0);
    fVar9 = fVar8 * (param_3[2] * fVar6 + fVar5 * param_3[1]);
    fVar8 = fVar8 * (fVar5 * param_3[2] - fVar6 * param_3[1]);
    local_70 = CONCAT44(param_3[5] + fVar9,param_3[4] + fVar4);
    local_68 = CONCAT44(param_3[4] - fVar4,fVar8 + param_3[6]);
    local_60 = CONCAT44(param_3[6] - fVar8,param_3[5] - fVar9);
    local_58 = CONCAT44(local_58._4_4_,param_2[1]);
    local_30[0] = *param_7;
    puVar1 = (undefined8 *)(PTR_PTR_02711f48 + (long)*param_4 * 8);
    if ((local_30[0] & 0x100) != 0) {
      puVar1 = (undefined8 *)((long)(PTR_PTR_02711f48 + (long)*param_4 * 8) + 0x38);
    }
                    /* try { // try from 0029a1b4 to 0029a1d7 has its CatchHandler @ 0029a36c */
    uVar3 = (*(code *)*puVar1)(param_4,param_5,param_2,param_3,&local_70,param_1,param_6,local_30);
    break;
  case 3:
    fVar4 = (float)*(undefined8 *)param_3;
    fVar10 = fVar4 + fVar4;
    fVar8 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar12 = fVar8 + fVar8;
    fVar9 = (float)*(undefined8 *)(param_3 + 2);
    fVar14 = fVar9 + fVar9;
    fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    fVar5 = fVar8 * fVar12;
    fVar6 = fVar9 * fVar14;
    uVar11 = NEON_fmov(0x3f800000,4);
    fVar13 = (float)((ulong)uVar11 >> 0x20);
    local_50 = (float)uVar11 - fVar4 * fVar10;
    local_70 = NEON_ext(CONCAT44((fVar13 - fVar5) - fVar6,((float)uVar11 - fVar5) - fVar6),
                        CONCAT44(fVar8 * fVar10 + fVar7 * fVar14,fVar8 * fVar10 + fVar7 * fVar14),4,
                        1);
    uVar11 = NEON_ext(CONCAT44(fVar8 * fVar10 - fVar7 * fVar14,fVar8 * fVar10 - fVar7 * fVar14),
                      CONCAT44((fVar13 - fVar4 * fVar10) - fVar6,local_50 - fVar6),4,1);
    local_58 = NEON_ext(CONCAT44(fVar9 * fVar10 + fVar7 * fVar12,fVar9 * fVar10 + fVar7 * fVar12),
                        CONCAT44(fVar9 * fVar12 - fVar7 * fVar10,fVar9 * fVar12 - fVar7 * fVar10),4,
                        1);
    local_50 = local_50 - fVar5;
    local_68 = CONCAT44((int)uVar11,fVar9 * fVar10 - fVar7 * fVar12);
    local_60 = CONCAT44(fVar9 * fVar12 + fVar7 * fVar10,(int)((ulong)uVar11 >> 0x20));
    local_4c = param_3[4];
    local_48 = param_3[5];
    local_44 = param_3[6];
    local_40 = param_2[1];
    local_3c = param_2[2];
    local_38 = param_2[3];
    local_78[0] = *param_7;
    lVar2 = (long)*param_4 * 8 + 0x70;
    if ((local_78[0] & 0x100) != 0) {
      lVar2 = (long)*param_4 * 8 + 0xa8;
    }
                    /* try { // try from 0029a2f0 to 0029a313 has its CatchHandler @ 0029a368 */
    uVar3 = (**(code **)(PTR_PTR_02711f48 + lVar2))
                      (param_4,param_5,param_2,param_3,&local_70,param_1,param_6,local_78);
    break;
  case 4:
    local_80[0] = *param_7;
                    /* try { // try from 0029a334 to 0029a353 has its CatchHandler @ 0029a364 */
    uVar3 = (**(code **)(PTR_PTR_02711f48 + (long)*param_4 * 8 + 0xe0))
                      (param_4,param_5,param_2,param_3,param_1,param_6,local_80);
  }
  return uVar3 & 1;
}


