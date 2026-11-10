/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00153010; name: FUN_00153010
 */


void FUN_00153010(ulong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (*(uint *)((long)param_2 + 0xc) & 0x7fffffff))
  {
    FUN_00145a30(param_1);
  }
  puVar3 = (undefined4 *)*param_2;
  FUN_00153540(param_1,*(undefined4 *)(param_2 + 1));
  if ((uint)param_1[1] != 0) {
    puVar2 = (undefined4 *)*param_1;
    puVar1 = puVar2 + (ulong)(uint)param_1[1] * 4;
    do {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[2] = puVar3[2];
      puVar2[3] = puVar3[3];
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar2 < puVar1);
  }
  local_40 = 0;
  uStack_38 = 0;
  FUN_00145790(param_1,*(uint *)((long)param_2 + 0xc) & 0x7fffffff,&local_40);
  FUN_00145790(param_1,*(undefined4 *)(param_2 + 1),&local_40);
  return;
}


