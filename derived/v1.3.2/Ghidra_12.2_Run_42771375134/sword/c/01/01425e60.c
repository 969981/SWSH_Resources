/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01425e60; name: FUN_01425e60
 */


void FUN_01425e60(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char *__dest;
  char acStack_b0 [128];
  
  __dest = acStack_b0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) +
                    *(long *)(param_4 + 0x10) + 0x10U & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,*(char **)(param_2 + 8));
  strcat(__dest,*(char **)(param_3 + 8));
  strcat(__dest,*(char **)(param_4 + 8));
  FUN_0010d170(param_1,__dest);
  return;
}


