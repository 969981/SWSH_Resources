/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008012b0; name: FUN_008012b0
 */


void FUN_008012b0(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *local_48;
  undefined *puStack_40;
  undefined1 local_38;
  
  if (*param_1 == 3) {
    iVar2 = 3;
  }
  else {
    if (*(long *)PTR_DAT_02716ed0 != 2) {
      local_38 = 0;
      local_48 = PTR_DAT_02716670 + 0x10;
      puStack_40 = PTR_LAB_02716ed8;
      FUN_00801c10(PTR_DAT_02716ed0,&local_48);
    }
    uVar1 = DAT_029f55f0;
    FUN_00801420(DAT_029f55f0);
    iVar2 = DAT_029f55e8;
    FUN_008014c0(uVar1);
    if (0 < iVar2) goto LAB_00801360;
    iVar2 = *param_1;
  }
  (*(code *)PTR_FUN_02613600)(iVar2,*(undefined8 *)(param_1 + 2),param_1[4],param_1 + 6);
LAB_00801360:
  if (*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


