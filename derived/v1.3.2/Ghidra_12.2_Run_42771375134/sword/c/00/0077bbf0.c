/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077bbf0; name: FUN_0077bbf0
 */


void FUN_0077bbf0(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  iVar1 = (int)param_1[9];
  lVar4 = param_1[10];
  lVar2 = param_1[0xb];
  (**(code **)(*param_1 + 8))();
  if (iVar1 == -1 || lVar4 == 0) {
    return;
  }
  if ((char)lVar2 != '\0') {
    FUN_00404950(iVar1,lVar4);
    FUN_00405710(iVar1);
    return;
  }
  uVar3 = FUN_00404660(iVar1);
  if ((uVar3 >> 3 & 1) == 0) {
    FUN_00404870(iVar1,lVar4);
    return;
  }
  FUN_00404950(iVar1,lVar4);
  return;
}


