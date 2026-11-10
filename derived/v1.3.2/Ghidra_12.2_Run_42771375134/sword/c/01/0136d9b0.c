/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136d9b0; name: FUN_0136d9b0
 */


void FUN_0136d9b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_50;
  long *local_48;
  long local_40;
  long *local_38;
  long local_28;
  
  if (param_1 == (long *)0x0) {
    local_40 = 0;
    local_38 = (long *)0x0;
  }
  else {
    plVar2 = param_1 + 0xd;
    (**(code **)(*param_1 + 0x10))(&local_28,param_1);
    local_40 = local_28;
    local_38 = plVar2;
    if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  FUN_007b58c0(*(undefined8 *)PTR_DAT_027104b0,&local_40);
  uVar3 = *(undefined8 *)PTR_DAT_02718f20;
  if (param_1 == (long *)0x0) {
    local_50 = 0;
    local_48 = (long *)0x0;
  }
  else {
    plVar2 = param_1 + 0xc;
    (**(code **)(*param_1 + 0x10))(&local_28,param_1);
    local_50 = local_28;
    local_48 = plVar2;
    if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  FUN_011fcf30(uVar3,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar1 = FUN_0136eb80(&local_28,param_1[1]);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x58) + 0x10))();
  }
  if (param_1[0x1c] != 0) {
    (**(code **)(*(long *)(param_1[0x1c] + 0x58) + 0x18))();
    param_1[0x1c] = 0;
  }
  param_1[0x1c] = lVar1;
  FUN_0136f580(lVar1);
  if (*(long *)PTR_DAT_02716a30 != 0) {
    param_1[0xe] = *(long *)(*(long *)PTR_DAT_02716a30 + 0xf8);
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


