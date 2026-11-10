/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb8f70; name: FUN_00cb8f70
 */


bool FUN_00cb8f70(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x88);
  bVar1 = *pbVar4;
  uVar2 = 0xcbf29ce484222645;
  uVar3 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    uVar3 = 0xcbf29ce484222645;
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar4;
    } while (bVar1 != 0);
  }
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  return uVar3 == uVar2;
}


