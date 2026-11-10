/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c27c20; name: FUN_00c27c20
 */


undefined8 FUN_00c27c20(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_30;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar5 = puVar5 + -10;
        goto LAB_00c27c70;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00c27c70:
  FUN_00c1cce0(&local_28,puVar5);
  lVar2 = FUN_00be53f0(&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar2 == 0) {
    return 1;
  }
  (**(code **)(**(long **)(lVar2 + 0x90) + 0x10))(&local_28);
  local_30 = local_28;
  lVar3 = FUN_00be5600(&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (lVar3 == 0) {
    return 1;
  }
  if (*(char *)(lVar2 + 0x88) != '\0') {
    return 1;
  }
  uVar4 = FUN_00bdfdf0(lVar3);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(lVar2 + 0x88) = 1;
  return 1;
}


