/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f36de0; name: FUN_00f36de0
 */


void FUN_00f36de0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_18;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 3) {
    if (*(long *)(*param_1 + 0x138) != 0) {
      local_18 = 0x6c024f602ab6b1c8;
      uVar2 = FUN_0167bc20(*(long *)(*param_1 + 0x138),&local_18);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    if (iVar1 == 2) {
      if (*(uint *)((long)param_1 + 0xc) < 0x1e) {
        *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) + 1;
        return;
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      if (*(long *)(*param_1 + 0x138) != 0) {
        local_18 = 0x6c024f602ab6b1c8;
        FUN_0167ba30(*(long *)(*param_1 + 0x138),&local_18);
      }
      *(undefined4 *)(param_1 + 1) = 3;
      return;
    }
    if (iVar1 == 1) {
      if (*(long *)(*param_1 + 0x138) != 0) {
        local_18 = 0xdcd3e4222c43eac9;
        uVar2 = FUN_0167bc20(*(long *)(*param_1 + 0x138),&local_18);
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      param_1[1] = 2;
      return;
    }
  }
  return;
}


