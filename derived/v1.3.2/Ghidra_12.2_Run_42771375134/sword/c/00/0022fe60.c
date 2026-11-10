/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022fe60; name: FUN_0022fe60
 */


bool FUN_0022fe60(long param_1,long param_2,long param_3,float *param_4,float *param_5,
                 undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined8 local_e98;
  undefined8 local_e90;
  undefined4 local_e88;
  undefined8 local_e84;
  float local_e7c;
  float local_e78;
  float local_e74;
  float local_e70;
  undefined8 local_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined4 local_e48;
  float local_e40;
  float local_e3c;
  float local_e38;
  undefined8 local_e30;
  float local_e28;
  undefined **local_e20;
  undefined4 local_e18;
  long local_e10;
  long lStack_e08;
  float *local_e00;
  long lStack_df8;
  float *local_df0;
  float local_de8;
  undefined4 local_de4;
  undefined4 local_3e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar3 = *(float *)(param_3 + 0x14) - param_4[5];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar2 = *(float *)(param_3 + 0x10) - param_4[4];
  fVar3 = fVar3 + fVar3;
  fVar4 = *(float *)(param_3 + 0x18) - param_4[6];
  fVar2 = fVar2 + fVar2;
  fVar4 = fVar4 + fVar4;
  fVar7 = fVar6 * fVar6 + -0.5;
  fVar10 = fVar2 * fVar8 + fVar3 * fVar9 + fVar4 * fVar5;
  local_9c = fVar8 * fVar10 + (fVar2 * fVar7 - fVar6 * (fVar4 * fVar9 - fVar3 * fVar5));
  fStack_98 = fVar9 * fVar10 + (fVar3 * fVar7 - fVar6 * (fVar2 * fVar5 - fVar4 * fVar8));
  local_94 = (fVar4 * fVar7 - fVar6 * (fVar3 * fVar8 - fVar2 * fVar9)) + fVar5 * fVar10;
  local_e40 = *(float *)(param_1 + 4) + *param_5;
  lVar1 = *(long *)(param_2 + 0x30);
  local_e10 = param_1;
  lStack_e08 = param_3;
  local_e00 = param_4;
  lStack_df8 = param_7;
  local_d8 = param_8;
  local_d0 = lVar1;
  local_70 = local_9c;
  fStack_6c = fStack_98;
  local_68 = local_94;
  if (((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) &&
     (*(float *)(param_2 + 0xc) == 1.0)) {
    local_de8 = local_e40 * local_e40;
    local_e18 = 2;
    local_df0 = &local_70;
    local_e20 = &PTR_LAB_025e4498;
    local_de4 = 0;
    local_3e0 = 0;
    local_a0 = 0x3f800000;
    local_c0 = 0x3f800000;
    uStack_b8 = 0;
    local_b0 = 0x3f800000;
    uStack_a8 = 0;
                    /* try { // try from 0022fff8 to 00230013 has its CatchHandler @ 00230180 */
    fStack_90 = local_e40;
    local_8c = local_e40;
    fStack_88 = local_e40;
    (*(code *)(&PTR_LAB_025e44b0)[*(ushort *)(lVar1 + 8) - 3])(lVar1,&local_c0,&local_e20,1,1);
    local_e20 = &PTR_LAB_025e4498;
                    /* try { // try from 0023001c to 0023001f has its CatchHandler @ 0023017c */
    FUN_002303f0(&local_e10);
  }
  else {
    FUN_001b0f90(&local_c0,(float *)(param_2 + 4),param_2 + 0x10);
    local_e18 = 2;
    local_df0 = &local_70;
    local_de8 = local_e40 * local_e40;
    local_e20 = &PTR_LAB_025e44d0;
    local_e30 = CONCAT44(fStack_6c,local_70);
    local_e28 = local_68;
    local_de4 = 0;
    local_3e0 = 0;
    local_e48 = 0x3f800000;
    local_e68 = 0x3f800000;
    local_e60 = 0;
    local_e58 = 0x3f800000;
    local_e50 = 0;
                    /* try { // try from 002300a4 to 002300b7 has its CatchHandler @ 002301a0 */
    local_e3c = local_e40;
    local_e38 = local_e40;
    local_c8 = &local_c0;
    FUN_002228b0(&local_c0,&local_e30,&local_e40,&local_e68);
    local_ea8 = local_e68;
    local_ea0 = local_e60;
    local_e98 = local_e58;
    local_e90 = local_e50;
    local_e88 = local_e48;
    local_e84 = local_e30;
    local_e7c = local_e28;
    local_e78 = local_e40;
    local_e74 = local_e3c;
    local_e70 = local_e38;
                    /* try { // try from 0023011c to 00230137 has its CatchHandler @ 0023019c */
    (*(code *)(&PTR_LAB_025e44b0)[*(ushort *)(lVar1 + 8) - 3])(lVar1,&local_ea8,&local_e20,1,1);
    local_e20 = &PTR_LAB_025e4498;
                    /* try { // try from 0023014c to 0023014f has its CatchHandler @ 00230198 */
    FUN_002303f0(&local_e10);
  }
  return *(int *)(param_7 + 0x1000) != 0;
}


