/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734cb0; name: FUN_00734cb0
 */


void FUN_00734cb0(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_02715500;
  lVar4 = *(long *)(param_1 + 0xb8) + param_2 * 0x10;
  iVar2 = *(int *)(lVar4 + 8);
  iVar5 = *(int *)(lVar4 + 0xc);
  if (iVar2 < iVar5) {
    lVar4 = (long)iVar2 << 6;
    iVar5 = iVar5 - iVar2;
    do {
      lVar1 = *(long *)(param_1 + 0xe8) + lVar4;
      FUN_0199e120(*(long *)(param_3 + 0x58) + (long)*(int *)puVar3 * 0x170,
                   *(undefined4 *)(lVar1 + 0x3c),*(undefined4 *)(lVar1 + 0x38),
                   *(long *)(param_1 + 0xe8) + lVar4 + (long)*(int *)puVar3 * 8 + 0x28);
      lVar4 = lVar4 + 0x40;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


