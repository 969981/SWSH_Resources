/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2ff0; name: FUN_013c2ff0
 */


void FUN_013c2ff0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  char local_140 [16];
  long *local_130 [2];
  long alStack_120 [4];
  long *local_100;
  undefined8 local_f0;
  long local_e0;
  long *local_d0 [2];
  long alStack_c0 [4];
  long *local_a0;
  undefined8 *local_90;
  long local_88;
  long local_80;
  
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  lVar4 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  puVar2 = PTR_DAT_027185f8;
  FUN_0120e660(local_140,*(undefined8 *)PTR_DAT_027185f8);
  FUN_007a2d60(local_d0,local_130);
  if (local_140[0] == '\0') goto LAB_013c311c;
  if (local_e0 != 0) {
    (**(code **)(*local_130[0] + 0x18))(local_130[0],local_f0,local_e0 << 3,8);
  }
  if (alStack_120 == local_100) {
    pcVar5 = *(code **)(*local_100 + 0x20);
LAB_013c3114:
    (*pcVar5)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar5 = *(code **)(*local_100 + 0x28);
    goto LAB_013c3114;
  }
  local_140[0] = '\0';
LAB_013c311c:
  if (local_88 != 0) {
    lVar4 = local_88 << 3;
    puVar9 = local_90;
    do {
      bVar3 = FUN_0120e630(*(undefined8 *)puVar2,*puVar9);
      if (bVar3 != 0xfd) {
        uVar6 = (ulong)bVar3;
        *(undefined8 *)(param_1 + uVar6 * 0x18 + 0x148) = *puVar9;
        piVar7 = (int *)(param_2 + 0x1c);
        switch(uVar6) {
        case 0:
          break;
        case 1:
          piVar7 = (int *)(param_2 + 0x20);
          break;
        case 2:
          piVar7 = (int *)(param_2 + 0x24);
          break;
        case 3:
          piVar7 = (int *)(param_2 + 0x28);
          break;
        default:
          goto switchD_013c319c_default;
        }
        uVar8 = 6;
        if (*piVar7 != 1) {
          uVar8 = 2;
        }
        uVar1 = 7;
        if (*piVar7 != 2) {
          uVar1 = uVar8;
        }
        *(undefined4 *)(param_1 + uVar6 * 0x18 + 0x150) = uVar1;
      }
switchD_013c319c_default:
      puVar9 = puVar9 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (local_80 != 0) {
    (**(code **)(*local_d0[0] + 0x18))(local_d0[0],local_90,local_80 << 3,8);
  }
  if (alStack_c0 == local_a0) {
    pcVar5 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) {
      return;
    }
    pcVar5 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar5)();
  return;
}


