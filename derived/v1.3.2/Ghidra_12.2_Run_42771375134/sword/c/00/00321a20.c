/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00321a20; name: FUN_00321a20
 */


void FUN_00321a20(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *local_140 [32];
  
  uVar4 = 0;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)param_1[0xc];
  }
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = uVar4;
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  local_140[0] = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",local_140);
      pbVar7 = local_140[0];
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,local_140);
      pbVar7 = local_140[0];
    }
    if ((((uVar3 & 1) != 0) && (pbVar7 != (byte *)0x0)) &&
       (uVar5 = (uint)*pbVar7, local_140[0] = pbVar7, *pbVar7 != 0)) {
      do {
        iVar1 = isspace(uVar5);
        if (iVar1 == 0) break;
        pbVar7 = pbVar7 + 1;
        uVar5 = (uint)*pbVar7;
      } while (uVar5 != 0);
                    /* WARNING: Subroutine does not return */
      memset(local_140,0,0x100);
    }
  }
  return;
}


