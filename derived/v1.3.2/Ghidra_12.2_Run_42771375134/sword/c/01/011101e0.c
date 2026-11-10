/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011101e0; name: FUN_011101e0
 */


void FUN_011101e0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar4;
  long lVar3;
  long local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  *param_1 = param_2;
  plVar1 = *(long **)(param_2 + 0x80);
  for (plVar4 = *(long **)(param_2 + 0x78); plVar1 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_60,*plVar4 + 0x5c0);
    lVar3 = local_60;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar3 == 0x53ffffdf53d3dd19) {
      if (*(long **)(param_2 + 0x80) != plVar4) goto LAB_0111026c;
      goto LAB_01110298;
    }
  }
  plVar4 = plVar1;
  if (*(long **)(param_2 + 0x80) != plVar1) {
LAB_0111026c:
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      uVar2 = FUN_010ef6c0(lVar3 + 0x50);
      if ((uVar2 & 1) == 0) {
        lVar3 = 0;
      }
      goto LAB_0111029c;
    }
  }
LAB_01110298:
  lVar3 = 0;
LAB_0111029c:
  param_1[1] = lVar3;
  local_60 = 0x2651d5ef7b32db44;
  pcStack_58 = "message";
  local_50 = 7;
  local_48 = 0;
  lVar3 = FUN_010ff3e0(param_2,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  param_1[2] = lVar3;
  local_60 = -0x7cfc1f1e05c7572f;
  pcStack_58 = "optionbar";
  local_50 = 9;
  local_48 = 0;
  lVar3 = FUN_0089c480(param_2,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  param_1[3] = lVar3;
  FUN_010f5c00(param_1 + 4,param_2);
  return;
}


