/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e14f0; name: FUN_009e14f0
 */


void FUN_009e14f0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_240 [128];
  undefined4 *puVar5;
  int local_28;
  
  if (param_3 != 0) {
    local_28 = -0x28;
    uVar2 = (ulong)param_3;
    puVar1 = (undefined4 *)(PTR_DAT_02718ad8 + 0x78);
    puVar5 = (undefined4 *)register0x00000008;
    do {
      if (local_28 < 0) {
        iVar3 = local_28 + 8;
        if (0 < iVar3) goto LAB_009e1598;
        puVar4 = (undefined4 *)((long)auStack_240 + (long)local_28 + 0x200);
        local_28 = iVar3;
      }
      else {
        iVar3 = local_28;
LAB_009e1598:
        puVar4 = puVar5;
        local_28 = iVar3;
        puVar5 = puVar5 + 2;
      }
      uVar2 = uVar2 - 1;
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
    } while (uVar2 != 0);
    if (7 < param_3) {
      FUN_009e1610(param_1,param_2,PTR_DAT_02718ad8 + 0x78);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  memset(PTR_DAT_02718ad8 + (ulong)param_3 * 4 + 0x78,0,(ulong)(7 - param_3) * 4 + 4);
}


