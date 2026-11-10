/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c9590; name: FUN_008c9590
 */


void FUN_008c9590(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),
                       PTR_DAT_02717b00 + (param_2 & 0xffffffff) * 8);
  FUN_00ffd840(param_1 + 0x100,uVar1);
  return;
}


