/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153a630; name: FUN_0153a630
 */


void FUN_0153a630(long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  undefined1 local_190 [4];
  undefined8 local_18c;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar5 == 0) {
      uVar2 = FUN_01524bf0(0);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar2 = FUN_01524bf0(lVar5);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_190[0] = 0;
    local_158 = 0;
    local_18c = 0x3ff00000000;
    local_168 = 0;
    uStack_160 = 0;
    local_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    uVar3 = FUN_00cc4490(*(undefined8 *)(param_1 + 0x60),uVar2,param_2,param_3,local_190);
    if ((((uVar3 & 1) != 0) && (param_2 < 0xf)) && (local_18c._4_4_ < 0x400)) {
      lVar5 = param_1 + (long)(int)param_2 * 0x80 + (ulong)(local_18c._4_4_ >> 3);
      bVar4 = *(byte *)(lVar5 + 0x7e8);
      bVar1 = (byte)(1 << (ulong)(local_18c._4_4_ & 7));
      if ((param_4 & 1) == 0) {
        bVar4 = bVar4 | bVar1;
      }
      else {
        bVar4 = bVar4 & (bVar1 ^ 0xff);
      }
      *(byte *)(lVar5 + 0x7e8) = bVar4;
    }
  }
  return;
}


