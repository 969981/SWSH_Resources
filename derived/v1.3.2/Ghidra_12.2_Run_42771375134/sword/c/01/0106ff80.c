/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ff80; name: FUN_0106ff80
 */


undefined8 FUN_0106ff80(undefined4 param_1,long param_2)

{
  switch(param_1) {
  case 0:
    return *(undefined8 *)(param_2 + 0x18);
  case 1:
    return *(undefined8 *)(param_2 + 0x28);
  case 2:
  case 4:
  case 6:
  case 7:
    return *(undefined8 *)(param_2 + 0x20);
  case 3:
  case 5:
    return *(undefined8 *)(param_2 + 0x18);
  default:
    return 0xcbf29ce484222645;
  }
}


