/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003afc00; name: FUN_003afc00
 */


void FUN_003afc00(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  void *pvVar7;
  float fVar8;
  undefined1 auVar9 [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_003ae420(param_1,*(undefined8 **)(param_1 + 0x30) + 0x2a,**(undefined8 **)(param_1 + 0x30));
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x148))
            (*(long **)(param_1 + 0x20),lVar4,
             lVar4 + (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x38) * 0x10,0,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x158))
            (*(long **)(param_1 + 0x20),lVar4,
             lVar4 + (ulong)(*(uint *)(*(long *)(param_1 + 0x30) + 0x48) >> 1) * 4,0,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x168))
            (*(long **)(param_1 + 0x20),lVar4,
             lVar4 + (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x58) * 0x10,0,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x178))
            (*(long **)(param_1 + 0x20),lVar4,
             lVar4 + (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x68) * 4,0,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x70);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x188))
            (*(long **)(param_1 + 0x20),lVar4,
             lVar4 + (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x30) + 0x78) * 3) * 0xc,0,0);
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(uint *)(lVar4 + 0x18) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x1d0))
              (*(long **)(param_1 + 0x20),*(long *)(lVar4 + 0x10),
               *(long *)(lVar4 + 0x10) + (ulong)(*(uint *)(lVar4 + 0x18) >> 2) * 0x10,
               *(long *)(lVar4 + 0x20),
               *(long *)(lVar4 + 0x20) + (ulong)*(uint *)(lVar4 + 0x28) * 0xc);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar4 + 0x88) == 0) {
LAB_003afd70:
    lVar4 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar4 + 0x98) == 0) goto LAB_003afddc;
LAB_003afd7c:
    pvVar7 = *(void **)(lVar4 + 0x90);
    if (pvVar7 == (void *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x250))();
      goto LAB_003afddc;
    }
    auVar9 = (**(code **)(**(long **)(param_1 + 0x20) + 0x248))();
    memcpy(auVar9._0_8_,pvVar7,(ulong)(uint)(auVar9._8_4_ - auVar9._0_4_) & 0xfffffff0);
    lVar4 = *(long *)(param_1 + 0x30);
    iVar1 = *(int *)(lVar4 + 0xa8);
  }
  else {
    pvVar7 = *(void **)(lVar4 + 0x80);
    if (pvVar7 != (void *)0x0) {
      auVar9 = (**(code **)(**(long **)(param_1 + 0x20) + 0x208))();
      memcpy(auVar9._0_8_,pvVar7,(ulong)(uint)(auVar9._8_4_ - auVar9._0_4_) & 0xfffffff0);
      goto LAB_003afd70;
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x210))();
    lVar4 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar4 + 0x98) != 0) goto LAB_003afd7c;
LAB_003afddc:
    lVar4 = *(long *)(param_1 + 0x30);
    iVar1 = *(int *)(lVar4 + 0xa8);
  }
  if (iVar1 != 0) {
    pvVar7 = *(void **)(lVar4 + 0xa0);
    if (pvVar7 == (void *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x270))();
      lVar4 = *(long *)(param_1 + 0x30);
      uVar5 = *(uint *)(lVar4 + 0xb8);
      goto joined_r0x003afe18;
    }
    auVar9 = (**(code **)(**(long **)(param_1 + 0x20) + 0x268))();
    memcpy(auVar9._0_8_,pvVar7,(ulong)(uint)(auVar9._8_4_ - auVar9._0_4_) & 0xfffffff0);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  uVar5 = *(uint *)(lVar4 + 0xb8);
joined_r0x003afe18:
  if (uVar5 != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x2d0))
              (*(long **)(param_1 + 0x20),*(long *)(lVar4 + 0xb0),
               *(long *)(lVar4 + 0xb0) + (ulong)uVar5 * 4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar4 + 200) != 0) {
    lVar4 = *(long *)(lVar4 + 0xc0);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
      uVar3 = uVar3 & 0xffffffff;
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x2e0))
              (*(long **)(param_1 + 0x20),lVar4,lVar4 + uVar3 * 0x10);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1e8))(*(undefined4 *)(lVar4 + 0xd0));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1f8))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0xd4));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x220))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0xd8),
             *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xdc));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x238))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0xe0));
  lVar4 = *(long *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(lVar4 + 0xe4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar4 + 0xec);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  (**(code **)(**(long **)(param_1 + 0x20) + 0xb0))(*(long **)(param_1 + 0x20),lVar4 + 0xf0);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1c0))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0xfc));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1b8))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x100));
  (**(code **)(**(long **)(param_1 + 0x20) + 0xc0))
            (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 0x104);
  (**(code **)(**(long **)(param_1 + 0x20) + 0xd0))
            (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 0x110);
  (**(code **)(**(long **)(param_1 + 0x20) + 0xe0))
            (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 0x11c);
  (**(code **)(**(long **)(param_1 + 0x20) + 0xf0))
            (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 0x128);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x100))
            (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x30) + 0x134);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x110))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x140));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x120))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x144));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x2b0))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x148));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x2c0))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14c));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x300))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x16c));
  fVar8 = *(float *)(*(long *)(param_1 + 0x30) + 0x170);
  if (fVar8 <= DAT_01d4bbb0) {
    uVar5 = (uint)(int)(fVar8 * DAT_01d4bec0) / 5;
    if (199 < uVar5) {
      uVar5 = 200;
    }
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = (uint)(int)(fVar8 * DAT_01d4bec0) / uVar5;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x338))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x310))(*(long **)(param_1 + 0x20),uVar5);
    (**(code **)(**(long **)(param_1 + 0x20) + 800))(*(long **)(param_1 + 0x20),uVar2);
    if ((fVar8 == 0.0) && ((uVar3 & 1) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x340))();
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x310))(*(long **)(param_1 + 0x20),0xffffffff);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  local_50 = *(undefined4 *)(lVar4 + 0x174);
  local_4c = *(undefined4 *)(lVar4 + 0x178);
  uStack_48 = *(undefined4 *)(lVar4 + 0x17c);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x280))(*(long **)(param_1 + 0x20),&local_50);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x290))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x180));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x2a0))
            (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x184));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


