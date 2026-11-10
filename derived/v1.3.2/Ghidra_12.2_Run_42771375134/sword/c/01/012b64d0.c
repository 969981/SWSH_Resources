/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b64d0; name: FUN_012b64d0
 */


undefined8 FUN_012b64d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0131ad60(*(undefined8 *)(param_1 + 0x60));
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0x60)), (uVar1 & 1) == 0)) ||
      ((uVar1 = FUN_0131ad60(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) == 0 &&
       (uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) == 0)))) ||
     ((((uVar1 = FUN_0131ad60(*(undefined8 *)(param_1 + 0xa0)), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xa0)), (uVar1 & 1) == 0)) ||
       ((uVar1 = FUN_0131ad60(*(undefined8 *)(param_1 + 0xc0)), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar1 & 1) == 0)))) ||
      (((uVar1 = FUN_0131ad60(*(undefined8 *)(param_1 + 0xe0)), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xe0)), (uVar1 & 1) == 0)) ||
       ((uVar1 = FUN_0131ad60(*(undefined8 *)(param_1 + 0x100)), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0x100)), (uVar1 & 1) == 0)))))))) {
    return 0;
  }
  return 1;
}


