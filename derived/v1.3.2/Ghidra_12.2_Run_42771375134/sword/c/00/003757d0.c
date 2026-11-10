/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003757d0; name: FUN_003757d0
 */


void FUN_003757d0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 local_68 [20];
  uint uStack_54;
  uint local_50;
  byte *local_48 [2];
  uint uStack_34;
  uint local_30;
  undefined1 auStack_28 [8];
  
  local_48[0] = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar3 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,"bad__repx__name",local_48);
      uVar2 = uStack_54;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,local_48);
      uVar2 = uStack_54;
    }
    if ((((uVar4 & 1) != 0) && (local_48[0] != (byte *)0x0)) &&
       (uStack_54 = (uint)*local_48[0], *local_48[0] != 0)) {
      local_30 = (uint)*local_48[0];
      if (*local_48[0] != 0) {
        uStack_54 = uVar2;
        FUN_00325ee0(auStack_28,local_68,local_48);
        local_30 = local_50;
      }
      uStack_34 = uStack_54;
      (**(code **)(*(long *)(param_3 + 0x10) + 0x10))
                (param_1[6],*(undefined4 *)(param_3 + 8),local_48);
      return;
    }
  }
  return;
}


