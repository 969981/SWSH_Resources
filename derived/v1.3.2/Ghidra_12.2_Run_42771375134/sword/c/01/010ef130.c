/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ef130; name: FUN_010ef130
 */


undefined8 FUN_010ef130(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0x70));
  if (((((((uVar1 & 1) == 0) &&
         (uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) == 0)) &&
        (uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0x90)), (uVar1 & 1) == 0)) &&
       ((uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xa0)), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xb0)), (uVar1 & 1) == 0)))) &&
      ((uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xc0)), (uVar1 & 1) == 0 &&
       ((uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xd0)), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xe0)), (uVar1 & 1) == 0)))))) &&
     (uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xf0)), (uVar1 & 1) == 0)) {
    uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0x100));
    return uVar2;
  }
  return 1;
}


