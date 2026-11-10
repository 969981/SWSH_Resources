/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c77c0; name: FUN_013c77c0
 */


void FUN_013c77c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_40;
  long *local_38;
  long local_28;
  
  if ((param_1[0xd] != 0) &&
     (puVar3 = *(undefined8 **)(param_1[0xd] + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_0132d9a0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_01330060(&local_40,puVar3 + -10);
        lVar2 = param_1[0x13];
        if (lVar2 != 0) goto LAB_013c7828;
        goto LAB_013c7838;
      }
    }
  }
  FUN_01330060(&local_40,0);
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
LAB_013c7828:
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
LAB_013c7838:
  param_1[0x13] = local_40;
  FUN_013c2100(local_40,param_1 + 0xf);
  (**(code **)(*param_1 + 0x10))(&local_28,param_1);
  local_38 = param_1 + 0x10;
  local_40 = local_28;
  if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_007b58c0(*(undefined8 *)PTR_DAT_027104b0,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


