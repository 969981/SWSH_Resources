/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7400; name: FUN_011f7400
 */


void FUN_011f7400(int *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_40 [12];
  
  local_40 = FUN_011f7bc0(param_2);
  iVar1 = *param_1;
  iVar6 = FUN_011f7a10(local_40);
  if ((((iVar1 == iVar6) &&
       (uVar9 = *(ulong *)(param_1 + 2), uVar4 = FUN_011f7a20(local_40), uVar9 == uVar4)) &&
      (uVar9 = *(ulong *)(param_1 + 4), bVar2 = FUN_011f7a30(local_40), uVar9 == bVar2)) &&
     (iVar1 = param_1[6], sVar5 = FUN_011f7a50(local_40), (short)iVar1 == sVar5)) {
    bVar2 = FUN_011f7a40(local_40);
    if ((ulong)bVar2 < *(ulong *)(param_1 + 4)) {
      uVar9 = FUN_011f7a40(local_40);
      if ((1L << (uVar9 & 0x3f) & *(ulong *)(*(long *)(param_1 + 0x16) + (uVar9 >> 3 & 0x18))) == 0)
      {
        uVar3 = FUN_011f7a40(local_40);
        uVar7 = FUN_011f7c30(param_2);
        FUN_011f70d0(param_1 + 8,uVar3,uVar7);
        uVar9 = FUN_011f7a40(local_40);
        uVar8 = uVar9 >> 3 & 0x18;
        *(ulong *)(*(long *)(param_1 + 0x16) + uVar8) =
             1L << (uVar9 & 0x3f) | *(ulong *)(*(long *)(param_1 + 0x16) + uVar8);
      }
    }
  }
  return;
}


