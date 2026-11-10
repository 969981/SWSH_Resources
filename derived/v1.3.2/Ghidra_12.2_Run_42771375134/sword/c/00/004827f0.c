/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004827f0; name: FUN_004827f0
 */


undefined8 FUN_004827f0(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ushort local_64;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ushort local_44;
  
  if (param_2 != (long *)0x0) {
    if (0 < (int)(param_3 * 0x10000)) {
      uVar4 = 0;
      do {
        uVar2 = (**(code **)(*param_2 + 0x128))(param_2,1);
        if ((uVar2 & 1) == 0) {
          if ((int)(uVar4 * 0x10000) < 1) {
            return 0;
          }
          uVar3 = 0;
          do {
            (**(code **)(*param_2 + 0x130))(param_2,1);
            uVar3 = uVar3 + 1;
          } while ((int)(uVar3 & 0xffff) < (int)(short)uVar4);
          return 0;
        }
        uVar4 = uVar4 + 1 & 0xffff;
      } while ((int)uVar4 < (int)(short)param_3);
    }
    local_80[0] = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 1;
    local_64 = 0x100;
    if ((int)param_3 < 0x10000) {
      return 1;
    }
    uVar4 = 0;
    do {
      local_64 = local_64 & 0xff00;
      iVar1 = (**(code **)(*param_2 + 0x118))(param_2,local_80,1,1);
      if (iVar1 == 0) {
        if (0 < (int)(param_3 * 0x10000)) {
          uVar3 = 0;
          do {
            (**(code **)(*param_2 + 0x130))(param_2,1);
            uVar3 = uVar3 + 1;
          } while ((int)(uVar3 & 0xffff) < (int)(short)param_3);
        }
        local_48 = 1;
        local_60[0] = 0;
        local_44 = 0x100;
        local_58 = 0;
        uStack_50 = 0;
        if (0xffff < (int)(param_3 & 0xffff | uVar4 << 0x10)) {
          uVar3 = 0;
          do {
            local_44 = local_44 & 0xff00;
            (**(code **)(*param_2 + 0x120))(param_2,local_60);
            uVar3 = uVar3 + 1;
          } while ((int)(uVar3 & 0xffff) < (int)(short)uVar4);
        }
        return 0;
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while ((int)uVar4 < (int)param_3 >> 0x10);
  }
  return 1;
}


