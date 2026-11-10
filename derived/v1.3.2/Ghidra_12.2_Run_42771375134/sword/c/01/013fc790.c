/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fc790; name: FUN_013fc790
 */


void FUN_013fc790(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong local_38;
  
  FUN_00ffa290(param_1,0,1);
  local_38 = 0x52b0b65b3a0d2ac9;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  uVar5 = *(undefined8 *)(param_1 + 8);
  local_38 = 0x37c4f275225953de;
  uVar3 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  FUN_0168b110(param_1 + 0x5d0,uVar5,uVar3,0);
  uVar5 = *(undefined8 *)(param_1 + 8);
  local_38 = 0x55007dcba30e167e;
  uVar3 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  FUN_0168b110(param_1 + 0x9a0,uVar5,uVar3,0);
  pbVar4 = *(byte **)PTR_PTR_027295d8;
  bVar1 = *pbVar4;
  local_38 = 0xcbf29ce484222645;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    local_38 = (local_38 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar4;
  }
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  return;
}


