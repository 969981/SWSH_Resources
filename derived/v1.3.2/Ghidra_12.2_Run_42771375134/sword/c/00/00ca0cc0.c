/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca0cc0; name: FUN_00ca0cc0
 */


bool FUN_00ca0cc0(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x98);
  if (param_2 != (byte *)0x0 || pbVar5 != (byte *)0x0) {
    if (param_2 == (byte *)0x0) {
      return false;
    }
    if (pbVar5 == (byte *)0x0) {
      return false;
    }
    bVar1 = *pbVar5;
    uVar3 = 0xcbf29ce484222645;
    uVar4 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      uVar4 = 0xcbf29ce484222645;
      do {
        pbVar5 = pbVar5 + 1;
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
      } while (bVar1 != 0);
    }
    bVar1 = *param_2;
    while (bVar1 != 0) {
      param_2 = param_2 + 1;
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *param_2;
    }
    if (uVar4 != uVar3) {
      return false;
    }
  }
  pbVar5 = *(byte **)(param_1 + 0xa0);
  if (param_3 == (byte *)0x0 && pbVar5 == (byte *)0x0) {
    return true;
  }
  bVar2 = false;
  if ((param_3 != (byte *)0x0) && (pbVar5 != (byte *)0x0)) {
    bVar1 = *pbVar5;
    uVar3 = 0xcbf29ce484222645;
    uVar4 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      uVar4 = 0xcbf29ce484222645;
      do {
        pbVar5 = pbVar5 + 1;
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar5;
      } while (bVar1 != 0);
    }
    bVar1 = *param_3;
    while (bVar1 != 0) {
      param_3 = param_3 + 1;
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *param_3;
    }
    bVar2 = uVar4 == uVar3;
  }
  return bVar2;
}


