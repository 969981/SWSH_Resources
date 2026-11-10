/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa7440; name: FUN_00fa7440
 */


bool FUN_00fa7440(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_011b82a0(param_1 + 0x90,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 200),param_2,
                       param_3);
  if ((uVar1 & 0xff) != 0) {
    FUN_00fa79e0(param_1,uVar1 >> 0x20);
  }
  return (uVar1 & 0xff) != 0;
}


