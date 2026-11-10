/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5b530; name: FUN_00a5b530
 */


undefined8 FUN_00a5b530(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)0x0) {
    return 4;
  }
  if ((param_2 & 1) != 0) {
    FUN_0077f310();
    plVar1 = *(long **)(param_1 + 0x68);
  }
  uVar2 = (**(code **)(*plVar1 + 0x50))();
  if (*(char *)(param_1 + 0x90) != '\0') {
    return uVar2;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if ((int)uVar2 == 2) {
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    return uVar2;
  }
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  return uVar2;
}


