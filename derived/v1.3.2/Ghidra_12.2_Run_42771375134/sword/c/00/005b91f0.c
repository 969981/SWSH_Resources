/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b91f0; name: FUN_005b91f0
 */


undefined8
FUN_005b91f0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            long param_6,undefined8 *param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  fVar6 = param_1;
  if (*(int *)(param_6 + 0x2c) != 1) {
    fVar6 = param_1 / param_2;
  }
  *(float *)(param_6 + 0x5c) = fVar6;
  *(float *)(param_6 + 0x60) = param_1;
  lVar4 = 0;
  uVar3 = param_7[1];
  lVar5 = 0;
  *(undefined8 *)(param_6 + 100) = *param_7;
  *(undefined8 *)(param_6 + 0x6c) = uVar3;
  do {
    lVar1 = param_6 + lVar5;
    lVar5 = lVar5 + 4;
    *(undefined4 *)(lVar1 + 0x74) = 1;
    *(float *)(lVar1 + 0x20c) = fVar6;
    *(float *)(lVar1 + 0x1c8) = param_1;
    lVar2 = param_6 + lVar4;
    uVar3 = param_7[1];
    lVar4 = lVar4 + 0x10;
    *(undefined8 *)(lVar2 + 0xb8) = *param_7;
    *(undefined8 *)(lVar2 + 0xc0) = uVar3;
    *(float *)(lVar1 + 0x3a4) = fVar6;
    *(float *)(lVar1 + 0x360) = param_1;
    uVar3 = *param_7;
    *(undefined8 *)(lVar2 + 600) = param_7[1];
    *(undefined8 *)(lVar2 + 0x250) = uVar3;
    *(float *)(lVar1 + 1000) = param_2;
    *(undefined4 *)(lVar1 + 0x42c) = param_3;
    *(undefined4 *)(lVar1 + 0x470) = param_4;
    *(undefined4 *)(lVar1 + 0x4b4) = param_5;
  } while (lVar5 != 0x44);
  if (((param_8 & 1) != 0) && (*(long *)(param_6 + 0x48) != 0)) {
    FUN_0059cb20(*(long *)(param_6 + 0x48),0,0xffffffff);
  }
  return 0;
}


