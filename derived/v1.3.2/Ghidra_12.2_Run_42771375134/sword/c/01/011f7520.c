/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7520; name: FUN_011f7520
 */


bool FUN_011f7520(int *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  
  iVar1 = *param_1;
  iVar5 = FUN_011f7a10(param_2);
  if (iVar1 != iVar5) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + 2);
  uVar3 = FUN_011f7a20(param_2);
  if (uVar6 != uVar3) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + 4);
  bVar2 = FUN_011f7a30(param_2);
  if (uVar6 == bVar2) {
    iVar1 = param_1[6];
    sVar4 = FUN_011f7a50(param_2);
    return (short)iVar1 == sVar4;
  }
  return false;
}


