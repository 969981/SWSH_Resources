/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00121ff0; name: FUN_00121ff0
 */


void FUN_00121ff0(long *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  
  if ((*param_1 != 0) &&
     (*(int *)(*(long *)(*param_1 + 0x20) + 0x38) != *(int *)(param_1[2] + 0x5c))) {
    FUN_00121420(&local_70);
    FUN_00121860(&local_90,param_1[2],*param_1);
    fVar6 = local_58;
    fVar5 = local_5c;
    fVar4 = local_60;
    fVar3 = local_78;
    fVar2 = fStack_7c;
    fVar1 = local_80;
                    /* try { // try from 00122064 to 00122077 has its CatchHandler @ 00122270 */
    FUN_00294810(&local_a0,&local_b0,*(long *)(param_1[2] + 0x60) + 0x28,&local_70,0);
    lVar7 = param_1[2];
    *(float *)(lVar7 + 0x50) = local_a0 - (fVar4 - fVar1);
    *(float *)(lVar7 + 0x54) = local_9c - (fVar5 - fVar2);
    *(float *)(lVar7 + 0x58) = local_98 - (fVar6 - fVar3);
    *(undefined4 *)(lVar7 + 0x44) = local_b0;
    *(undefined4 *)(lVar7 + 0x48) = local_ac;
    *(undefined4 *)(lVar7 + 0x4c) = local_a8;
    *(undefined4 *)(lVar7 + 0xc) = local_90;
    *(undefined4 *)(lVar7 + 0x10) = local_8c;
    *(undefined4 *)(lVar7 + 0x14) = local_88;
    *(undefined4 *)(lVar7 + 0x18) = local_84;
    *(float *)(lVar7 + 0x1c) = fVar1;
    *(float *)(lVar7 + 0x20) = fVar2;
    *(float *)(lVar7 + 0x24) = fVar3;
    *(undefined4 *)(lVar7 + 0x28) = local_70;
    *(undefined4 *)(lVar7 + 0x2c) = local_6c;
    *(undefined4 *)(lVar7 + 0x30) = local_68;
    *(undefined4 *)(lVar7 + 0x34) = local_64;
    *(float *)(lVar7 + 0x38) = local_60;
    *(float *)(lVar7 + 0x3c) = local_5c;
    *(float *)(lVar7 + 0x40) = local_58;
    *(undefined4 *)(lVar7 + 0x5c) = *(undefined4 *)(*(long *)(*param_1 + 0x20) + 0x38);
  }
  if ((param_1[1] != 0) &&
     (*(int *)(*(long *)(param_1[1] + 0x20) + 0x38) != *(int *)(param_1[3] + 0x5c))) {
    FUN_00121420(&local_70);
    FUN_00121860(&local_90,param_1[3],param_1[1]);
    fVar3 = local_58;
    fVar2 = local_5c;
    fVar1 = local_60;
                    /* try { // try from 00122184 to 00122197 has its CatchHandler @ 0012226c */
    FUN_00294810(&local_a0,&local_b0,*(long *)(param_1[3] + 0x60) + 0x28,&local_70,0);
    lVar7 = param_1[3];
    *(float *)(lVar7 + 0x50) = local_a0 - (fVar1 - local_80);
    *(float *)(lVar7 + 0x54) = local_9c - (fVar2 - fStack_7c);
    *(float *)(lVar7 + 0x58) = local_98 - (fVar3 - local_78);
    *(undefined4 *)(lVar7 + 0x44) = local_b0;
    *(undefined4 *)(lVar7 + 0x48) = local_ac;
    *(undefined4 *)(lVar7 + 0x4c) = local_a8;
    *(undefined4 *)(lVar7 + 0xc) = local_90;
    *(undefined4 *)(lVar7 + 0x10) = local_8c;
    *(undefined4 *)(lVar7 + 0x14) = local_88;
    *(undefined4 *)(lVar7 + 0x18) = local_84;
    *(float *)(lVar7 + 0x1c) = local_80;
    *(float *)(lVar7 + 0x20) = fStack_7c;
    *(float *)(lVar7 + 0x24) = local_78;
    *(undefined4 *)(lVar7 + 0x28) = local_70;
    *(undefined4 *)(lVar7 + 0x2c) = local_6c;
    *(undefined4 *)(lVar7 + 0x30) = local_68;
    *(undefined4 *)(lVar7 + 0x34) = local_64;
    *(float *)(lVar7 + 0x38) = local_60;
    *(float *)(lVar7 + 0x3c) = local_5c;
    *(float *)(lVar7 + 0x40) = local_58;
    *(undefined4 *)(lVar7 + 0x5c) = *(undefined4 *)(*(long *)(param_1[1] + 0x20) + 0x38);
  }
  return;
}


