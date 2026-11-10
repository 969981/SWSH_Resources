/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00125840; name: FUN_00125840
 */


void FUN_00125840(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  if (puVar2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  *(undefined4 *)param_1 = *puVar2;
  *(undefined4 *)((long)param_1 + 4) = puVar2[1];
  *(undefined4 *)(param_1 + 1) = puVar2[2];
  *(undefined4 *)((long)param_1 + 0xc) = puVar2[3];
  *(undefined4 *)(param_1 + 2) = puVar2[4];
  *(undefined4 *)((long)param_1 + 0x14) = puVar2[5];
  uVar1 = puVar2[7];
  *(undefined4 *)(param_1 + 3) = puVar2[6];
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  return;
}


