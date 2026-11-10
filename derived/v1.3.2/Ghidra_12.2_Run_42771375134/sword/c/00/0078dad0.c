/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078dad0; name: FUN_0078dad0
 */


undefined8 FUN_0078dad0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_00791bd0(*(undefined8 *)(param_1 + 0x238),uVar2,param_2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  return 0;
}


