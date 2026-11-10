/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd7150; name: FUN_00fd7150
 */


bool FUN_00fd7150(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 local_38;
  long local_28;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_28 = *(long *)(lVar3 + 0x58);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00fd74c0(&local_38,lVar3,&local_28,0,"View_PlaceName");
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x18) = local_38;
    *(undefined4 *)(param_1 + 0x24) = 1;
    cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0xc0);
  }
  else {
    if (iVar2 != 1) goto LAB_00fd7224;
    cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0xc0);
  }
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
LAB_00fd7224:
  return iVar2 == 2;
}


