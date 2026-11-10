/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053a510; name: FUN_0053a510
 */


undefined8 FUN_0053a510(float param_1,long param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  local_70 = fVar2 + 0.0;
  local_58 = (1.0 - fVar2) * 0.0;
  fStack_6c = fVar3 + local_58;
  local_60 = local_58 - fVar3;
  local_68 = local_58 - fVar3 * 0.0;
  local_58 = local_58 + fVar3 * 0.0;
  local_34 = 0x3f800000;
  local_48 = fVar2 * 0.0 + 1.0;
  lVar1 = param_2 + (long)param_3 * 0x40 + 0x9b4;
  local_54 = 0;
  local_64 = 0;
  local_3c = 0;
  local_44 = 0;
  fStack_5c = local_70;
  local_50 = local_58;
  fStack_4c = local_68;
  FUN_00515cb0(lVar1,lVar1,&local_70);
  *(undefined1 *)(param_2 + param_3 + 0xb34) = 1;
  return 0;
}


