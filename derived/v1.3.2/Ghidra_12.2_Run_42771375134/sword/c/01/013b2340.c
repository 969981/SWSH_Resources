/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b2340; name: FUN_013b2340
 */


uint FUN_013b2340(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  char local_58 [8];
  undefined1 auStack_50 [32];
  
  plVar4 = (long *)FUN_012e3520(param_2);
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  iVar2 = FUN_012b9d30(lVar5);
  if (((iVar2 == 7) && (*(char *)(param_1 + 0x94) == '\0')) &&
     (FUN_012b9e80(local_58,lVar5), local_58[0] != '\0')) {
    *(undefined1 *)(param_1 + 0x94) = 1;
    uVar3 = FUN_013b2130(param_1,param_2,auStack_50);
    bVar1 = local_58[0] != '\0';
    local_58[0] = '\0';
    if (bVar1) {
      local_58[0] = '\0';
    }
  }
  else {
    uVar3 = 1;
    FUN_012e7d50(param_2,0x23,1);
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar3 & 1;
}


