/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00573200; name: FUN_00573200
 */


undefined8 FUN_00573200(undefined8 param_1)

{
  undefined8 uVar1;
  int in_w5;
  undefined4 in_w6;
  
  if (3 < in_w5 - 1U) {
    return 0xfffffffc;
  }
  switch(in_w5) {
  case 1:
    uVar1 = FUN_00571d00(param_1,in_w6);
    return uVar1;
  case 2:
    uVar1 = FUN_00572010(param_1,in_w6);
    return uVar1;
  case 3:
    uVar1 = FUN_00572300(param_1,in_w6);
    return uVar1;
  case 4:
    uVar1 = FUN_00572640(param_1,in_w6);
    return uVar1;
  default:
    return 0;
  }
}


