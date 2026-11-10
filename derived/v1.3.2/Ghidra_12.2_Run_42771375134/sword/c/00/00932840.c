/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932840; name: FUN_00932840
 */


char FUN_00932840(char *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    if (*(uint *)(param_1 + 4) == 0xff) {
      return '\0';
    }
    iVar1 = *(int *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = iVar1 + 1U;
    if (iVar1 + 1U < *(uint *)(param_1 + 4)) {
      return '\0';
    }
    *param_1 = '\0';
    param_1[0x10] = '\x1f';
  }
  return cVar2;
}


