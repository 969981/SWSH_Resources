/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f06f0; name: FUN_010f06f0
 */


void FUN_010f06f0(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 2:
    FUN_00ffa290(param_1,1,1);
    return;
  case 1:
  case 3:
    FUN_00ffa290(param_1,0,1);
    return;
  default:
    return;
  }
}


