/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00865b30; name: FUN_00865b30
 */


undefined8 * FUN_00865b30(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  FUN_006e4c50(param_1 + 0xb,param_2 + 0xb);
  FUN_006e4c50(param_1 + 0x11,param_2 + 0x11);
  FUN_006e4c50(param_1 + 0x17,param_2 + 0x17);
  FUN_006e4c50(param_1 + 0x1d,param_2 + 0x1d);
  FUN_006e4c50(param_1 + 0x23,param_2 + 0x23);
  FUN_006e4c50(param_1 + 0x29,param_2 + 0x29);
  FUN_006e4c50(param_1 + 0x2f,param_2 + 0x2f);
  FUN_006e4c50(param_1 + 0x35,param_2 + 0x35);
  FUN_006e4c50(param_1 + 0x3b,param_2 + 0x3b);
  FUN_006e4c50(param_1 + 0x41,param_2 + 0x41);
  FUN_006e4c50(param_1 + 0x47,param_2 + 0x47);
  param_1[0x4d] = param_2[0x4d];
  lVar5 = param_2[0x4e];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar1 = param_1[0x4e];
  param_1[0x4e] = lVar5;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  uVar2 = param_2[0x4f];
  uVar3 = param_2[0x50];
  uVar4 = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x51] = uVar4;
  param_1[0x50] = uVar3;
  param_1[0x4f] = uVar2;
  return param_1;
}


