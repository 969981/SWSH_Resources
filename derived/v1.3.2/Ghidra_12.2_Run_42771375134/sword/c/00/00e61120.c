/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61120; name: FUN_00e61120
 */


int FUN_00e61120(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = snprintf((char *)(param_1 + 0xb90),0x40,"%s",*(undefined8 *)(param_2 + 8));
  *(bool *)(param_1 + 0xb38) = **(char **)(param_2 + 8) != '\0';
  return iVar1;
}


