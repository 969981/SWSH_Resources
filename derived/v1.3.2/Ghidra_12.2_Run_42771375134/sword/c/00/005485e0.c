/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005485e0; name: FUN_005485e0
 */


void FUN_005485e0(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_02713ba0 + 0x10);
  if ((char)param_1[4] != '\0') {
    lVar1 = param_1[0x10];
    *(undefined1 *)(param_1 + 4) = 0;
    if ((int)lVar1 != 0) {
      iVar5 = 0;
      do {
        iVar2 = FUN_00546b40(*(undefined4 *)((long)param_1 + 0x4c),iVar5);
        iVar3 = FUN_00546b40((int)param_1[10],iVar5);
        lVar6 = param_1[3];
        iVar4 = FUN_00546b90(*(undefined4 *)((long)param_1 + 0x44));
        FUN_0053e6d0(lVar6,iVar3 * iVar2 * iVar4);
        iVar5 = iVar5 + 1;
      } while ((int)lVar1 != iVar5);
    }
  }
  thunk_FUN_005464f0(param_1);
  return;
}


