/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f3ca0; name: FUN_001f3ca0
 */


void FUN_001f3ca0(long *param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 auStack_50 [32];
  
  FUN_00207fc0(param_1 + 5,param_2,param_3,param_1);
  pbVar1 = (byte *)((long)param_1 +
                   *(long *)(PTR_DAT_02711068 +
                            (ulong)(*(uint *)(param_1 + 0xd) >> 0x18 & 0xf) * 8 + 0x30) + 0x6c);
  if ((*(uint *)(param_1 + 0xd) & 1) != 0) {
    pbVar1 = (byte *)param_1[0xe];
  }
  if ((*pbVar1 & 1) == 0) {
    return;
  }
  if (((*(byte *)(param_3 + 0x2428) >> 6 & 1) == 0) || (*(char *)(param_3 + 0x22bc) == '\0')) {
    local_68 = (float)FUN_003e6620(param_3 + 0x20,0);
    if ((*(byte *)(param_3 + 0x2428) >> 6 & 1) != 0) {
      cVar2 = *(char *)(param_3 + 0x22c7);
      goto joined_r0x001f3d54;
    }
  }
  else {
    local_68 = *(float *)(param_3 + 0x2228);
    cVar2 = *(char *)(param_3 + 0x22c7);
joined_r0x001f3d54:
    if (cVar2 != '\0') {
      local_68 = local_68 * *(float *)(param_3 + 0x2254);
      goto joined_r0x001f3d80;
    }
  }
  fVar4 = (float)FUN_003e6620(param_3 + 0x20,0xb);
  local_68 = local_68 * fVar4;
joined_r0x001f3d80:
  if (local_68 != 0.0) {
    (**(code **)(*param_1 + 0xa8))(auStack_50,param_1);
    uVar3 = FUN_00218620(param_2,auStack_50);
    local_5c = 0xff00ff00ffff0000;
    local_54 = 0xff0000ff;
    fStack_64 = local_68;
    local_60 = local_68;
    FUN_002190d0(uVar3,&local_68);
  }
  return;
}


