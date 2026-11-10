/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153a300; name: FUN_0153a300
 */


bool FUN_0153a300(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 local_180 [4];
  undefined8 local_17c;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar3 == 0) {
      uVar1 = FUN_01524bf0(0);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar1 = FUN_01524bf0(lVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    local_180[0] = 0;
    local_148 = 0;
    local_17c = 0x3ff00000000;
    local_158 = 0;
    uStack_150 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    uVar2 = FUN_00cc4490(*(undefined8 *)(param_1 + 0x60),uVar1,param_2,param_3,local_180);
    if ((uVar2 & 1) != 0) {
      if (0xe < param_2) {
        return false;
      }
      if (local_17c._4_4_ < 0x400) {
        return (1 << (ulong)(local_17c._4_4_ & 7) &
               (uint)*(byte *)(param_1 + (long)(int)param_2 * 0x80 + (ulong)(local_17c._4_4_ >> 3) +
                              0x68)) != 0;
      }
      return false;
    }
  }
  return false;
}


