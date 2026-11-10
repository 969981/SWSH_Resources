/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb1ac0; name: FUN_00eb1ac0
 */


void FUN_00eb1ac0(ulong *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  long local_28;
  
  FUN_00deff50(&local_28,param_2 + 0x560);
  lVar2 = FUN_00eb1b80(local_28 + 0x50);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  uVar3 = 0xcbf29ce484222645;
  if (lVar2 == 0) {
    param_1[2] = 0;
    *param_1 = 0xcbf29ce484222645;
    param_1[1] = (ulong)&DAT_01d38550;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x604);
    if (bVar1 != 0) {
      pbVar4 = (byte *)(lVar2 + 0x605);
      do {
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    *param_1 = uVar3;
    param_1[1] = lVar2 + 0x604;
    param_1[2] = 0x33;
  }
  param_1[3] = 0;
  return;
}


