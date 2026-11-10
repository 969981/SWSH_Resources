/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008026e0; name: FUN_008026e0
 */


uint FUN_008026e0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 auStack_40 [32];
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  bVar1 = (*param_2 & 1) == 0;
  if (bVar1) {
    pbVar3 = param_2 + 1;
  }
  uVar2 = (uint)(*param_2 >> 1);
  if (!bVar1) {
    uVar2 = *(uint *)(param_2 + 8);
  }
  FUN_0080e5a0(auStack_40,pbVar3,uVar2,0xffffffff);
  uVar2 = FUN_008023e0(param_1,auStack_40,param_3);
  thunk_FUN_0080ee30(auStack_40);
  return uVar2 & 1;
}


