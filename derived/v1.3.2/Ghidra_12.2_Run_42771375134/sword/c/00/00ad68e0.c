/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad68e0; name: FUN_00ad68e0
 */


int FUN_00ad68e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x3c0) + 0x810))
                    (*(long **)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c8));
  FUN_014ad910(&local_40,uVar2);
  if (local_30._4_4_ == 2) {
    if (local_40 < 0x32c) {
      if (local_40 == 6) {
        return 4;
      }
      if (local_40 == 0x5e) {
        return 5;
      }
    }
    else {
      if ((local_40 == 0x32c) || (local_40 == 0x332)) {
        return 6;
      }
      if (local_40 == 0x349) {
        return 4;
      }
    }
  }
  if (*(int *)(param_1 + 0x4c4) != 0) {
    return *(int *)(param_1 + 0x4c4);
  }
  iVar1 = *(int *)(param_1 + 0x4f0);
  if (iVar1 == 0x22b) {
    if ((*(ushort *)(param_1 + 0x4f4) | 2) != 3) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0x36d) {
      if (iVar1 != 0x2a9) {
        return 0;
      }
      if (*(short *)(param_1 + 0x4f4) == 1) {
        return 2;
      }
      return 0;
    }
    if (*(short *)(param_1 + 0x4f4) != 1) {
      return 0;
    }
  }
  return 1;
}


