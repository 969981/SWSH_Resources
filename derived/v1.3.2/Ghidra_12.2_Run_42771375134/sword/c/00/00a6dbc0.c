/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6dbc0; name: FUN_00a6dbc0
 */


void FUN_00a6dbc0(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  pcVar4 = *(code **)(param_1 + 0x1790);
  uVar5 = *(ulong *)(param_1 + 0x1798) & 1;
  if (uVar5 != 0 || pcVar4 != (code *)0x0) {
    if (uVar5 != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0x1798) >> 1)));
    }
    uVar5 = (*pcVar4)();
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x1790) = 0;
      *(undefined8 *)(param_1 + 0x1798) = 0;
    }
  }
  iVar2 = FUN_00b18030(*(undefined8 *)(param_1 + 0x4e8));
  *(int *)(param_1 + 6000) = iVar2;
  if (iVar2 == 0) {
    iVar3 = FUN_00b18050(*(undefined8 *)(param_1 + 0x4e8));
    iVar2 = -2;
    if (iVar3 != 0) {
      iVar2 = 0;
    }
    cVar1 = *(char *)(*(long *)(param_1 + 0x4e8) + 0x70);
  }
  else {
    cVar1 = *(char *)(*(long *)(param_1 + 0x4e8) + 0x70);
  }
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x1778);
    if ((iVar2 < iVar3) || (*(char *)(param_1 + 0x1775) != '\0')) {
      if (*(char *)(param_1 + 0x1774) != '\0') {
        if (iVar3 < 0) {
          *(int *)(param_1 + 0x1778) = iVar3 + 2;
          return;
        }
        *(char *)(param_1 + 0x1774) = '\0';
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1775) = 1;
      if (*(uint *)(param_1 + 0x16fc) != 0xff) {
        lVar6 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x16fc) * 8 + 0x548);
        if (lVar6 == 0) {
          FUN_00ad3610(0,*(undefined4 *)(param_1 + 0x177c));
          return;
        }
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_00ad3610(lVar6,*(undefined4 *)(param_1 + 0x177c));
                    /* WARNING: Could not recover jumptable at 0x00a6dd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return;
      }
    }
  }
  return;
}


