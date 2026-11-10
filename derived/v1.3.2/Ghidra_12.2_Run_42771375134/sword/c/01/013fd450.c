/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fd450; name: FUN_013fd450
 */


void FUN_013fd450(long param_1,byte param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong local_18;
  
  pbVar3 = *(byte **)PTR_PTR_02729600;
  local_18 = 0xcbf29ce484222645;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_18 = (local_18 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_2 & 1;
  return;
}


