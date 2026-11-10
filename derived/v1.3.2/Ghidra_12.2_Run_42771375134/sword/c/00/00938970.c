/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938970; name: FUN_00938970
 */


void FUN_00938970(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_008e0a00(param_2);
    if (cVar1 != '\x1f') {
      FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb7,cVar1,param_3);
      return;
    }
  }
  return;
}


