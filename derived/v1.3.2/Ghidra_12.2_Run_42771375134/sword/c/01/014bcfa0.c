/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bcfa0; name: FUN_014bcfa0
 */


void FUN_014bcfa0(long param_1,int param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  
  *(ushort *)(param_1 + 0x19c) = param_3 & 1;
  iVar2 = FUN_008d3750();
  uVar1 = (uint)((iVar2 - 2U & 0xff) < 6) & 0x2fU >> (ulong)(iVar2 - 2U & 0x1f);
  lVar4 = (long)param_2;
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined4 *)(&DAT_01d4a800 + lVar4 * 4);
    if (uVar1 == 0) {
      puVar5 = &DAT_01d4a6b0;
    }
    else {
      puVar5 = &DAT_01d4b990;
    }
  }
  else {
    uVar3 = *(undefined4 *)(&DAT_01d4b190 + lVar4 * 4);
    if (uVar1 == 0) {
      puVar5 = &DAT_01d4ad90;
    }
    else {
      puVar5 = &DAT_01d4b670;
    }
  }
  FUN_007800b0(param_1,uVar3,*(undefined4 *)(puVar5 + lVar4 * 4));
  return;
}


