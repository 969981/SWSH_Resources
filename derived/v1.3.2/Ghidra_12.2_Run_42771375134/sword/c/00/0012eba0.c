/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012eba0; name: FUN_0012eba0
 */


void FUN_0012eba0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  uint local_44;
  
  local_44 = *(uint *)(param_1 + 0x48);
  fStack_64 = *(float *)(param_4 + (ulong)local_44 * 4);
  pfVar3 = (float *)(param_3 + (ulong)local_44 * 0x18);
  fStack_74 = pfVar3[1] - fStack_64;
  local_70 = pfVar3[2] - fStack_64;
  local_78 = *pfVar3 - fStack_64;
  fStack_6c = fStack_64 + pfVar3[3];
  local_68 = fStack_64 + pfVar3[4];
  fStack_64 = fStack_64 + pfVar3[5];
  lVar2 = *(long *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  local_60 = 0x7f7fffff;
  if (*(char *)(lVar2 + 0x4c) != '\0') {
    FUN_0012fbb0();
    lVar2 = *(long *)(param_1 + 0x50);
  }
  FUN_0012ec80(param_2,&local_78,uVar4,param_5,param_6,1,uVar1,&local_44,*(undefined8 *)(lVar2 + 8))
  ;
  return;
}


