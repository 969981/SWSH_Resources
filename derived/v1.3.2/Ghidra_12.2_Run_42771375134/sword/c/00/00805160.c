/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00805160; name: FUN_00805160
 */


void FUN_00805160(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  
  if (*(char *)(param_1 + 5) == '\0') {
    plVar3 = (long *)(param_1 + 0x28);
    plVar6 = (long *)*plVar3;
    plVar1 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar3;
      do {
        if ((ulong)plVar6[4] >= param_4) {
          plVar5 = plVar6;
        }
        plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_4];
      } while (plVar6 != (long *)0x0);
      if ((plVar5 != plVar3) && ((ulong)plVar5[4] <= param_4)) {
        plVar1 = (long *)plVar5[5];
      }
    }
    (**(code **)(*plVar1 + 0x60))(local_58);
    uVar8 = (ulong)(local_58[0] >> 1);
    pvVar7 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      uVar8 = local_50;
      pvVar7 = local_48;
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      uVar4 = 0;
      do {
        while (*(char *)((long)pvVar7 + uVar9) == '\n') {
          uVar9 = uVar9 + 1;
          FUN_00809680(param_5,(long)pvVar7 + uVar4,uVar9 - uVar4);
          *(undefined1 *)(param_5 + 0x14) = 1;
          uVar4 = uVar9;
          if (uVar9 == uVar8) goto LAB_008052d0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar8);
      goto LAB_008052d0;
    }
  }
  else {
    FUN_007ffba0(local_58,*(undefined4 *)(param_4 + 0x38));
    uVar8 = (ulong)(local_58[0] >> 1);
    pvVar7 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      uVar8 = local_50;
      pvVar7 = local_48;
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      uVar9 = 0;
      do {
        while (*(char *)((long)pvVar7 + uVar9) == '\n') {
          uVar4 = uVar9 + 1;
          FUN_00809680(param_5,(long)pvVar7 + uVar2,uVar4 - uVar2);
          *(undefined1 *)(param_5 + 0x14) = 1;
          uVar2 = uVar4;
          uVar9 = uVar4;
          if (uVar4 == uVar8) goto LAB_008052d0;
        }
        uVar9 = uVar9 + 1;
        uVar4 = uVar2;
      } while (uVar9 != uVar8);
      goto LAB_008052d0;
    }
  }
  uVar4 = 0;
LAB_008052d0:
  FUN_00809680(param_5,(long)pvVar7 + uVar4,uVar8 - uVar4);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}


