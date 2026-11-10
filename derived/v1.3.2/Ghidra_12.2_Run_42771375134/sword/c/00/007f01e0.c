/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f01e0; name: FUN_007f01e0
 */


void FUN_007f01e0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  
  pcVar2 = (char *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8));
  std::string::append((ulong)pcVar2,'\x01');
  pbVar5 = *(byte **)(param_2 + 0x18);
  pbVar1 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbVar1 = pbVar5 + 1;
  }
  std::string::append(pcVar2,(ulong)pbVar1);
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pcVar2,param_2);
  uVar3 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar3;
  param_4[1] = pcVar2;
  param_4[2] = param_3;
  *(undefined4 *)((long)param_4 + 0x1c) = 0;
  param_4[4] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    param_4[5] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    if (lVar4 == 0) {
      lVar4 = *(long *)(*(long *)PTR_DAT_02716e58 + 0x20);
    }
    FUN_007fd200(param_1,pcVar2,pcVar2,lVar4,param_4);
    uVar3 = *param_4;
    pcVar2 = (char *)param_4[1];
  }
  FUN_007f02f0(param_1,pcVar2,param_3,uVar3,param_2,3,param_4);
  return;
}


