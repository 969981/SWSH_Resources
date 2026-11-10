/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a6b00; name: FUN_005a6b00
 */


undefined8
FUN_005a6b00(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = param_3;
  do {
    lVar2 = lVar3;
    lVar3 = *(long *)(lVar2 + 0x120);
  } while (lVar3 != 0);
  lVar3 = *(long *)(lVar2 + 0xa8);
  if (lVar3 == 0) {
    return 1;
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  uVar1 = FUN_005a6b50(param_1,*(float *)(param_3 + 0x88) * fVar4 + *(float *)(param_3 + 0x90),
                       *(float *)(param_3 + 0x8c) * fVar5 + *(float *)(param_3 + 0x94),param_2,lVar3
                       ,param_4,param_5,param_6 & 1);
  return uVar1;
}


