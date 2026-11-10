/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab1900; name: FUN_00ab1900
 */


void FUN_00ab1900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar7 = PTR_DAT_02719848;
  *param_8 = (long)(PTR_DAT_02719848 + 0x10);
  param_8[9] = (long)(puVar7 + 0x60);
  param_8[10] = (long)(puVar7 + 0xa0);
  lVar8 = *param_9;
  param_8[0x10] = lVar8;
  lVar9 = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar9 = param_8[0x10];
  }
  *(undefined4 *)((long)param_8 + 0x8c) = param_1;
  *(undefined4 *)((long)param_8 + 0x94) = param_2;
  *(undefined4 *)((long)param_8 + 0x9c) = param_3;
  *(undefined4 *)((long)param_8 + 0xa4) = param_4;
  *(undefined4 *)((long)param_8 + 0xac) = param_5;
  *(undefined4 *)((long)param_8 + 0xb4) = param_6;
  *(undefined4 *)((long)param_8 + 0xbc) = param_7;
  *(undefined4 *)(param_8 + 0x18) = param_11;
  *(undefined4 *)((long)param_8 + 0xc4) = 0;
  *(undefined4 *)(param_8 + 0x19) = param_10;
  lVar9 = FUN_01052d00(lVar9);
  uVar3 = *(undefined4 *)(lVar9 + 0xc0);
  uVar6 = *(undefined4 *)(lVar9 + 0xd4);
  uVar1 = *(undefined4 *)(lVar9 + 0xc4);
  uVar4 = *(undefined4 *)(lVar9 + 200);
  uVar2 = *(undefined4 *)(lVar9 + 0xcc);
  uVar5 = *(undefined4 *)(lVar9 + 0xd0);
  *(undefined4 *)(param_8 + 0x11) = *(undefined4 *)(lVar9 + 0xbc);
  *(undefined4 *)(param_8 + 0x12) = uVar3;
  *(undefined4 *)(param_8 + 0x13) = uVar1;
  *(undefined4 *)(param_8 + 0x14) = uVar4;
  *(undefined4 *)(param_8 + 0x15) = uVar2;
  *(undefined4 *)(param_8 + 0x16) = uVar5;
  *(undefined4 *)(param_8 + 0x17) = uVar6;
  return;
}


