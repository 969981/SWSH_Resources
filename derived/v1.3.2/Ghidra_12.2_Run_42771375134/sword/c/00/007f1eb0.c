/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f1eb0; name: FUN_007f1eb0
 */


void FUN_007f1eb0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar2 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar2;
  param_4[2] = param_3;
  pcVar3 = (char *)FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8));
  std::string::append((ulong)pcVar3,'\x01');
  pbVar5 = (byte *)*param_4;
  pbVar1 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbVar1 = pbVar5 + 1;
  }
  std::string::append(pcVar3,(ulong)pbVar1);
  param_4[1] = pcVar3;
  FUN_007ebbc0(param_1,*(undefined8 *)(param_2 + 0x18),pcVar3,param_2);
  param_4[3] = 0;
  param_4[4] = 0;
  if ((*(byte *)(param_2 + 0x10) >> 3 & 1) == 0) {
    param_4[5] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x30);
    if (lVar4 == 0) {
      lVar4 = *(long *)(*(long *)PTR_DAT_02716e70 + 0x30);
    }
    FUN_007fe300(param_1,param_4[1],param_4[1],lVar4,param_4);
  }
  *(undefined1 *)(param_4 + 6) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)((long)param_4 + 0x31) = *(undefined1 *)(param_2 + 0x39);
  FUN_007f02f0(param_1,param_4[1],param_3,*param_4,param_2,7,param_4);
  return;
}


