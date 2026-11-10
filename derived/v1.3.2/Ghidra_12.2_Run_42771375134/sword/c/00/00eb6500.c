/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb6500; name: FUN_00eb6500
 */


void FUN_00eb6500(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong local_50;
  char *pcStack_48;
  size_t local_40;
  long local_38;
  
  lVar2 = *(long *)PTR_DAT_027107a8;
  uVar4 = 0xcbf29ce484222645;
  local_40 = strlen((char *)(param_1 + 0xac8));
  bVar1 = *(byte *)(param_1 + 0xac8);
  if (bVar1 != 0) {
    pbVar3 = (byte *)(param_1 + 0xac9);
    do {
      uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_38 = 0;
  local_50 = uVar4;
  pcStack_48 = (char *)(param_1 + 0xac8);
  FUN_008962c0(lVar2 + 0x108,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


