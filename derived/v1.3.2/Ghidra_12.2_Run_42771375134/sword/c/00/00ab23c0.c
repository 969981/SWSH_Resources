/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab23c0; name: FUN_00ab23c0
 */


void FUN_00ab23c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  FUN_015f5d10();
  puVar5 = PTR_DAT_02719868;
  *param_5 = (long)(PTR_DAT_02719868 + 0x10);
  param_5[9] = (long)(puVar5 + 0x60);
  param_5[10] = (long)(puVar5 + 0xa0);
  lVar6 = *param_6;
  param_5[0x10] = lVar6;
  lVar7 = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar7 = param_5[0x10];
  }
  param_5[0x13] = 0;
  param_5[0x14] = 0;
  *(undefined4 *)(param_5 + 0x15) = param_8;
  *(undefined4 *)((long)param_5 + 0xac) = 0;
  *(undefined4 *)(param_5 + 0x16) = param_7;
  param_5[0x11] = 0;
  param_5[0x12] = 0;
  lVar7 = FUN_01052d00(lVar7);
  uVar1 = *(undefined4 *)(lVar7 + 0x1c0);
  uVar2 = *(undefined4 *)(lVar7 + 0x1c4);
  uVar3 = *(undefined4 *)(lVar7 + 0x1c8);
  uVar4 = *(undefined4 *)(lVar7 + 0x1cc);
  *(undefined4 *)((long)param_5 + 0x8c) = param_1;
  *(undefined4 *)((long)param_5 + 0x94) = param_2;
  *(undefined4 *)(param_5 + 0x11) = uVar1;
  *(undefined4 *)(param_5 + 0x12) = uVar2;
  *(undefined4 *)(param_5 + 0x13) = uVar3;
  *(undefined4 *)((long)param_5 + 0x9c) = param_3;
  *(undefined4 *)(param_5 + 0x14) = uVar4;
  *(undefined4 *)((long)param_5 + 0xa4) = param_4;
  return;
}


