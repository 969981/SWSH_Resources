/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1830; name: FUN_008e1830
 */


undefined8 FUN_008e1830(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x460) == 0) ||
     (uVar1 = FUN_00932f50(*(long *)(param_1 + 0x460),*(undefined2 *)(param_1 + 0x338)),
     (uVar1 & 1) != 0)) {
    return 0;
  }
  uVar2 = FUN_00932f40(*(undefined8 *)(param_1 + 0x460));
  return uVar2;
}


