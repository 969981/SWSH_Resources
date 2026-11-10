/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bb780; name: FUN_010bb780
 */


void FUN_010bb780(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_1a8 [2];
  undefined8 local_1a6;
  undefined8 local_19e;
  undefined8 local_196;
  undefined2 local_18e;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 local_120;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      if (*(int *)(param_1 + 0x80) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x88);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x90);
      }
      FUN_00ffa3d0(uVar7,0);
      FUN_010bc6f0(param_1,1,1);
      return;
    }
    if (iVar1 == 0) {
      FUN_010b22f0(auStack_128,*(undefined8 *)(param_1 + 0x90));
      lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar5 + 0x2e8);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      FUN_0077d520(lVar6,auStack_a8);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8);
      lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar5 + 0x2e8);
      plVar4 = (long *)(lVar6 + 0x48);
      if (lVar6 != 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      FUN_014c9110(uVar7,0,lVar6,local_d5,local_d6);
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar4);
      FUN_010bc320(param_1,0x126103ec9b9569c0,0,1,0,0);
      *(undefined4 *)(param_1 + 0x7c) = 0x2c;
      local_1a8[0] = FUN_008d3750();
      local_18e = 0;
      local_196 = 0;
      local_19e = 0;
      local_1a6 = 0;
      local_178 = 0;
      local_150 = (ulong)local_150._4_4_ << 0x20;
      local_188 = 0;
      uStack_180 = 0;
      local_160 = 0;
      local_158 = 0;
      local_170 = 0;
      local_168 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      local_140 = 0;
      FUN_0077d6d0((ulong)local_1a8 | 2,auStack_a8);
      local_1a8[0] = local_d6;
      puVar3 = (undefined8 *)FUN_0121aff0(auStack_d0);
      local_188 = *puVar3;
      uStack_180 = puVar3[1];
      local_178 = CONCAT11(local_178._1_1_,local_120);
      FUN_01029cb0(*(undefined8 *)PTR_DAT_027108c0);
      FUN_01029ad0(&local_88);
      local_160 = local_78;
      local_168 = local_80;
      local_170 = local_88;
      local_140 = local_58;
      local_148 = local_60;
      local_150 = local_68;
      local_158 = local_70;
      puVar3 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x68) != 0) {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
        if (puVar3 != (undefined8 *)0x0) {
          plVar4 = (long *)(**(code **)*puVar3)(puVar3);
          lVar5 = FUN_010aad10();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar5) {
              puVar3 = puVar3 + -10;
              goto LAB_010bba7c;
            }
          }
        }
        puVar3 = (undefined8 *)0x0;
      }
LAB_010bba7c:
      FUN_011f3720(puVar3 + 0x23,local_1a8);
    }
  }
  return;
}


