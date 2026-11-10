/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00879070; name: FUN_00879070
 */


undefined8 FUN_00879070(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_0086a460(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 1:
    uVar1 = FUN_0086a5a0(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 2:
    uVar1 = FUN_0086a6e0(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 3:
    uVar1 = FUN_0086a820(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 4:
    uVar1 = FUN_0086a960(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  case 5:
    uVar1 = FUN_0086aaa0(*(undefined8 *)(param_1 + 0x98));
    return uVar1;
  default:
    return 0;
  }
}


