/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b120; name: FUN_00a0b120
 */


bool FUN_00a0b120(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x29);
  if (param_2 != 0) {
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(param_1 + 0x24) != 0;
    }
    *(bool *)param_2 = bVar2;
    *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x24);
  }
  return cVar1 != '\0';
}


