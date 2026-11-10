/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131cb60; name: FUN_0131cb60
 */


int FUN_0131cb60(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_0131cbc4;
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        goto LAB_0131cbc4;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_0131cbc4:
  local_48 = 0xeb8cb4cd665fb6aa;
  local_40 = "app_state";
  local_38 = 9;
  local_30 = 0;
  uVar4 = FUN_0069d0f0(puVar5,&local_48);
  local_28 = uVar4;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))((long *)(local_30 + 0x48));
    uVar4 = local_28 & 0xff;
    local_30 = 0;
  }
  if (((uVar4 & 0xff) == 0) || (iVar1 = FUN_0069d130(puVar5,&local_28), iVar1 == 3)) {
    local_48 = 0xa5969c5652ac3ff4;
    local_40 = "fi_move_speed";
    local_38 = 0xd;
    local_30 = 0;
    uVar4 = FUN_0069d160(puVar5,&local_48);
    local_28 = uVar4;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))((long *)(local_30 + 0x48));
      uVar4 = local_28 & 0xff;
      local_30 = 0;
    }
    if ((uVar4 & 0xff) != 0) {
      fVar6 = (float)FUN_0069d1a0(puVar5,&local_28);
      iVar1 = 3;
      if (fVar6 != 1.0) {
        iVar1 = (uint)(0.5 <= fVar6) << 1;
      }
      return iVar1;
    }
  }
  return 0;
}


