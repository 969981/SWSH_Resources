/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bdf30; name: FUN_003bdf30
 */


void FUN_003bdf30(long *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    FUN_003bf8a0();
  }
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    *(byte *)((long)puVar1 + 0xc) = *(byte *)((long)puVar1 + 0xc) | 2;
    if ((param_2 & 1) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
    }
    if ((param_3 & 1) != 0) {
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
    }
  }
  return;
}


