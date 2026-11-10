/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004776a0; name: FUN_004776a0
 */


void FUN_004776a0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    FUN_00474530(lVar2);
    FUN_00404870(uVar1,lVar2);
    param_1[3] = 0;
  }
  return;
}


