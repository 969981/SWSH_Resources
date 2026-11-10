/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d7c0; name: FUN_0049d7c0
 */


uint FUN_0049d7c0(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (puVar3 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8);
        (puVar3 != (uint *)0x0 && (*puVar3 != param_2)); puVar3 = *(uint **)(puVar3 + 2)) {
    }
  }
  if (param_3 != 0) {
    *(bool *)param_3 = puVar3 != (uint *)0x0;
  }
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  return puVar3[4];
}


