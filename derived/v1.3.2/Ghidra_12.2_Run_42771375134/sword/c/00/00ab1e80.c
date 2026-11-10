/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab1e80; name: FUN_00ab1e80
 */


void FUN_00ab1e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long *param_9,long *param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  FUN_015f5d10();
  puVar11 = PTR_DAT_02719858;
  *param_9 = (long)(PTR_DAT_02719858 + 0x10);
  param_9[9] = (long)(puVar11 + 0x60);
  param_9[10] = (long)(puVar11 + 0xa0);
  lVar12 = *param_10;
  param_9[0x10] = lVar12;
  lVar13 = 0;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    lVar13 = param_9[0x10];
  }
  param_9[0x1a] = 0;
  param_9[0x1b] = 0;
  param_9[0x11] = 0;
  *(undefined4 *)(param_9 + 0x1c) = param_12;
  *(undefined4 *)((long)param_9 + 0xe4) = 0;
  *(undefined4 *)(param_9 + 0x1d) = param_11;
  param_9[0x18] = 0;
  param_9[0x19] = 0;
  param_9[0x16] = 0;
  param_9[0x17] = 0;
  param_9[0x14] = 0;
  param_9[0x15] = 0;
  param_9[0x12] = 0;
  param_9[0x13] = 0;
  lVar13 = FUN_01052d00(lVar13);
  uVar1 = *(undefined4 *)(lVar13 + 0x4c);
  uVar5 = *(undefined4 *)(lVar13 + 0x50);
  uVar2 = *(undefined4 *)(lVar13 + 0x54);
  uVar6 = *(undefined4 *)(lVar13 + 0x58);
  uVar10 = *(undefined4 *)(lVar13 + 0x74);
  uVar3 = *(undefined4 *)(lVar13 + 0x5c);
  uVar7 = *(undefined4 *)(lVar13 + 0x60);
  uVar8 = *(undefined4 *)(lVar13 + 0x68);
  uVar4 = *(undefined4 *)(lVar13 + 0x6c);
  uVar9 = *(undefined4 *)(lVar13 + 0x70);
  *(undefined4 *)(param_9 + 0x11) = *(undefined4 *)(lVar13 + 100);
  *(undefined4 *)((long)param_9 + 0xbc) = param_7;
  *(undefined4 *)((long)param_9 + 0x8c) = param_1;
  *(undefined4 *)(param_9 + 0x12) = uVar8;
  *(undefined4 *)((long)param_9 + 0xc4) = param_8;
  *(undefined4 *)((long)param_9 + 0x94) = param_2;
  *(undefined4 *)(param_9 + 0x13) = uVar4;
  *(undefined4 *)((long)param_9 + 0x9c) = param_3;
  *(undefined4 *)(param_9 + 0x14) = uVar1;
  *(undefined4 *)((long)param_9 + 0xa4) = param_4;
  *(undefined4 *)(param_9 + 0x15) = uVar5;
  *(undefined4 *)((long)param_9 + 0xac) = param_5;
  *(undefined4 *)(param_9 + 0x16) = uVar2;
  *(undefined4 *)((long)param_9 + 0xb4) = param_6;
  *(undefined4 *)(param_9 + 0x17) = uVar7;
  *(undefined4 *)(param_9 + 0x18) = uVar6;
  *(undefined4 *)(param_9 + 0x19) = uVar3;
  *(undefined4 *)((long)param_9 + 0xcc) = in_stack_00000000;
  *(undefined4 *)(param_9 + 0x1a) = uVar10;
  *(undefined4 *)((long)param_9 + 0xd4) = in_stack_00000008;
  *(undefined4 *)(param_9 + 0x1b) = uVar9;
  *(undefined4 *)((long)param_9 + 0xdc) = in_stack_00000010;
  return;
}


