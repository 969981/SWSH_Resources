/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00323330; name: FUN_00323330
 */


void FUN_00323330(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_48 [8];
  uint local_40;
  uint uStack_3c;
  byte *local_38;
  uint local_30;
  uint uStack_2c;
  undefined1 auStack_28 [8];
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar4 = 0xc;
  }
  else {
    iVar4 = *(int *)param_1[0xc] + 0xc;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_38 = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar4 = *(int *)(*param_1 + 0x10);
    if (iVar4 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_38);
      uVar1 = local_40;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar4 - 1) * 0x10)
                         ,&local_38);
      uVar1 = local_40;
    }
    if ((((uVar3 & 1) != 0) && (local_38 != (byte *)0x0)) &&
       (local_40 = (uint)*local_38, *local_38 != 0)) {
      uStack_2c = (uint)*local_38;
      if (*local_38 != 0) {
        local_40 = uVar1;
        FUN_00323450(auStack_28,local_48,&local_38);
        uStack_2c = uStack_3c;
      }
      local_30 = local_40;
      (**(code **)(param_2 + 0x20))(param_1[6],&local_38);
      return;
    }
  }
  return;
}


