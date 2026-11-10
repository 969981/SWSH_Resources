/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113e310; name: FUN_0113e310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0113e310(long param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  long local_28;
  
  if (param_2 == 2) {
    uVar2 = 5;
    goto LAB_0113e3a8;
  }
  if (param_2 == 1) {
    uVar2 = 4;
    goto LAB_0113e3a8;
  }
  if (param_2 != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    if (DAT_000003ac != '\0') goto LAB_0113e364;
LAB_0113e3c8:
    if (*(long *)(param_1 + 0x80) == 0) {
      _DAT_00000060 = 4;
      uVar2 = 7;
      goto LAB_0113e3a8;
    }
    FUN_01128420(&local_28);
    *(undefined4 *)(local_28 + 0x60) = 4;
  }
  else {
    FUN_01128420(&local_28);
    cVar1 = *(char *)(local_28 + 0x3ac);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    if (cVar1 == '\0') goto LAB_0113e3c8;
LAB_0113e364:
    if (*(long *)(param_1 + 0x80) == 0) {
      _DAT_00000060 = 2;
      uVar2 = 7;
      goto LAB_0113e3a8;
    }
    FUN_01128420(&local_28);
    *(undefined4 *)(local_28 + 0x60) = 2;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  uVar2 = 7;
LAB_0113e3a8:
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  return;
}


