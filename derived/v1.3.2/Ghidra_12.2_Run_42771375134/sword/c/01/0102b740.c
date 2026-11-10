/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102b740; name: FUN_0102b740
 */


void FUN_0102b740(ulong param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_78;
  int local_74;
  uint local_70;
  
  if ((param_1 & 1) == 0) {
    FUN_0102ac40(&local_78);
  }
  else {
    FUN_0102abe0(&local_78);
  }
  if (local_70 < 0x18) {
    uVar5 = *(undefined4 *)(PTR_DAT_02723850 + (long)(int)local_70 * 4);
  }
  else {
    uVar5 = 0;
  }
  if ((param_1 & 1) == 0) {
    FUN_0102ac40();
    puVar2 = PTR_DAT_02723850;
  }
  else {
    FUN_0102abe0(&local_78);
    puVar2 = PTR_DAT_02723850;
  }
  if (local_70 < 0x18) {
    iVar4 = -6;
    if (3 < local_70) {
      iVar4 = 1;
    }
    iVar4 = *(int *)(puVar2 + (long)(int)local_70 * 4) + iVar4;
  }
  else {
    iVar4 = 1;
  }
  PTR_DAT_02723850 = puVar2;
  iVar3 = FUN_0102b890(uVar5,puVar2);
  iVar4 = FUN_0102b890(iVar4,puVar2);
  iVar4 = iVar4 - iVar3;
  if ((param_1 & 1) == 0) {
    FUN_0102ac40(&local_78);
  }
  else {
    FUN_0102abe0();
  }
  iVar3 = local_70 - iVar3;
  iVar1 = iVar3 + 0x18;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = iVar4 + 0x18;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  *param_2 = iVar3 * 0xe10;
  *param_3 = local_78 + local_74 * 0x3c + iVar1 * 0xe10;
  return;
}


