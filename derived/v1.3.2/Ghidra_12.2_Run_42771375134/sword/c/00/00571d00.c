/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00571d00; name: FUN_00571d00
 */


void FUN_00571d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,uint param_10)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  void *__dest;
  int iVar7;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  
  if ((param_10 >> 0x12 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x148))(*(long **)(param_9 + 0x20),0xffffffff,1);
  }
  if ((param_10 >> 0x11 & 1) == 0) {
    plVar5 = *(long **)(param_9 + 0x30);
    (**(code **)(*plVar5 + 0x108))(plVar5,&local_170,param_10 & 0xffff);
    plVar5 = *(long **)(param_9 + 0x30);
    (**(code **)(*plVar5 + 0x118))(plVar5,0);
  }
  local_110 = param_7;
  uStack_10c = param_8;
  local_108 = param_5;
  uStack_104 = param_6;
  FUN_00571520(param_1,param_2,param_3,param_4,param_9,1,&local_108,&local_110,param_10,&local_cc,
               &local_100,&local_130);
  local_170 = local_100;
  uStack_16c = uStack_fc;
  local_168 = local_130;
  uStack_164 = uStack_12c;
  local_160 = local_f4;
  uStack_15c = uStack_f0;
  local_158 = local_128;
  uStack_154 = uStack_124;
  local_150 = local_e8;
  uStack_14c = uStack_e4;
  local_148 = local_120;
  uStack_144 = uStack_11c;
  local_140 = local_dc;
  uStack_13c = uStack_d8;
  local_138 = local_118;
  uStack_134 = uStack_114;
  plVar5 = (long *)(param_9 + 0x30);
  if (*plVar5 != 0) {
    local_b8 = 0;
    uStack_b0 = 2;
    local_c8 = 0;
    uStack_c0 = 0x10;
    local_a8 = 0x10;
    uStack_a0 = 0;
    if (*(long *)(param_9 + 0x299f0) == 0) {
      FUN_005466d0(*plVar5,&local_98);
      (**(code **)(*local_98 + 8))();
      uVar6 = (**(code **)(*(long *)*plVar5 + 0x128))((long *)*plVar5,0);
      uVar4 = (**(code **)(*(long *)*plVar5 + 0x138))((long *)*plVar5,0);
      (**(code **)(*local_98 + 0x230))(local_98,&local_c8,2,uVar6,uVar4,(long *)(param_9 + 0x299f0))
      ;
    }
  }
  piVar2 = (int *)(param_9 + 0x29bb8);
  iVar7 = *piVar2;
  uVar3 = local_cc * 0x10;
  uVar1 = iVar7 + uVar3;
  if (*(uint *)(param_9 + 0x29bbc) <= uVar1) {
    iVar7 = 0;
    *piVar2 = 0;
  }
  *piVar2 = iVar7 + uVar3;
  uVar4 = 6;
  if (uVar1 < *(uint *)(param_9 + 0x29bbc)) {
    uVar4 = 2;
  }
  __dest = (void *)FUN_00549260(*(undefined8 *)(param_9 + 0x29bc8),uVar4,iVar7,uVar3);
  memcpy(__dest,&local_170,(ulong)uVar3);
  FUN_00549430(*(undefined8 *)(param_9 + 0x29bc8));
  (**(code **)(**(long **)(param_9 + 0x30) + 0x150))
            (*(long **)(param_9 + 0x30),*(undefined8 *)(param_9 + 0x299f0),
             *(undefined8 *)(param_9 + 0x29bc8),iVar7,0,0,1);
  (**(code **)(**(long **)(param_9 + 0x20) + 0x48))
            (*(long **)(param_9 + 0x20),*(undefined8 *)(param_9 + 0x29bd0),0);
  FUN_0059a530(*(undefined8 *)(param_9 + 0x30));
  (**(code **)(**(long **)(param_9 + 0x20) + 0x1d0))
            (*(long **)(param_9 + 0x20),5,local_cc,0,0,local_cc + -1);
  if ((param_10 >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)*plVar5 + 0x120))();
    (**(code **)(*(long *)*plVar5 + 0x110))();
  }
  return;
}


