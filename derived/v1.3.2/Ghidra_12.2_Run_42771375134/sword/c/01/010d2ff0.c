/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d2ff0; name: FUN_010d2ff0
 */


void FUN_010d2ff0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0x307f1f87c63240c1;
  }
  else {
    uVar1 = 0x307b9e87c62f2fb7;
  }
  FUN_010d2e60(param_1,uVar1,0xcc0cfcb797e44c58);
  FUN_010d2e60(param_1,0x307b9f87c62f316a,0x5f635651ac509cb1);
  return;
}


