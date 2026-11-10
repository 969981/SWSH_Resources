/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be5f0; name: FUN_003be5f0
 */


void FUN_003be5f0(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    if ((param_3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((long)puVar1 + 0x2c);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((long)puVar1 + 0x24);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((long)puVar1 + 0x34);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(puVar1 + 7);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((long)puVar1 + 0x3c);
    }
    *(int *)(param_2 + 0x224) = *(int *)(param_2 + 0x224) + -1;
    *puVar1 = *(undefined8 *)(param_2 + 0x230);
    *(undefined8 **)(param_2 + 0x230) = puVar1;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


