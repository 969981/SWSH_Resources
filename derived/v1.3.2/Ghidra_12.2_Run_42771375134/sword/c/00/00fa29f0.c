/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa29f0; name: FUN_00fa29f0
 */


long FUN_00fa29f0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar12;
  ulong uVar11;
  undefined8 in_stack_ffffffffffffff70;
  uint uVar13;
  
  uVar13 = (uint)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  uVar12 = (uint)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  uVar1 = FUN_00e84680(*(ulong *)(param_2 + 4),*(ulong *)(param_2 + 4) >> 0x20,
                       *(ulong *)(param_2 + 6) & 0xffffffff,*(ulong *)(param_2 + 8),
                       *(ulong *)(param_2 + 8) >> 0x20,*(ulong *)(param_2 + 10) & 0xffffffff,
                       *(ulong *)(param_2 + 0xc),*(ulong *)(param_2 + 0xc) >> 0x20,
                       *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x10),0,
                       *(undefined8 *)(param_2 + 0x1e));
  uVar11 = (ulong)uVar12 << 0x20;
  uVar2 = FUN_00e85210(0,0,0,param_2[1],0,0,0,0,*(undefined8 *)(param_1 + 0x78),*param_2);
  uVar11 = uVar11 & 0xffffffff00000000;
  uVar3 = FUN_00e85210(0,0,0,param_2[2],0,0,0,0,*(undefined8 *)(param_1 + 0x78),*param_2);
  iVar4 = FUN_00e853e0(*(undefined8 *)(param_1 + 0x78),uVar1,*(undefined8 *)(param_2 + 0x12),
                       *(undefined8 *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x16),uVar3,0,
                       0xcbf29ce484222645,uVar2,uVar11);
  lVar9 = *(long *)(param_1 + 0x78);
  lVar7 = *(long *)(lVar9 + 0x30);
  *(undefined1 *)(lVar9 + 0x46) = 1;
  uVar11 = (*(long *)(lVar9 + 0x20) - lVar7) + *(long *)(lVar9 + 0x28);
  if (iVar4 != 0) {
    if (*(ulong *)(lVar9 + 0x48) < 4) {
      *(undefined8 *)(lVar9 + 0x48) = 4;
    }
    uVar12 = -(int)uVar11;
    uVar10 = (ulong)uVar12 & 3;
    if ((ulong)(lVar7 - *(long *)(lVar9 + 0x38)) < uVar10) {
      FUN_00dae400(lVar9,uVar10);
      puVar5 = (undefined1 *)(*(long *)(lVar9 + 0x30) - uVar10);
      *(undefined1 **)(lVar9 + 0x30) = puVar5;
      *puVar5 = 0;
joined_r0x00fa2b88:
      if (uVar10 != 1) {
        uVar12 = (int)uVar10 - 1;
        uVar6 = (ulong)uVar12 & 3;
        if (uVar10 - 2 < 3) {
          lVar8 = 1;
        }
        else {
          lVar7 = 0;
          do {
            lVar8 = lVar7;
            *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 1) = 0;
            *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 2) = 0;
            *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 3) = 0;
            *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 4) = 0;
            lVar7 = lVar8 + 4;
          } while ((uVar10 - 1) - uVar6 != lVar8 + 4);
          lVar8 = lVar8 + 5;
        }
        if ((uVar12 & 3) != 0) {
          lVar7 = -uVar6;
          do {
            *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8) = 0;
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0);
        }
      }
    }
    else {
      *(undefined1 **)(lVar9 + 0x30) = (undefined1 *)(lVar7 - uVar10);
      if ((uVar12 & 3) != 0) {
        *(undefined1 *)(lVar7 - uVar10) = 0;
        goto joined_r0x00fa2b88;
      }
    }
    FUN_00f02230(lVar9,4,(4 - iVar4) +
                         (*(int *)(lVar9 + 0x20) - *(int *)(lVar9 + 0x30)) + *(int *)(lVar9 + 0x28),
                 0);
  }
  uVar1 = FUN_00dae710(lVar9,uVar11 & 0xffffffff);
  uVar11 = 0;
  uVar2 = FUN_00f01360(0,0,0,0,*(undefined8 *)(param_1 + 0x78),0,0,0,0,0,0,0,0,0);
  uVar3 = FUN_00e855a0(*(undefined8 *)(param_1 + 0x78),0,0,0,0,0xcbf29ce484222645,0,0,
                       0xcbf29ce484222645,uVar11 & 0xffffffff00000000,(ulong)uVar13 << 0x20);
  iVar4 = FUN_00f01930(0x3f800000,*(undefined8 *)(param_1 + 0x78),uVar2,uVar1,param_2[0x18],
                       param_2[0x19],param_2[0x1a],*(undefined1 *)(param_2 + 0x1b),param_2[0x1c],
                       0xcbf29ce484222645,0xcbf29ce484222645,0xcbf29ce484222645,0,uVar3,0,
                       param_2[0x20],0);
  lVar9 = *(long *)(param_1 + 0x78);
  lVar7 = *(long *)(lVar9 + 0x30);
  *(undefined1 *)(lVar9 + 0x46) = 1;
  uVar11 = (*(long *)(lVar9 + 0x20) - lVar7) + *(long *)(lVar9 + 0x28);
  if (iVar4 == 0) goto LAB_00fa2e44;
  if (*(ulong *)(lVar9 + 0x48) < 4) {
    *(undefined8 *)(lVar9 + 0x48) = 4;
  }
  uVar13 = -(int)uVar11;
  uVar10 = (ulong)uVar13 & 3;
  if ((ulong)(lVar7 - *(long *)(lVar9 + 0x38)) < uVar10) {
    FUN_00dae400(lVar9,uVar10);
    puVar5 = (undefined1 *)(*(long *)(lVar9 + 0x30) - uVar10);
    *(undefined1 **)(lVar9 + 0x30) = puVar5;
    *puVar5 = 0;
joined_r0x00fa2d8c:
    if (uVar10 != 1) {
      uVar13 = (int)uVar10 - 1;
      uVar6 = (ulong)uVar13 & 3;
      if (uVar10 - 2 < 3) {
        lVar8 = 1;
      }
      else {
        lVar7 = 0;
        do {
          lVar8 = lVar7;
          *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 1) = 0;
          *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 2) = 0;
          *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 3) = 0;
          *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8 + 4) = 0;
          lVar7 = lVar8 + 4;
        } while ((uVar10 - 1) - uVar6 != lVar8 + 4);
        lVar8 = lVar8 + 5;
      }
      if ((uVar13 & 3) != 0) {
        lVar7 = -uVar6;
        do {
          *(undefined1 *)(*(long *)(lVar9 + 0x30) + lVar8) = 0;
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
    }
  }
  else {
    *(undefined1 **)(lVar9 + 0x30) = (undefined1 *)(lVar7 - uVar10);
    if ((uVar13 & 3) != 0) {
      *(undefined1 *)(lVar7 - uVar10) = 0;
      goto joined_r0x00fa2d8c;
    }
  }
  FUN_00f02230(lVar9,4,(4 - iVar4) +
                       (*(int *)(lVar9 + 0x20) - *(int *)(lVar9 + 0x30)) + *(int *)(lVar9 + 0x28),0)
  ;
LAB_00fa2e44:
  uVar11 = FUN_00dae710(lVar9,uVar11 & 0xffffffff);
  lVar7 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar7 + 0x30) +
         (ulong)(uint)((*(int *)(lVar7 + 0x20) - (int)*(long *)(lVar7 + 0x30)) +
                      *(int *)(lVar7 + 0x28))) - (uVar11 & 0xffffffff);
}


