/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01044a90; name: FUN_01044a90
 */


void FUN_01044a90(long param_1)

{
  long lVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0102ad30(&local_58);
  if (*(uint *)(param_1 + 0x28c) == 0xffffffff) {
    lVar1 = *(long *)(param_1 + 0x200);
    if ((lVar1 != 0) && ((*(long *)(lVar1 + 0x20) != 0 || (*(long *)(lVar1 + 0x28) != 0)))) {
      *(undefined8 *)(lVar1 + 0x40) = uStack_50;
      *(undefined8 *)(lVar1 + 0x48) = local_48;
      *(undefined8 *)(lVar1 + 0x38) = local_58;
      *(undefined8 *)(lVar1 + 0x60) = local_30;
      *(undefined8 *)(lVar1 + 0x68) = uStack_28;
      *(undefined8 *)(lVar1 + 0x50) = local_40;
      *(undefined8 *)(lVar1 + 0x58) = uStack_38;
      FUN_011f3720(param_1 + 0x2d0,*(undefined8 *)(param_1 + 0x200));
    }
    lVar1 = *(long *)(param_1 + 0x208);
    if ((lVar1 != 0) && ((*(long *)(lVar1 + 0x20) != 0 || (*(long *)(lVar1 + 0x28) != 0)))) {
      *(undefined8 *)(lVar1 + 0x40) = uStack_50;
      *(undefined8 *)(lVar1 + 0x48) = local_48;
      *(undefined8 *)(lVar1 + 0x38) = local_58;
      *(undefined8 *)(lVar1 + 0x60) = local_30;
      *(undefined8 *)(lVar1 + 0x68) = uStack_28;
      *(undefined8 *)(lVar1 + 0x50) = local_40;
      *(undefined8 *)(lVar1 + 0x58) = uStack_38;
      FUN_011f3720(param_1 + 0x2d0,*(undefined8 *)(param_1 + 0x208));
    }
    lVar1 = *(long *)(param_1 + 0x210);
    if (lVar1 == 0) {
      return;
    }
    if ((*(long *)(lVar1 + 0x20) == 0) && (*(long *)(lVar1 + 0x28) == 0)) {
      return;
    }
    *(undefined8 *)(lVar1 + 0x40) = uStack_50;
    *(undefined8 *)(lVar1 + 0x48) = local_48;
    *(undefined8 *)(lVar1 + 0x38) = local_58;
    *(undefined8 *)(lVar1 + 0x60) = local_30;
    *(undefined8 *)(lVar1 + 0x68) = uStack_28;
    *(undefined8 *)(lVar1 + 0x50) = local_40;
    *(undefined8 *)(lVar1 + 0x58) = uStack_38;
    lVar1 = *(long *)(param_1 + 0x210);
  }
  else {
    lVar1 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x28c) * 8 + 0x200);
    *(undefined8 *)(lVar1 + 0x38) = local_58;
    *(undefined8 *)(lVar1 + 0x40) = uStack_50;
    *(undefined8 *)(lVar1 + 0x48) = local_48;
    *(undefined8 *)(lVar1 + 0x60) = local_30;
    *(undefined8 *)(lVar1 + 0x68) = uStack_28;
    *(undefined8 *)(lVar1 + 0x50) = local_40;
    *(undefined8 *)(lVar1 + 0x58) = uStack_38;
  }
  FUN_011f3720(param_1 + 0x2d0,lVar1);
  return;
}


