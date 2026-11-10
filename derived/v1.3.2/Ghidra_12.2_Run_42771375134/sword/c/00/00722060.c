/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00722060; name: FUN_00722060
 */


void FUN_00722060(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_02715500;
  if (0 < *(int *)(param_1 + 0xa4)) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      iVar2 = *(int *)puVar3;
      lVar6 = *(long *)(param_2 + 0x58);
      local_70 = 0;
      uStack_68 = 0;
      lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x58) + lVar5;
      thunk_FUN_0199c850(lVar1,&local_70);
      FUN_0199d200(lVar6 + (long)iVar2 * 0x170,uVar4 & 0xffffffff,&local_70,
                   (long)*(int *)(lVar1 + 0x68),
                   (long)*(int *)(lVar1 + 0x6c) * (long)*(int *)(lVar1 + 0x68));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x70;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0xa4));
  }
  FUN_0199d090(*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,param_1 + 0x58);
  return;
}


