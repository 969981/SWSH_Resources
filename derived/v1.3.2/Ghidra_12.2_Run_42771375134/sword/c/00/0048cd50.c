/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048cd50; name: FUN_0048cd50
 */


undefined4 FUN_0048cd50(float param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  float local_24;
  
  local_24 = param_1;
  if (param_1 == 1.0) {
    plVar3 = (long *)param_2[0x34];
    uVar4 = *(uint *)(param_2 + 0x35);
    plVar6 = plVar3 + (ulong)uVar4 * 3;
    if (uVar4 != 0) {
      lVar1 = (ulong)uVar4 * 0x18;
      do {
        if ((*plVar3 == *param_3) && ((((uint)*(byte *)(plVar3 + 1) ^ (uint)param_3[1]) & 1) == 0))
        goto LAB_0048cde4;
        lVar1 = lVar1 + -0x18;
        plVar3 = plVar3 + 3;
      } while (lVar1 != 0);
      plVar3 = plVar6;
    }
LAB_0048cde4:
    if (plVar6 != plVar3) {
      if (plVar3 < plVar6 + -3) {
        do {
          plVar5 = plVar3 + 3;
          *plVar3 = *plVar5;
          plVar3[1] = plVar3[4];
          plVar3[2] = plVar3[5];
          plVar3 = plVar5;
        } while (plVar5 < plVar6 + -3);
        uVar4 = *(uint *)(param_2 + 0x35);
      }
      *(uint *)(param_2 + 0x35) = uVar4 - 1;
    }
    uVar2 = 1;
  }
  else {
    lVar1 = FUN_00483f70(param_2 + 0x34,*param_3,param_3[1],&local_24);
    uVar2 = 1;
    if (lVar1 == 0) {
      uVar2 = 2;
    }
  }
  (**(code **)(*param_2 + 0x68))(param_2);
  return uVar2;
}


