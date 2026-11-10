/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00443e40; name: FUN_00443e40
 */


undefined4 FUN_00443e40(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 uVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x48));
  uVar6 = *(uint *)(param_1 + 0x78);
  if (uVar6 != 0) {
    uVar3 = param_2[0xc];
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = uVar3 / uVar6;
    }
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x70) + (ulong)(uVar3 - uVar7 * uVar6) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (*(uint *)(plVar9 + 1) == uVar3) {
        iVar5 = FUN_00446e30(param_1,plVar9 + 2);
        uVar8 = 1;
        if (iVar5 != 0) {
          uVar8 = 2;
        }
        goto LAB_00443eb8;
      }
    }
  }
  uVar8 = 1;
LAB_00443eb8:
  uVar3 = *param_2;
  uVar6 = 0;
  uVar7 = 0xffffffff;
  if (uVar3 < 8) {
    uVar4 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar4 & 3) == 0) {
      if ((uVar4 & 0xc) == 0) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0xc0U) == 0) goto LAB_00443f1c;
        uVar6 = param_2[1];
      }
      else {
        uVar6 = param_2[0xe];
        if (param_2[0xc] != 1) {
          uVar6 = 0;
        }
      }
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = param_2[0xc];
      uVar6 = param_2[1];
    }
  }
LAB_00443f1c:
  uVar3 = param_2[10];
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  if (uVar3 != 2) {
    uVar10 = 0;
  }
  FUN_0044d500(param_1 + 0xd8,uVar1,uVar6,uVar10,uVar8,uVar7,uVar2);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
  return uVar8;
}


