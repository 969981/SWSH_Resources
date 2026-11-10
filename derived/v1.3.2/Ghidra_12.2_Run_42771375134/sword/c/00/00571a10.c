/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00571a10; name: FUN_00571a10
 */


void FUN_00571a10(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  void *__dest;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((param_6 >> 0x12 & 1) == 0) {
    (**(code **)(**(long **)(param_5 + 0x20) + 0x148))(*(long **)(param_5 + 0x20),0xffffffff,1);
  }
  if ((param_6 >> 0x11 & 1) == 0) {
    (**(code **)(**(long **)(param_5 + 0x30) + 0x108))
              (*(long **)(param_5 + 0x30),&local_a0,param_6 & 0xffff);
    (**(code **)(**(long **)(param_5 + 0x30) + 0x118))(*(long **)(param_5 + 0x30),0);
  }
  (**(code **)(**(long **)(param_5 + 0x20) + 0x88))(*(long **)(param_5 + 0x20),&local_a0);
  fVar9 = (float)NEON_ucvtf(fStack_94);
  fVar8 = (float)NEON_ucvtf(local_98);
  param_2 = param_2 - fVar9 * 0.5;
  param_1 = param_1 - fVar8 * 0.5;
  param_4 = param_2 + param_4;
  param_3 = param_1 + param_3;
  if ((param_6 >> 0x10 & 1) == 0) {
    param_3 = param_1 + (param_3 - param_1) + (param_3 - param_1);
    param_2 = param_4 + (param_2 - param_4) + (param_2 - param_4);
    iVar6 = 3;
  }
  else {
    iVar6 = 4;
  }
  local_a0 = (2.0 / fVar8) * (param_1 + 0.0);
  fStack_9c = (2.0 / fVar9) * (param_4 + 0.0);
  fStack_94 = (2.0 / fVar9) * (param_2 + 0.0);
  local_90 = (2.0 / fVar8) * (param_3 + 0.0);
  local_98 = local_a0;
  fStack_8c = fStack_9c;
  local_88 = local_90;
  fStack_84 = fStack_94;
  if (*(long *)(param_5 + 0x30) != 0) {
    local_80 = 0;
    uStack_78 = 0x10;
    local_70 = 0;
    if (*(long *)(param_5 + 0x299e8) == 0) {
      FUN_005466d0(*(long *)(param_5 + 0x30),&local_68);
      (**(code **)(*local_68 + 8))();
      uVar5 = (**(code **)(**(long **)(param_5 + 0x30) + 0x128))(*(long **)(param_5 + 0x30),0);
      uVar4 = (**(code **)(**(long **)(param_5 + 0x30) + 0x138))(*(long **)(param_5 + 0x30),0);
      (**(code **)(*local_68 + 0x230))(local_68,&local_80,1,uVar5,uVar4,(long *)(param_5 + 0x299e8))
      ;
    }
  }
  piVar2 = (int *)(param_5 + 0x29bb8);
  iVar7 = *piVar2;
  uVar3 = iVar6 * 8;
  uVar1 = iVar7 + uVar3;
  if (*(uint *)(param_5 + 0x29bbc) <= uVar1) {
    iVar7 = 0;
    *piVar2 = 0;
  }
  *piVar2 = iVar7 + uVar3;
  uVar4 = 6;
  if (uVar1 < *(uint *)(param_5 + 0x29bbc)) {
    uVar4 = 2;
  }
  __dest = (void *)FUN_00549260(*(undefined8 *)(param_5 + 0x29bc8),uVar4,iVar7,(ulong)uVar3);
  memcpy(__dest,&local_a0,(ulong)uVar3);
  FUN_00549430(*(undefined8 *)(param_5 + 0x29bc8));
  (**(code **)(**(long **)(param_5 + 0x30) + 0x150))
            (*(long **)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x299e8),
             *(undefined8 *)(param_5 + 0x29bc8),iVar7,0,0,1);
  (**(code **)(**(long **)(param_5 + 0x20) + 0x48))
            (*(long **)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x29bd0),0);
  FUN_0059a530(*(undefined8 *)(param_5 + 0x30));
  (**(code **)(**(long **)(param_5 + 0x20) + 0x1d0))
            (*(long **)(param_5 + 0x20),5,iVar6,0,0,iVar6 + -1);
  if ((param_6 >> 0x11 & 1) == 0) {
    (**(code **)(**(long **)(param_5 + 0x30) + 0x120))();
    (**(code **)(**(long **)(param_5 + 0x30) + 0x110))();
  }
  return;
}


