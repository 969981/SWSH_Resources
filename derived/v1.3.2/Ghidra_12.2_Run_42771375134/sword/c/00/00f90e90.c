/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f90e90; name: FUN_00f90e90
 */


long FUN_00f90e90(long param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t __maxlen;
  void *pvVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  string *psVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  string local_60 [8];
  size_t local_58;
  void *local_50;
  void *local_48;
  
  psVar7 = (string *)FUN_00f9c910();
  std::string::string(local_60,psVar7);
  puVar3 = PTR_DAT_02722cc0;
  iVar5 = snprintf((char *)0x0,0,"%d",(ulong)*(uint *)PTR_DAT_02722cc0);
  sVar1 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    sVar1 = local_58;
  }
  std::string::append((ulong)local_60,(char)iVar5);
  bVar4 = ((byte)local_60[0] & 1) != 0;
  pvVar2 = (void *)((ulong)local_60 | 1);
  if (bVar4) {
    pvVar2 = local_50;
  }
  __maxlen = (ulong)((byte)local_60[0] >> 1);
  if (bVar4) {
    __maxlen = local_58;
  }
  iVar5 = snprintf((char *)((long)pvVar2 + (sVar1 - 1)),__maxlen,"%d",(ulong)*(uint *)puVar3);
  *(int *)puVar3 = *(int *)puVar3 + 1;
  pbVar8 = (byte *)FUN_00f9ca50(iVar5);
  pbVar10 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar10 = pbVar8 + 1;
  }
  local_48 = (void *)((ulong)local_60 | 1);
  if (((byte)local_60[0] & 1) != 0) {
    local_48 = local_50;
  }
  FUN_00f9cb90(param_1,&local_48,param_2);
  uVar6 = FUN_0175eed0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_0175f270(param_1,uVar6);
  }
  FUN_01761120(param_1,pbVar10);
  FUN_0175ef30(param_1,0xfffffffe);
  FUN_017606f0(param_1,pbVar10);
  lVar9 = FUN_01760060(param_1,0xffffffff);
  FUN_0175ef30(param_1,0xfffffffe);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  return lVar9 + ((ulong)(uint)-(int)lVar9 & 7);
}


