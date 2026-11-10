/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885ee0; name: FUN_00885ee0
 */


undefined4 FUN_00885ee0(long param_1,ushort param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 uVar3;
  
  if (*(byte *)(param_1 + 0x112) <= param_2) {
    return 2;
  }
  sVar2 = *(short *)(param_1 + (ulong)param_2 * 4 + 0x10);
  uVar3 = 1;
  if (sVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (sVar2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}


