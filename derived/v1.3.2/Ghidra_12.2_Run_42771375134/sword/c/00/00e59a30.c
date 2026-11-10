/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e59a30; name: FUN_00e59a30
 */


undefined8 FUN_00e59a30(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x458);
  if (lVar2 != -0x340d631b7bddd9bb) {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    uVar1 = FUN_01510f00(lVar3,lVar2);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x468) != '\0') {
    if (*(long *)(param_1 + 0x460) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x460) + 0x54) == 0) {
      return 0;
    }
  }
  return 1;
}


