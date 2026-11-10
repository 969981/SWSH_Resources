/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488990; name: FUN_00488990
 */


void FUN_00488990(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = *(long *)(lVar1 + 0x78);
  } while (*(long *)(lVar1 + 0x78) != 0 && (*(uint *)(lVar1 + 0x98) & 0xffe) == 0);
  FUN_00488220(lVar1,param_2);
  if (param_4 == 0) {
    return;
  }
  FUN_00488420(lVar1,param_2,param_4 + 0x1c);
  return;
}


