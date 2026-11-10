/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb3d30; name: FUN_00fb3d30
 */


void FUN_00fb3d30(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x3f8);
  if ((lVar3 == 0) && (*(long *)(param_1 + 0x400) == 0)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x408);
  if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x414) != '\0') {
      *(undefined4 *)(param_1 + 0x408) = 0;
      lVar3 = *(long *)(param_1 + 0x3f8);
      goto joined_r0x00fb3e00;
    }
  }
  else if (iVar1 == 1) {
    if (*(char *)(lVar3 + 0x58) != '\0') {
      FUN_00fb4760(lVar3);
      *(undefined4 *)(param_1 + 0x408) = 2;
    }
  }
  else if (((iVar1 == 0) && (*(int *)(param_1 + 0x40c) != 0x1e)) &&
          (*(long *)(param_1 + 0x400) == 0)) {
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      lVar2 = *(long *)(param_1 + 0x400);
      *(long *)(param_1 + 0x400) = lVar3;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      FUN_00fb47a0(*(undefined8 *)(param_1 + 0x3f8));
      lVar3 = *(long *)(param_1 + 0x3f8);
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
    }
    FUN_00fb2010(param_1,*(undefined4 *)(param_1 + 0x40c),0);
    *(undefined4 *)(param_1 + 0x40c) = 0x1e;
    *(undefined1 *)(param_1 + 0x414) = 0;
    lVar3 = *(long *)(param_1 + 0x3f8);
    goto joined_r0x00fb3e00;
  }
  lVar3 = *(long *)(param_1 + 0x3f8);
joined_r0x00fb3e00:
  if (lVar3 != 0) {
    FUN_00fb47e0();
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    FUN_00fb47e0();
    lVar3 = *(long *)(param_1 + 0x400);
    if ((*(char *)(lVar3 + 0x5a) != '\0') && (*(undefined8 *)(param_1 + 0x400) = 0, lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00fb3e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


