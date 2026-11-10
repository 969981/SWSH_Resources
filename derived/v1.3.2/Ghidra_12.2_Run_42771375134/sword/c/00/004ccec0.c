/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ccec0; name: FUN_004ccec0
 */


undefined8 FUN_004ccec0(long param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x268);
    }
    *(undefined2 *)(param_1 + 0x54) = uVar5;
    uVar4 = FUN_004cd000(param_1,0);
    iVar2 = (int)uVar4;
  }
  else {
    if (param_2 == 2) {
      *(byte *)(param_1 + 0x20) =
           (byte)(*(uint *)(*(long *)(param_1 + 0x18) + 0x26b) >> 0x14) & 2 |
           *(byte *)(param_1 + 0x20) & 0xfd;
      goto LAB_004ccfd4;
    }
    if (param_2 != 1) goto LAB_004ccfd4;
    if ((param_3 & 1) != 0) {
      iVar2 = FUN_004cc190(param_1);
      iVar3 = FUN_004cd000(param_1,iVar2,param_1 + 0x28);
      if (iVar3 != 1) {
        return 2;
      }
      lVar6 = *(long *)(param_1 + 0x18);
      *(int *)(lVar6 + 0x264) = iVar2 - *(int *)(param_1 + 0x28);
      puVar1 = (uint *)(lVar6 + 0x26b);
      *puVar1 = *puVar1 & 0xfe3fffff;
      goto LAB_004ccfd4;
    }
    puVar7 = (undefined4 *)(param_1 + 0x28);
    iVar2 = FUN_004cd000(param_1,*puVar7,puVar7);
    if (iVar2 == 1) goto LAB_004ccfd4;
    uVar4 = FUN_004cd000(param_1,0,puVar7);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 1) {
    return uVar4;
  }
LAB_004ccfd4:
                    /* WARNING: Could not recover jumptable at 0x004ccfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
  return uVar4;
}


