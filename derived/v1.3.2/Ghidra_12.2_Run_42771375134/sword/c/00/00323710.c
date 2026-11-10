/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00323710; name: FUN_00323710
 */


void FUN_00323710(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *local_140 [32];
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar1 = 0x28;
  }
  else {
    iVar1 = *(int *)param_1[0xc] + 0x28;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar1;
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_140[0] = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",local_140);
      pbVar6 = local_140[0];
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,local_140);
      pbVar6 = local_140[0];
    }
    if ((((uVar3 & 1) != 0) && (pbVar6 != (byte *)0x0)) &&
       (uVar4 = (uint)*pbVar6, local_140[0] = pbVar6, *pbVar6 != 0)) {
      do {
        iVar1 = isspace(uVar4);
        if (iVar1 == 0) break;
        pbVar6 = pbVar6 + 1;
        uVar4 = (uint)*pbVar6;
      } while (uVar4 != 0);
                    /* WARNING: Subroutine does not return */
      memset(local_140,0,0x100);
    }
  }
  return;
}


