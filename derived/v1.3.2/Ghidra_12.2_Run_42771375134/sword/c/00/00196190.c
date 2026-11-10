/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00196190; name: FUN_00196190
 */


void FUN_00196190(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_02710c28;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x48);
    uVar5 = 0;
    do {
      uVar7 = *(uint *)(lVar6 + uVar5 * 4);
      if (uVar7 != 0) {
        lVar8 = *(long *)(param_1 + 0x38);
        do {
          lVar1 = lVar8 + (ulong)(*(uint *)(puVar4 + (ulong)((uVar7 & -uVar7) * 0x77cb531 >> 0x1b) *
                                                     4) | (int)uVar5 << 5) * 0x20;
          *(undefined2 *)(lVar1 + 0x1e) = 0;
          *(undefined4 *)(lVar1 + 0xc) = 0;
          uVar7 = uVar7 - 1 & uVar7;
        } while (uVar7 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (iVar2 - 1U >> 5) + 1);
  }
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar2 = iVar3 << 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0019627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,param_1,
             iVar2 + iVar3 * 0x20 + ((iVar3 + 0x1fU >> 3 & 0x1ffffffc) + 0xf & 0x3ffffff0) + 0x60);
  return;
}


