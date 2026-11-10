/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e44d0; name: FUN_009e44d0
 */


undefined8 FUN_009e44d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008d42a0(param_1 + 0x198,0);
  if (((((((uVar1 & 1) == 0) || (uVar1 = FUN_008d42a0(param_1 + 0x1a8,0), (uVar1 & 1) == 0)) ||
        (uVar1 = FUN_008d42a0(param_1 + 0x1b8,0), (uVar1 & 1) == 0)) ||
       ((uVar1 = FUN_008d42a0(param_1 + 0x1c8,0), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_008d42a0(param_1 + 0x1d8,0), (uVar1 & 1) == 0)))) ||
      ((uVar1 = FUN_008d42a0(param_1 + 0x1e8,0), (uVar1 & 1) == 0 ||
       ((uVar1 = FUN_008d42a0(param_1 + 0x1f8,0), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_008d42a0(param_1 + 0x208,0), (uVar1 & 1) == 0)))))) ||
     ((uVar1 = FUN_008d42a0(param_1 + 0x218,0), (uVar1 & 1) == 0 ||
      ((uVar1 = FUN_008d42a0(param_1 + 0x228,0), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_008d42a0(param_1 + 0x238,0), (uVar1 & 1) == 0)))))) {
    return 0;
  }
  uVar2 = FUN_008d42a0(param_1 + 0x248,0);
  return uVar2;
}


