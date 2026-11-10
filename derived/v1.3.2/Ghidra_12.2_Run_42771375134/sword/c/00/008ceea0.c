/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ceea0; name: FUN_008ceea0
 */


void FUN_008ceea0(long param_1,ulong param_2)

{
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x648) != '\0') {
    FUN_00ffa290(param_1,1,1);
    FUN_00ffa160(param_1,1,1);
    return;
  }
  FUN_010364c0(param_1,2);
  *(undefined1 *)(param_1 + 0x648) = 1;
  if ((param_2 & 1) != 0) {
    local_28 = 0xd5a646e9eb5de80c;
    FUN_00ffd010(param_1 + 0x100,&local_28);
    local_28 = 0xdb06e96697a89774;
    FUN_00ffd010(param_1 + 0x100,&local_28);
  }
  return;
}


