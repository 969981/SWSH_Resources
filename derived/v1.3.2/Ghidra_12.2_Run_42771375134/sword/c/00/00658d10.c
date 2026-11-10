/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00658d10; name: FUN_00658d10
 */


void FUN_00658d10(long *param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02714b78 + 0xd8;
  *param_1 = (long)(PTR_DAT_02714b78 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_005bf710(param_1 + 2);
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  if (param_2 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    param_1[6] = lVar4;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = *param_4;
  lVar4 = param_4[1];
  lVar2 = param_4[2];
  lVar6 = param_4[3];
  *(int *)(param_1 + 0x13) = (int)param_4[4];
  param_1[0x10] = lVar4;
  param_1[0x11] = lVar2;
  param_1[0x12] = lVar6;
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_4 + 0x24);
  *(int *)(param_1 + 0x14) = (int)param_4[5];
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)((long)param_4 + 0x2c);
  *(int *)(param_1 + 0x15) = (int)param_4[6];
  uVar5 = *(undefined8 *)((long)param_4 + 0x34);
  uVar3 = *(undefined4 *)((long)param_4 + 0x3c);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xac) = uVar5;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xc;
  return;
}


