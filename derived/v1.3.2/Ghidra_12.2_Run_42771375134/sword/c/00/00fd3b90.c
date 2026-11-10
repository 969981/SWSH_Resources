/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd3b90; name: FUN_00fd3b90
 */


void FUN_00fd3b90(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x7c0) != '\0') {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_01558250(lVar1,0,*(undefined4 *)(param_1 + 0x630));
    FUN_01558250(lVar1,1,*(undefined4 *)(param_1 + 0x658));
    FUN_01558250(lVar1,2,*(undefined4 *)(param_1 + 0x680));
    FUN_01558250(lVar1,3,*(undefined4 *)(param_1 + 0x6a8));
    FUN_01558250(lVar1,4,*(undefined4 *)(param_1 + 0x6d0));
    FUN_01558250(lVar1,5,*(undefined4 *)(param_1 + 0x6f8));
    FUN_01558250(lVar1,6,*(undefined4 *)(param_1 + 0x720));
    FUN_01558250(lVar1,7,*(undefined4 *)(param_1 + 0x748));
    FUN_01558250(lVar1,8,*(undefined4 *)(param_1 + 0x770));
    FUN_01558250(lVar1,9,*(undefined4 *)(param_1 + 0x798));
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  *(undefined4 *)PTR_DAT_02722f90 = *(undefined4 *)(param_1 + 0x628);
  return;
}


