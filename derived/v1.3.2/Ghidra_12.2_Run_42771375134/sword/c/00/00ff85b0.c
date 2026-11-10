/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff85b0; name: FUN_00ff85b0
 */


uint FUN_00ff85b0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x32);
  if (*(uint *)(param_1 + 0x32) == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = 0;
    uVar3 = 1;
    plVar5 = param_1;
    do {
      plVar5 = plVar5 + 3;
      if (*plVar5 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = FUN_014bc9b0();
        uVar2 = (ulong)*(uint *)(param_1 + 0x32);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 & uVar1;
    } while (uVar4 < uVar2);
  }
  return uVar3;
}


