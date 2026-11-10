/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c9600; name: FUN_008c9600
 */


undefined4 FUN_008c9600(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0146c3c0(*(long *)(param_1 + 0x718) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x5f0) + 0x1c) * 0x218);
  uVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),
                       PTR_DAT_02717b00 + (ulong)*(uint *)(*(long *)(param_1 + 0x5f0) + 0x1c) * 8);
  FUN_00ffd840(param_1 + 0x100,uVar2);
  return uVar1;
}


