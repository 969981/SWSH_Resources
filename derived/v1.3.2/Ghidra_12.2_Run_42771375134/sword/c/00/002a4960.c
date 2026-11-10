/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a4960; name: FUN_002a4960
 */


void FUN_002a4960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_002aee90();
  FUN_002c5730();
  puVar3 = PTR_LAB_02711fc0;
  puVar2 = PTR_LAB_02711fb8;
  puVar1 = PTR_PTR_02711f50;
  *(undefined **)(PTR_PTR_02711f50 + 0x30) = PTR_LAB_02711fb0;
  *(undefined **)(puVar1 + 0xa0) = puVar2;
  *(undefined **)(puVar1 + 0xd8) = puVar3;
  *(undefined **)(puVar1 + 0x110) = PTR_LAB_02711fc8;
  return;
}


