/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c2510; name: FUN_003c2510
 */


void FUN_003c2510(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *local_58;
  char local_44 [4];
  
  plVar1 = (long *)FUN_003c1610(param_2);
  if ((*(byte *)(plVar1 + 0xb) >> 2 & 1) != 0) {
    local_58 = plVar1;
    FUN_003c3980(param_1 + 0x278,&local_58);
    *(byte *)(plVar1 + 0xb) = *(byte *)(plVar1 + 0xb) & 0xfb;
  }
  do {
    lVar4 = *plVar1;
    iVar7 = *(int *)(lVar4 + 0x34);
    if (iVar7 != 0) {
      plVar6 = *(long **)(lVar4 + 0x28);
      do {
        iVar7 = iVar7 + -1;
        if ((((*(char *)(*plVar6 + 0x24) == '\x04') &&
             (plVar5 = *(long **)(*plVar6 + 0x28), plVar5 != param_3)) &&
            (uVar2 = FUN_003c52c0(plVar5), (uVar2 & 1) != 0)) &&
           ((*(byte *)(plVar5 + 0x11) & 1) == 0)) {
          local_58 = plVar5;
          plVar3 = (long *)FUN_003c3540(param_1 + 0x240,&local_58,local_44);
          if (local_44[0] == '\0') {
            *plVar3 = (long)local_58;
          }
          *(byte *)(plVar5 + 0x11) = *(byte *)(plVar5 + 0x11) | 1;
        }
        plVar6 = plVar6 + 1;
      } while (iVar7 != 0);
      lVar4 = *plVar1;
    }
    plVar6 = (long *)plVar1[4];
    *(undefined8 *)(lVar4 + 200) = 0;
    if (plVar1[5] != 0) {
      FUN_003c4420(plVar1);
    }
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + -1;
    *plVar1 = *(long *)(param_1 + 0x238);
    *(long **)(param_1 + 0x238) = plVar1;
    plVar1 = plVar6;
  } while (plVar6 != (long *)0x0);
  return;
}


