/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109a570; name: FUN_0109a570
 */


void FUN_0109a570(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1d0) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (iVar1 == 0) {
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar2 & 1) != 0) goto LAB_0109a5e0;
    iVar1 = *(int *)(param_1 + 0x1c8);
  }
  if (iVar1 == 1) {
    uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
    if ((uVar2 & 1) != 0) goto LAB_0109a5e0;
    iVar1 = *(int *)(param_1 + 0x1c8);
  }
  if (iVar1 != 2) {
    return;
  }
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar2 & 1) == 0) {
    return;
  }
LAB_0109a5e0:
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x1c8) == 0) {
    *(undefined1 *)(param_1 + 0xa5) = 0;
  }
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  pcVar4 = *(code **)(param_1 + 0x130);
  if (pcVar4 != (code *)0x0) {
    if (*(uint *)(param_1 + 0x1c8) < 2) {
      local_18 = 0;
      puVar3 = &local_18;
    }
    else {
      if (*(uint *)(param_1 + 0x1c8) != 2) {
        return;
      }
      iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x88));
      local_14 = 1;
      if (iVar1 != 0) {
        local_14 = 2;
      }
      pcVar4 = *(code **)(param_1 + 0x130);
      puVar3 = &local_14;
    }
    (*pcVar4)(param_1 + 0x150,puVar3);
  }
  return;
}


