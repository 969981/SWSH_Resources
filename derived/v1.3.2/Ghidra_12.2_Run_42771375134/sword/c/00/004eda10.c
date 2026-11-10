/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eda10; name: FUN_004eda10
 */


undefined8 FUN_004eda10(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x1ec]) {
    if (puVar1[0x1ee] != 0) goto LAB_004edacc;
  }
  puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0xf78);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x52] = puVar1 + 0x29;
    puVar1[0x7b] = puVar1 + 0x52;
    puVar1[0xa4] = puVar1 + 0x7b;
    puVar1[0xf6] = puVar1 + 0xcd;
    puVar1[0xcd] = puVar1 + 0xa4;
    puVar1[0x148] = puVar1 + 0x11f;
    puVar1[0x11f] = puVar1 + 0xf6;
    puVar1[0x19a] = puVar1 + 0x171;
    puVar1[0x171] = puVar1 + 0x148;
    puVar1[0x1ee] = puVar1 + 0x1c3;
    puVar1[0x1ec] = 0;
    *puVar1 = 0;
    puVar1[0x29] = puVar1;
    puVar1[0x1c3] = puVar1 + 0x19a;
    *(undefined4 *)(puVar1 + 0x1ed) = 0xc;
    if (*(long *)(param_1 + 0x60) == 0) {
      *(undefined8 **)(param_1 + 0x60) = puVar1;
      puVar1[0x1ec] = 0;
      plVar2 = (long *)puVar1[0x1ee];
    }
    else {
      puVar1[0x1ec] = *(long *)(param_1 + 0x60);
      *(undefined8 **)(param_1 + 0x60) = puVar1;
LAB_004edacc:
      plVar2 = (long *)puVar1[0x1ee];
    }
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x1ee] = 0;
      }
      else {
        puVar1[0x1ee] = *plVar2;
      }
      *(int *)(puVar1 + 0x1ed) = *(int *)(puVar1 + 0x1ed) + -1;
      *(undefined4 *)plVar2 = 0;
      *(long **)(param_1 + 0x50) = plVar2;
      *(undefined4 *)((long)plVar2 + 4) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0x40860a91;
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_004ed820(param_1);
  return 0x34;
}


