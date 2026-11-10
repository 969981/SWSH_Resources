/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5a80; name: FUN_004c5a80
 */


undefined8 FUN_004c5a80(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((((*(long *)(param_1 + 0x138) == 0) ||
        (uVar1 = FUN_004c9b90(*(long *)(param_1 + 0x138),param_2,*(undefined8 *)(param_1 + 0x130)),
        (uVar1 & 1) == 0)) &&
       ((*(long *)(param_1 + 0x1b8) == 0 ||
        (uVar1 = FUN_004c9b90(*(long *)(param_1 + 0x1b8),param_2,*(undefined8 *)(param_1 + 0x1b0)),
        (uVar1 & 1) == 0)))) &&
      ((*(long *)(param_1 + 0x238) == 0 ||
       (uVar1 = FUN_004c9b90(*(long *)(param_1 + 0x238),param_2,*(undefined8 *)(param_1 + 0x230)),
       (uVar1 & 1) == 0)))) &&
     ((*(long *)(param_1 + 0x2b8) == 0 ||
      (uVar1 = FUN_004c9b90(*(long *)(param_1 + 0x2b8),param_2,*(undefined8 *)(param_1 + 0x2b0)),
      (uVar1 & 1) == 0)))) {
    uVar2 = FUN_004c8e50(param_1,param_2);
    return uVar2;
  }
  return 1;
}


