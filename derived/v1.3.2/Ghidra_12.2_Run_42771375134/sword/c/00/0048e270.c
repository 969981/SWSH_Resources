/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e270; name: FUN_0048e270
 */


undefined8 FUN_0048e270(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar4 = *(long *)(param_1 + 0x200);
  if (lVar4 == 0) {
    return 0;
  }
  plVar6 = *(long **)(lVar4 + 0x70);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
    plVar5 = *(long **)(lVar4 + 0x78);
  }
  else {
    if (plVar6[3] != param_1) {
      plVar6 = (long *)0x0;
    }
    plVar5 = *(long **)(lVar4 + 0x78);
  }
  if ((plVar5 == (long *)0x0) || (plVar5[3] != param_1)) {
    if (plVar6 == (long *)0x0) {
      return 0;
    }
  }
  else {
    plVar6 = plVar5;
  }
  uVar2 = (**(code **)(*plVar6 + 0xa8))(plVar6);
  if ((uVar2 & 1) != 0) {
    local_28 = 0;
    local_2c = 0;
    local_38 = (undefined8 *)0x0;
    FUN_004a7f60(*(undefined8 *)(param_1 + 0x1f8),&local_28,&local_2c,&local_38);
    if (local_28 != 0) {
      iVar1 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_28,*(undefined8 *)(param_1 + 0x290));
      if (iVar1 == 1) {
        uVar2 = (**(code **)(*plVar6 + 0xb8))(plVar6);
        if (((uVar2 & 1) != 0) &&
           (plVar5 = *(long **)(param_1 + 0x200), plVar5[4] == param_1 + 0x18)) {
          (**(code **)(*plVar5 + 0x100))(plVar5,local_28,*(undefined8 *)(param_1 + 0x290));
        }
        uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar2 & 1) != 0) {
          plVar6[2] = (local_28 - *(long *)(param_1 + 0x290)) + plVar6[2];
        }
        if (*(long *)(param_1 + 0x290) != 0) {
          FUN_004a7fd0(*(undefined8 *)(param_1 + 0x1f8));
        }
        puVar3 = *(undefined8 **)(param_1 + 0x198);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,0);
        }
        *(long *)(param_1 + 0x290) = local_28;
        *(undefined8 **)(param_1 + 0x198) = local_38;
        return 1;
      }
      if (local_28 != 0) {
        FUN_004a7fd0(*(undefined8 *)(param_1 + 0x1f8));
      }
      if (local_38 != (undefined8 *)0x0) {
        (**(code **)*local_38)(local_38,0);
      }
    }
  }
  return 0;
}


