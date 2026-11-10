/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f76a0; name: FUN_007f76a0
 */


void FUN_007f76a0(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  pvVar1 = operator_new(0x68);
  FUN_00860e80();
  DAT_029f5598 = pvVar1;
  puVar2 = operator_new(0x48);
  pvVar3 = operator_new(8);
  FUN_008013b0();
  *puVar2 = pvVar3;
  puVar2[1] = pvVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  pvVar1 = operator_new(0x1b8);
  FUN_007dfcf0();
  *(undefined2 *)(puVar2 + 5) = 1;
  puVar2[4] = pvVar1;
  *(undefined1 *)((long)puVar2 + 0x2a) = 0;
  puVar2[8] = 0;
  DAT_029f5590 = puVar2;
  puVar2[7] = 0;
  puVar2[6] = puVar2 + 7;
  FUN_008010b0(&LAB_007f7740);
  return;
}


