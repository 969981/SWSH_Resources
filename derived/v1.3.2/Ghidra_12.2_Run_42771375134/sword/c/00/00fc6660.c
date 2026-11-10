/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6660; name: FUN_00fc6660
 */


void FUN_00fc6660(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  FUN_00dc0e50();
  if (*(long *)(param_1 + 0x630) != 0) {
    if (*(char *)(param_1 + 0x628) == '\0') {
      local_40 = 0x42cf4680734347b7;
      local_38 = "Stop_Prop_Gimmik_G_nest";
      local_30 = 0x17;
    }
    else {
      local_40 = 0xef02abf141a02a4d;
      local_38 = "Stop_Prop_Gimmick_G_nest_Rare";
      local_30 = 0x1d;
    }
    local_28 = 0;
    FUN_00895fd0(*(long *)(param_1 + 0x630),&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_00895d70(*(undefined8 *)(param_1 + 0x630));
    plVar1 = *(long **)(param_1 + 0x630);
    *(undefined8 *)(param_1 + 0x630) = 0;
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_027175d0 + 0x10);
      if (plVar1[1] != 0) {
        (**(code **)(*(long *)(plVar1[1] + 0x48) + 0x18))();
        plVar1[1] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x638) + 0x18))
                (*(long **)(param_1 + 0x638),plVar1,*(undefined8 *)(param_1 + 0x640),
                 *(undefined8 *)(param_1 + 0x648));
    }
  }
  return;
}


