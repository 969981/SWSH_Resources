/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00196280; name: FUN_00196280
 */


void FUN_00196280(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_02710c28;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    uVar4 = 0;
    do {
      uVar6 = *(uint *)(lVar5 + uVar4 * 4);
      if (uVar6 != 0) {
        lVar7 = *(long *)(param_1 + 0x38);
        do {
          lVar1 = lVar7 + (ulong)(*(uint *)(puVar3 + (ulong)((uVar6 & -uVar6) * 0x77cb531 >> 0x1b) *
                                                     4) | (int)uVar4 << 5) * 0x20;
          *(undefined2 *)(lVar1 + 0x1e) = 0;
          *(undefined4 *)(lVar1 + 0xc) = 0;
          uVar6 = uVar6 - 1 & uVar6;
        } while (uVar6 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != (iVar2 - 1U >> 5) + 1);
  }
  return;
}


