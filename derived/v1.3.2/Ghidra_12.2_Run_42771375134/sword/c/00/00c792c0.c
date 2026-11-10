/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c792c0; name: FUN_00c792c0
 */


void FUN_00c792c0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  char *__dest;
  long lVar4;
  char acStack_b0 [128];
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x68) + 1;
  }
  sVar2 = strlen((char *)*param_3);
  __dest = acStack_b0 + (0x80 - (lVar3 + sVar2 + 0xf & 0xfffffffffffffff0));
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x60);
  }
  strcat(__dest,(char *)*puVar1);
  strcat(__dest,(char *)*param_3);
  FUN_0010d170(param_1,__dest);
  return;
}


