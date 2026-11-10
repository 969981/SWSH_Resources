/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f4b90; name: FUN_011f4b90
 */


undefined4 FUN_011f4b90(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 auStack_1138 [3344];
  undefined4 auStack_428 [3];
  byte local_41c;
  byte local_3fc;
  
  if ((((*(long *)(param_1 + 0x80) == 0) || (lVar4 = *(long *)PTR_DAT_02716710, lVar4 == 0)) ||
      (plVar1 = (long *)FUN_01962a40(lVar4), plVar1 == (long *)0x0)) ||
     ((lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x80)), lVar2 == 0 ||
      (lVar2 = FUN_01962f30(lVar4), lVar2 == 0)))) {
    return *(undefined4 *)(param_1 + 0x6c);
  }
  lVar4 = FUN_01962f30(lVar4);
  if (lVar4 != 0) {
    FUN_019637e0(auStack_1138);
  }
  memcpy(auStack_1138,(void *)(lVar2 + 0x20),0x1108);
  if ((local_41c & 1) == 0) {
    if ((local_3fc & 1) == 0) {
      puVar3 = (undefined4 *)(param_1 + 0x6c);
      goto LAB_011f4c64;
    }
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
  }
  puVar3 = auStack_428 + lVar4 * 8;
LAB_011f4c64:
  return *puVar3;
}


