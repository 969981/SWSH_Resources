/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00557700; name: FUN_00557700
 */


undefined8 FUN_00557700(long param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = FUN_00556ca0();
  uVar4 = FUN_00556fe0(param_1);
  uVar5 = FUN_00557160(param_1);
  uVar6 = FUN_00557420(param_1);
  if (*(int *)(param_1 + 0x200) < 1) {
    bVar1 = true;
    cVar2 = *(char *)(param_1 + 0x368);
  }
  else if (*(int *)(param_1 + 0x210) == -1) {
    bVar1 = *(int *)(param_1 + 0x220) < 1;
    cVar2 = *(char *)(param_1 + 0x368);
  }
  else {
    bVar1 = false;
    cVar2 = *(char *)(param_1 + 0x368);
  }
  if (cVar2 != '\0') {
    bVar1 = (bool)(bVar1 & *(long *)(param_1 + 0x360) == 0);
  }
  if ((((bVar1) && (((uVar3 | uVar4 | uVar5 | uVar6) & 1) == 0)) && (*(int *)(param_1 + 500) < 1))
     && (((*(float *)(param_1 + 0x418) == 0.0 && (*(char *)(param_1 + 0xc4) == '\0')) &&
         (*(char *)(param_1 + 0x26c) == '\0')))) {
    return 1;
  }
  return 0;
}


