/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a1f0; name: FUN_0132a1f0
 */


char FUN_0132a1f0(long *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = '\x02';
  if (param_1[2] == 0) {
    cVar2 = '\x01';
  }
  cVar1 = param_1[2] != 0;
  if (*param_1 != 0) {
    cVar1 = cVar2;
  }
  if (param_1[4] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_1[6] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (cVar1 == '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


