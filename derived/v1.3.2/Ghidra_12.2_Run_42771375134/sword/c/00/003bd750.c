/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bd750; name: FUN_003bd750
 */


void FUN_003bd750(long param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN_003d95e0();
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)(param_1 + 0xae) = 0;
  lVar3 = *(long *)PTR_DAT_02711060;
  *(undefined8 *)(param_1 + 0x80) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x88) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)PTR_DAT_02712750;
  *(undefined4 *)(param_1 + 0x10) = *param_3;
  *(undefined4 *)(param_1 + 0x14) = param_3[1];
  *(undefined4 *)(param_1 + 0x18) = param_3[2];
  *(undefined4 *)(param_1 + 0x1c) = param_3[3];
  *(undefined4 *)(param_1 + 0x20) = param_3[4];
  *(undefined4 *)(param_1 + 0x24) = param_3[5];
  fVar2 = DAT_01d4c4e4;
  uVar4 = DAT_01d4c158;
  if (param_2 != 1) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = param_3[6];
  fVar5 = *(float *)(lVar3 + 8);
  *(undefined4 *)(param_1 + 0x2c) = 0x1040100;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 0x68) = &DAT_7f7fffff00000000;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x3e19999a00000000;
  *(undefined4 *)(param_1 + 0x90) = 0x749dc5ae;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xf49dc5ae00000000;
  *(undefined8 *)(param_1 + 0x74) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  fVar1 = DAT_01d4c468;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x3f80000000000000;
  *(float *)(param_1 + 0x94) = fVar5 * fVar5 * fVar2;
  uVar4 = *(undefined4 *)(&DAT_01cd4fa0 + (ulong)(param_2 == 1) * 4);
  *(float *)(param_1 + 0x98) = fVar5 * fVar5 * fVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  return;
}


