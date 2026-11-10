/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00110b40; name: FUN_00110b40
 */


void FUN_00110b40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_LAB_02710bc8;
  puVar2 = PTR_LAB_02710bc0;
  puVar1 = PTR_PTR_02710bb0;
  *(undefined **)(PTR_PTR_02710bb0 + 0x30) = PTR_LAB_02710bb8;
  puVar4 = PTR_LAB_02710bd0;
  *(undefined **)(puVar1 + 0xa0) = puVar2;
  puVar2 = PTR_PTR_02710bd8;
  *(undefined **)(puVar1 + 0xd8) = puVar3;
  puVar3 = PTR_LAB_02710be0;
  *(undefined **)(puVar1 + 0x110) = puVar4;
  puVar1 = PTR_LAB_02710be8;
  *(undefined **)(puVar2 + 0x30) = puVar3;
  puVar3 = PTR_LAB_02710bf0;
  *(undefined **)(puVar2 + 0xa0) = puVar1;
  puVar1 = PTR_LAB_02710bf8;
  *(undefined **)(puVar2 + 0xd8) = puVar3;
  *(undefined **)(puVar2 + 0x110) = puVar1;
  *PTR_DAT_02710c00 = 1;
  return;
}


