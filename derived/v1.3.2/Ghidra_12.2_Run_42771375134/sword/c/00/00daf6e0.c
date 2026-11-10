/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00daf6e0; name: FUN_00daf6e0
 */


void FUN_00daf6e0(long param_1,int param_2,undefined4 *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = 8;
  if ((param_4 & 1) == 0) {
    lVar4 = 4;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x38) = lVar6;
  uVar7 = *(long *)(param_1 + 0x48) - 1U &
          -(lVar4 + (ulong)(param_3 != (undefined4 *)0x0) * 4 +
           (ulong)(uint)((*(int *)(param_1 + 0x20) - (int)lVar1) + (int)lVar6));
  if ((ulong)(lVar1 - lVar6) < uVar7) {
    FUN_00dae400(param_1,uVar7);
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    *puVar3 = 0;
joined_r0x00daf790:
    if (uVar7 != 1) {
      uVar5 = uVar7 - 1 & 3;
      if (uVar7 - 2 < 3) {
        lVar6 = 1;
      }
      else {
        lVar4 = 0;
        do {
          lVar6 = lVar4;
          *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 1) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 2) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 3) = 0;
          *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 4) = 0;
          lVar4 = lVar6 + 4;
        } while ((uVar7 - 1) - uVar5 != lVar6 + 4);
        lVar6 = lVar6 + 5;
      }
      if (uVar5 != 0) {
        lVar4 = -uVar5;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6) = 0;
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x30) = (undefined1 *)(lVar1 - uVar7);
    if (uVar7 != 0) {
      *(undefined1 *)(lVar1 - uVar7) = 0;
      goto joined_r0x00daf790;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    lVar4 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
      FUN_00dae400(param_1,4);
      lVar4 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar4 + -4;
    *(undefined4 *)(lVar4 + -4) = *param_3;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  uVar2 = -((*(int *)(param_1 + 0x20) - (int)lVar4) + *(int *)(param_1 + 0x28));
  uVar7 = (ulong)uVar2 & 3;
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < uVar7) {
    FUN_00dae400(param_1,uVar7);
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    *puVar3 = 0;
  }
  else {
    *(undefined1 **)(param_1 + 0x30) = (undefined1 *)(lVar4 - uVar7);
    if ((uVar2 & 3) == 0) goto LAB_00daf948;
    *(undefined1 *)(lVar4 - uVar7) = 0;
  }
  if (uVar7 != 1) {
    uVar2 = (int)uVar7 - 1;
    uVar5 = (ulong)uVar2 & 3;
    if (uVar7 - 2 < 3) {
      lVar6 = 1;
    }
    else {
      lVar4 = 0;
      do {
        lVar6 = lVar4;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 1) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 2) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 3) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6 + 4) = 0;
        lVar4 = lVar6 + 4;
      } while ((uVar7 - 1) - uVar5 != lVar6 + 4);
      lVar6 = lVar6 + 5;
    }
    if ((uVar2 & 3) != 0) {
      lVar4 = -uVar5;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar6) = 0;
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
  }
LAB_00daf948:
  FUN_00daec30(param_1,(4 - param_2) +
                       (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                       *(int *)(param_1 + 0x28));
  if ((param_4 & 1) != 0) {
    FUN_00daec30(param_1,(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x47) = 1;
  return;
}


