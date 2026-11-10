/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bfa30; name: FUN_003bfa30
 */


void FUN_003bfa30(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x60) = *puVar2;
  *(undefined4 *)(param_1 + 100) = puVar2[1];
  *(undefined4 *)(param_1 + 0x68) = puVar2[2];
  *(undefined4 *)(param_1 + 0x6c) = puVar2[3];
  *(undefined4 *)(param_1 + 0x70) = puVar2[4];
  *(undefined4 *)(param_1 + 0x74) = puVar2[5];
  *(undefined4 *)(param_1 + 0x78) = puVar2[6];
  if ((*(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x8a0) + 8) + 0x2238) != 0) &&
     (uVar1 = FUN_00191720(), (uVar1 & 1) != 0)) {
    FUN_00191550(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 0x8a0) + 8),
                 *(undefined8 *)(param_1 + 0x88));
  }
  FUN_003d9930(param_1);
  return;
}


