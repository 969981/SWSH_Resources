/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab2870; name: FUN_00ab2870
 */


void FUN_00ab2870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long *param_7,long param_8,undefined4 param_9
                 ,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_90;
  
  FUN_015f5d10();
  puVar6 = PTR_DAT_02719878;
  param_7[0x10] = param_8;
  param_7[0x15] = 0;
  param_7[0x16] = 0;
  param_7[0x13] = 0;
  param_7[0x14] = 0;
  *param_7 = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_7 + 0x17) = param_11;
  *(undefined4 *)((long)param_7 + 0xbc) = 0;
  param_7[0x11] = 0;
  param_7[0x12] = 0;
  *(undefined4 *)(param_7 + 0x18) = param_10;
  param_7[9] = (long)(puVar6 + 0x60);
  param_7[10] = (long)(puVar6 + 0xa0);
  uVar7 = *(undefined8 *)(param_8 + 0x2b4);
  uVar1 = *(undefined4 *)(param_8 + 700);
  uVar2 = *(undefined4 *)(param_8 + 0x2a0);
  uVar3 = *(undefined4 *)(param_8 + 0x2a8);
  uVar4 = *(undefined4 *)(param_8 + 0x2ac);
  uVar5 = *(undefined4 *)(param_8 + 0x2b0);
  uVar10 = *(undefined8 *)(param_8 + 0x2c8);
  uVar9 = *(undefined8 *)(param_8 + 0x2c0);
  uVar8 = *(undefined8 *)(param_8 + 0x2d0);
  *(undefined4 *)(param_7 + 0x11) = uVar3;
  *(undefined4 *)((long)param_7 + 0x8c) = param_1;
  *(undefined4 *)(param_7 + 0x12) = uVar4;
  *(undefined4 *)((long)param_7 + 0x94) = param_2;
  *(undefined4 *)(param_7 + 0x13) = uVar5;
  *(undefined4 *)((long)param_7 + 0x9c) = param_3;
  *(int *)(param_7 + 0x14) = (int)uVar9;
  *(undefined4 *)((long)param_7 + 0xa4) = param_4;
  *(int *)(param_7 + 0x15) = (int)((ulong)uVar9 >> 0x20);
  *(undefined4 *)((long)param_7 + 0xac) = param_5;
  *(int *)(param_7 + 0x16) = (int)uVar10;
  *(undefined4 *)((long)param_7 + 0xb4) = param_6;
  *(undefined4 *)(param_8 + 0x2a0) = uVar2;
  *(undefined4 *)(param_8 + 0x2a4) = param_9;
  *(undefined4 *)(param_8 + 0x2a8) = uVar3;
  *(undefined4 *)(param_8 + 0x2ac) = uVar4;
  *(undefined4 *)(param_8 + 0x2b0) = uVar5;
  *(undefined8 *)(param_8 + 0x2b4) = uVar7;
  *(undefined4 *)(param_8 + 700) = uVar1;
  *(undefined8 *)(param_8 + 0x2c8) = uVar10;
  *(undefined8 *)(param_8 + 0x2c0) = uVar9;
  local_90 = (undefined4)uVar8;
  *(undefined4 *)(param_8 + 0x2d0) = local_90;
  return;
}


