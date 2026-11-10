/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab25d0; name: FUN_00ab25d0
 */


void FUN_00ab25d0(undefined4 param_1,undefined4 param_2,undefined1 param_3 [16],undefined4 param_4,
                 long *param_5,long *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  FUN_015f5d10();
  puVar4 = PTR_DAT_02719870;
  *param_5 = (long)(PTR_DAT_02719870 + 0x10);
  param_5[9] = (long)(puVar4 + 0x60);
  param_5[10] = (long)(puVar4 + 0xa0);
  lVar5 = *param_6;
  param_5[0x10] = lVar5;
  lVar6 = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = param_5[0x10];
  }
  param_5[0x12] = 0;
  param_5[0x13] = 0;
  param_5[0x11] = 0;
  *(undefined4 *)(param_5 + 0x18) = param_8;
  *(undefined4 *)((long)param_5 + 0xc4) = 0;
  *(undefined4 *)(param_5 + 0x19) = param_7;
  lVar6 = FUN_01052d00(lVar6);
  lVar5 = *(long *)(lVar6 + 0x1e8);
  uVar1 = *(undefined4 *)(lVar6 + 0x1d0);
  uVar2 = *(undefined4 *)(lVar6 + 0x1d4);
  uVar3 = *(undefined4 *)(lVar6 + 0x1f0);
  param_5[0x14] = *(long *)(lVar6 + 0x1e0);
  param_5[0x15] = lVar5;
  *(undefined4 *)(param_5 + 0x11) = uVar1;
  *(undefined4 *)((long)param_5 + 0x8c) = param_1;
  *(undefined4 *)(param_5 + 0x12) = uVar2;
  *(undefined4 *)((long)param_5 + 0x94) = param_2;
  *(undefined4 *)((long)param_5 + 0x9c) = param_4;
  *(undefined4 *)(param_5 + 0x13) = uVar3;
  param_5[0x17] = param_3._8_8_;
  param_5[0x16] = param_3._0_8_;
  return;
}


