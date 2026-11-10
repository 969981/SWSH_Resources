/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ead6c0; name: FUN_00ead6c0
 */


void FUN_00ead6c0(float param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_027201b0;
  if (param_3 == 1) {
    FUN_00ead7c0(0x3f800000,param_2,PTR_DAT_027201b0);
    FUN_00ead7c0(0,param_2,puVar1 + 0x18);
    FUN_00ead7c0(0x3f800000,param_2,puVar1 + 0x30);
    return;
  }
  if (param_3 != 0) {
    return;
  }
  if (param_1 <= 0.0) {
    fVar3 = 0.0;
    param_1 = 0.0;
  }
  else {
    fVar2 = logf(param_1 + 1.0);
    fVar4 = fVar2;
    if (1.0 < fVar2) {
      fVar4 = 1.0;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    param_1 = param_1 * param_1;
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  puVar1 = PTR_DAT_027201b0;
  FUN_00ead7c0(fVar3,param_2,PTR_DAT_027201b0);
  FUN_00ead7c0(param_1,param_2,puVar1 + 0x18);
  FUN_00ead7c0(0,param_2,puVar1 + 0x30);
  return;
}


