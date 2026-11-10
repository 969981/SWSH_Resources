/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9e970; name: FUN_00f9e970
 */


void FUN_00f9e970(undefined8 param_1,long param_2,int *param_3,long *param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  iVar2 = *param_3;
  lVar3 = FUN_00f54af0();
  pbVar4 = (byte *)(lVar3 + (long)iVar2 * 0x18);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    FUN_01760370(param_2,pbVar4 + 1,bVar1 >> 1);
    lVar3 = *param_4;
  }
  else {
    lVar3 = lVar3 + (long)iVar2 * 0x18;
    FUN_01760370(param_2,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 8));
    lVar3 = *param_4;
  }
  if (lVar3 == 0) {
    FUN_01760310(param_2);
  }
  else {
    FUN_01760c90(lVar3,0xfff0b9d8,(long)(int)param_4[1]);
    if (*param_4 != param_2) {
      FUN_0175edc0(*param_4,param_2,1);
    }
  }
  FUN_01761260(param_2,param_5);
  return;
}


