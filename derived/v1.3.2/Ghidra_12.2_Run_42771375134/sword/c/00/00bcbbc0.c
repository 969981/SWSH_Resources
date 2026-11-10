/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcbbc0; name: FUN_00bcbbc0
 */


undefined8 FUN_00bcbbc0(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x620) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x618) == 1) {
    puVar1 = (undefined4 *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
    uVar4 = *puVar1;
    uVar5 = (uint)*(byte *)(puVar1 + 1);
    uVar3 = (uint)*(byte *)((long)puVar1 + 5);
  }
  else {
    puVar1 = (undefined4 *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    uVar5 = uVar3 & 0xff;
    uVar3 = FUN_00bcfb20(uVar4,uVar3 >> 8 & 0x3f,uVar3 >> 0xe & 0x3f);
  }
  uVar2 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),uVar4,uVar5,uVar3);
  return uVar2;
}


