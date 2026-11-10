/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b2ae0; name: FUN_014b2ae0
 */


undefined8 FUN_014b2ae0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_014bc9b0(DAT_02a748d0);
  if ((((uVar1 & 1) == 0) || (uVar1 = FUN_014bc9b0(DAT_02a748d8), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_014bc9b0(DAT_02a748e0), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_014bc9b0(DAT_02a748e8);
  return uVar2;
}


