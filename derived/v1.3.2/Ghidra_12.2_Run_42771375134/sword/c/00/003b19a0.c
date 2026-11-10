/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b19a0; name: FUN_003b19a0
 */


void FUN_003b19a0(undefined8 param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  pfVar1 = (float *)(**(code **)(**(long **)(param_2 + 0x20) + 0x2f0))();
  pfVar2 = (float *)(**(code **)(**(long **)(param_2 + 0x20) + 0x2f8))();
  fStack_44 = pfVar1[1] - pfVar2[1];
  local_48 = *pfVar1 - *pfVar2;
  local_40 = pfVar1[2] - pfVar2[2];
  fStack_3c = *pfVar1 + *pfVar2;
  local_38 = pfVar1[1] + pfVar2[1];
  fStack_34 = pfVar1[2] + pfVar2[2];
  puVar3 = (undefined4 *)(**(code **)(**(long **)(param_2 + 0x20) + 0x78))();
  puVar4 = (undefined4 *)(**(code **)(**(long **)(param_2 + 0x20) + 0x80))();
  local_68 = *puVar4;
  local_64 = puVar4[1];
  local_60 = puVar4[2];
  local_5c = puVar4[3];
  local_58 = *puVar3;
  local_54 = puVar3[1];
  local_50 = puVar3[2];
  FUN_001b0d40(param_1,&local_68,&local_48);
  return;
}


