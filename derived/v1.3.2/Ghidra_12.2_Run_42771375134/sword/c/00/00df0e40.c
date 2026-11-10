/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0e40; name: FUN_00df0e40
 */


void FUN_00df0e40(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  FUN_00deec30(param_1,1);
  if ((*(char *)(param_1 + 0xe3) == '\0') && (*(int *)(param_1 + 0xe8) == 2)) {
    FUN_00def150(param_1);
  }
  FUN_00dee9e0(param_1);
  if (*(long *)(param_1 + 0x120) == -0x340d631b7bddd9bb) {
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    uVar1 = FUN_015114c0(lVar2,*(undefined8 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00df0f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      return;
    }
  }
  return;
}


