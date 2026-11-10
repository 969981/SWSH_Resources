/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045c260; name: FUN_0045c260
 */


undefined4 FUN_0045c260(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*param_1 != 1) {
    return 0;
  }
  uVar1 = (uint)*(ushort *)(*(long *)(param_1 + 2) + 6);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  puVar2 = (undefined4 *)(*(long *)(param_1 + 2) + 4);
  do {
    if (puVar2[-1] == param_2) {
      return *puVar2;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 3;
  } while (uVar3 < uVar1);
  return 0;
}


