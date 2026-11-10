/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d76030; name: FUN_00d76030
 */


void FUN_00d76030(undefined8 param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 != -0x340d631b7bddd9bb) {
    local_24 = param_2;
    local_28 = FUN_00d712b0(&local_24);
    uVar1 = FUN_00d71280(&local_28);
    plVar2 = (long *)FUN_00cbd3c0();
    if ((uVar1 & 1) == 0) {
      if (*plVar2 == param_3) {
        return;
      }
    }
    else if (*plVar2 == param_3) {
      FUN_00d83b20(param_1);
      return;
    }
    FUN_00d83ac0(param_1,local_24,param_3);
  }
  return;
}


