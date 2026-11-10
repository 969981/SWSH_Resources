/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab1bb0; name: FUN_00ab1bb0
 */


void FUN_00ab1bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,long *param_8,
                 long *param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  FUN_015f5d10();
  puVar7 = PTR_DAT_02719850;
  *param_8 = (long)(PTR_DAT_02719850 + 0x10);
  param_8[9] = (long)(puVar7 + 0x60);
  param_8[10] = (long)(puVar7 + 0xa0);
  lVar8 = *param_9;
  param_8[0x10] = lVar8;
  lVar9 = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar9 = param_8[0x10];
  }
  param_8[0x16] = 0;
  param_8[0x17] = 0;
  param_8[0x11] = 0;
  *(undefined4 *)(param_8 + 0x18) = param_11;
  *(undefined4 *)((long)param_8 + 0xc4) = 0;
  *(undefined4 *)(param_8 + 0x19) = param_10;
  param_8[0x14] = 0;
  param_8[0x15] = 0;
  param_8[0x12] = 0;
  param_8[0x13] = 0;
  lVar9 = FUN_01052d00(lVar9);
  uVar1 = *(undefined4 *)(lVar9 + 0x100);
  uVar2 = *(undefined4 *)(lVar9 + 0x104);
  uVar3 = *(undefined4 *)(lVar9 + 0x108);
  uVar4 = *(undefined4 *)(lVar9 + 0x10c);
  uVar5 = *(undefined4 *)(lVar9 + 0x110);
  uVar6 = *(undefined4 *)(lVar9 + 0x114);
  *(undefined4 *)(param_8 + 0x11) = *(undefined4 *)(lVar9 + 0xfc);
  *(undefined4 *)((long)param_8 + 0x8c) = param_1;
  *(undefined4 *)(param_8 + 0x12) = uVar1;
  *(undefined4 *)((long)param_8 + 0x94) = param_2;
  *(undefined4 *)(param_8 + 0x13) = uVar2;
  *(undefined4 *)((long)param_8 + 0x9c) = param_3;
  *(undefined4 *)(param_8 + 0x14) = uVar3;
  *(undefined4 *)((long)param_8 + 0xa4) = param_4;
  *(undefined4 *)(param_8 + 0x15) = uVar4;
  *(undefined4 *)((long)param_8 + 0xac) = param_5;
  *(undefined4 *)(param_8 + 0x16) = uVar5;
  *(undefined4 *)((long)param_8 + 0xb4) = param_6;
  *(undefined4 *)(param_8 + 0x17) = uVar6;
  *(undefined4 *)((long)param_8 + 0xbc) = param_7;
  return;
}


