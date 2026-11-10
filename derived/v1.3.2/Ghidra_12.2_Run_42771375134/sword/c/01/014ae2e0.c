/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae2e0; name: FUN_014ae2e0
 */


uint FUN_014ae2e0(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*param_1 == 0) || (iVar1 = FUN_00884820(), iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    do {
      (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,uVar3);
      uVar2 = FUN_014ae0c0();
      uVar4 = uVar4 | uVar2;
      uVar3 = uVar3 + 1;
      uVar2 = FUN_00884820(*param_1);
    } while (uVar3 < uVar2);
  }
  return uVar4 & 1;
}


