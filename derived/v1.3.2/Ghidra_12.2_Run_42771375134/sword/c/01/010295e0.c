/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010295e0; name: FUN_010295e0
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_010295e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  if (*(long *)(param_1 + 0x170) == 0) {
    uVar2 = 0;
LAB_01029634:
    local_28 = 0;
  }
  else {
    FUN_01029800(&local_28);
    if (local_28 == 0) {
      uVar2 = 0;
      lVar1 = *(long *)(param_1 + 0x68);
      goto joined_r0x0102963c;
    }
    lVar1 = FUN_011b7ff0();
    uVar2 = (ulong)(lVar1 != 0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      goto LAB_01029634;
    }
  }
  lVar1 = *(long *)(param_1 + 0x68);
joined_r0x0102963c:
  if (lVar1 == 0) {
    if ((int)uVar2 == 0) {
      return 0;
    }
  }
  else if ((int)uVar2 == 0 && *(char *)(lVar1 + 0x170) == '\0') {
    return 0;
  }
  if ((*(long *)(param_1 + 0x170) != 0) && (FUN_01029800(&local_28), local_28 != 0)) {
    lVar1 = FUN_011b7ff0();
    if (lVar1 != 0) {
      uVar2 = FUN_011b7ff0(local_28);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    if (lVar1 != 0) {
      return uVar2;
    }
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x170) == '\0')) {
    return 0;
  }
  return *(long *)(lVar1 + 400) + *(long *)(param_1 + 0x178);
}


