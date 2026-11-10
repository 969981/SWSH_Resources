/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9590; name: FUN_008f9590
 */


uint FUN_008f9590(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x150) != 2) {
    uVar1 = (*(byte *)(param_1 + 0x175) ^ param_2) & 1;
    if (*(int *)(param_1 + 0x150) == 1) {
      puVar4 = &UNK_02149d7e;
      if (*(char *)(*(long *)(param_1 + 0x88) + 0x3b9) != '\x05') {
        puVar4 = &UNK_02149d74;
      }
      uVar3 = FUN_008ef510(1,param_2);
      uVar1 = (uint)(byte)puVar4[(uVar3 & 0xff) + ((ulong)(uVar1 ^ 1) | (ulong)(uVar1 ^ 1) << 2)];
    }
    return uVar1;
  }
  iVar2 = FUN_008ef010(2,*(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
  if (iVar2 - 1U < 3) {
    puVar4 = (&PTR_DAT_02619cb0)[(int)(iVar2 - 1U)];
  }
  else {
    puVar4 = &UNK_02149dc4;
  }
  if ((param_2 & 0xff) < 4) {
    uVar3 = FUN_008ef510(2,param_2);
    return (uint)(byte)puVar4[(uVar3 & 0xff) + (ulong)*(byte *)(param_1 + 0x175) * 5];
  }
  return 1;
}


