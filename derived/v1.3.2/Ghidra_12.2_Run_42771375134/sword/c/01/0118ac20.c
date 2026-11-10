/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118ac20; name: FUN_0118ac20
 */


void FUN_0118ac20(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = *(byte **)(param_1 + 0x18);
  bVar2 = *pbVar6;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_0118ac6c:
      *(undefined4 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  else if (*(long *)(pbVar6 + 8) == 0) goto LAB_0118ac6c;
  uVar4 = (uint)*(undefined8 *)(pbVar6 + 8);
  uVar5 = (uint)(bVar2 >> 1);
  uVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 < 0x80) {
    iVar3 = 2;
  }
  else {
    iVar3 = FUN_0080e440();
    bVar2 = *pbVar6;
    uVar4 = (uint)*(undefined8 *)(pbVar6 + 8);
    uVar5 = (uint)(bVar2 >> 1);
    iVar3 = iVar3 + 1;
  }
  if ((bVar2 & 1) != 0) {
    uVar5 = uVar4;
  }
  *(uint *)(param_1 + 0x20) = iVar3 + uVar5;
  return;
}


