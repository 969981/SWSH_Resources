/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c22b0; name: FUN_013c22b0
 */


/* WARNING: Removing unreachable block (ram,0x013c23e8) */

void FUN_013c22b0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char local_f0 [16];
  long *local_e0 [2];
  long alStack_d0 [4];
  long *local_b0;
  undefined8 local_a0;
  long local_90;
  long *local_80 [2];
  long alStack_70 [4];
  long *local_50;
  long local_40;
  ulong local_38;
  long local_30;
  
  FUN_0120e660(local_f0,*(undefined8 *)PTR_DAT_027185f8);
  FUN_007a2d60(local_80,local_e0);
  if (local_f0[0] != '\0') {
    if (local_90 != 0) {
      (**(code **)(*local_e0[0] + 0x18))(local_e0[0],local_a0,local_90 << 3,8);
    }
    if (alStack_d0 == local_b0) {
      pcVar2 = *(code **)(*local_b0 + 0x20);
LAB_013c2340:
      (*pcVar2)();
    }
    else if (local_b0 != (long *)0x0) {
      pcVar2 = *(code **)(*local_b0 + 0x28);
      goto LAB_013c2340;
    }
    local_f0[0] = '\0';
  }
  lVar1 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    if (local_38 == 1) {
      lVar1 = 0;
    }
    else {
      lVar1 = 0;
      puVar5 = (undefined4 *)(param_1 + 0x168);
      puVar4 = (undefined8 *)(local_40 + 8);
      do {
        uVar6 = puVar4[-1];
        puVar5[-6] = 2;
        *(undefined8 *)(puVar5 + -8) = uVar6;
        uVar6 = *puVar4;
        lVar1 = lVar1 + 2;
        *puVar5 = 2;
        *(undefined8 *)(puVar5 + -2) = uVar6;
        puVar5 = puVar5 + 0xc;
        puVar4 = puVar4 + 2;
      } while (local_38 - (local_38 & 1) != lVar1);
      if ((local_38 & 1) == 0) goto LAB_013c2444;
    }
    lVar3 = param_1 + lVar1 * 0x18;
    *(undefined8 *)(lVar3 + 0x148) = *(undefined8 *)(local_40 + lVar1 * 8);
    *(undefined4 *)(lVar3 + 0x150) = 2;
  }
LAB_013c2444:
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x11c) = 1;
  *(undefined8 *)(param_1 + 0x124) = 0;
  pcVar2 = *(code **)(param_1 + 0x88);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar2)(param_1 + 0xa0);
  }
  *(long *)(param_1 + 0xa0) = param_1;
  *(undefined1 **)(param_1 + 0x80) = &LAB_013c3630;
  *(undefined1 **)(param_1 + 0x88) = &LAB_013c3670;
  *(undefined1 **)(param_1 + 0x90) = &LAB_013c3680;
  *(undefined1 **)(param_1 + 0x98) = &LAB_013c3690;
  *(undefined4 *)(param_1 + 0x140) = 1;
  if (local_30 != 0) {
    (**(code **)(*local_80[0] + 0x18))(local_80[0],local_40,local_30 << 3,8);
  }
  if (alStack_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) {
      return;
    }
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
  return;
}


