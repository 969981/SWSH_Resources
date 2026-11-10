/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a22f0; name: FUN_007a22f0
 */


void FUN_007a22f0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long *local_38;
  long local_28;
  
  uVar4 = *(undefined8 *)PTR_DAT_027104b0;
  if (param_1 == (long *)0x0) {
    local_40 = 0;
    local_38 = (long *)0x0;
  }
  else {
    plVar6 = param_1 + 0xc;
    (**(code **)(*param_1 + 0x10))(&local_28,param_1);
    local_40 = local_28;
    local_38 = plVar6;
    if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  FUN_007b59f0(uVar4,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  param_1[0x21] = 0;
  param_1[0x2d] = 0;
  if (param_1[0x4e] != 0) {
    plVar6 = (long *)param_1[0x44];
    while (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      (**(code **)(*(long *)param_1[0x46] + 0x18))((long *)param_1[0x46],plVar6,0x20,8);
      plVar6 = (long *)lVar5;
    }
    uVar3 = param_1[0x3a];
    param_1[0x44] = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar2 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(param_1[0x38] + lVar2) = 0;
          *(undefined8 *)(param_1[0x38] + lVar2 + 8) = 0;
          *(undefined8 *)(param_1[0x38] + lVar2 + 0x10) = 0;
          *(undefined8 *)(param_1[0x38] + lVar2 + 0x18) = 0;
        } while (uVar3 - uVar1 != lVar5);
      }
      if (uVar1 != 0) {
        lVar5 = lVar5 << 3;
        lVar2 = -uVar1;
        do {
          *(undefined8 *)(param_1[0x38] + lVar5) = 0;
          lVar5 = lVar5 + 8;
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0);
      }
    }
    param_1[0x4e] = 0;
  }
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}


