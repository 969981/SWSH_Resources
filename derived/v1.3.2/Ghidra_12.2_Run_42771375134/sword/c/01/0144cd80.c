/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144cd80; name: FUN_0144cd80
 */


bool FUN_0144cd80(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  pcVar2 = (char *)FUN_0152d900(lVar3,param_2);
  cVar1 = *pcVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return cVar1 == '\x02';
}


