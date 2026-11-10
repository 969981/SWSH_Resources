/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efe1e0; name: FUN_00efe1e0
 */


long FUN_00efe1e0(long param_1,undefined4 *param_2)

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
  undefined8 in_stack_ffffffffffffff78;
  uint uVar12;
  ulong uVar11;
  undefined8 in_stack_ffffffffffffff80;
  uint uVar13;
  
  uVar13 = (uint)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  uVar12 = (uint)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar1 = FUN_00e84680(0,0,0,0,0,0,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x78),
                       *(undefined8 *)(param_2 + 4),0,0);
  uVar11 = (ulong)uVar12 << 0x20;
  uVar2 = FUN_00e85210(0,0,0,param_2[1],0,0,0,0,*(undefined8 *)(param_1 + 0x78),*param_2);
  uVar11 = uVar11 & 0xffffffff00000000;
  uVar3 = FUN_00e85210(0,0,0,param_2[2],0,0,0,0,*(undefined8 *)(param_1 + 0x78),*param_2);
  iVar4 = FUN_00e853e0(*(undefined8 *)(param_1 + 0x78),uVar1,*(undefined8 *)(param_2 + 6),
                       *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10),uVar3,0,0,uVar2,
                       uVar11);
  lVar9 = *(long *)(param_1 + 0x78);
  *(undefined1 *)(lVar9 + 0x46) = 1;
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar11 = (*(long *)(lVar9 + 0x20) - lVar7) + *(long *)(lVar9 + 0x28);
  if (iVar4 == 0) goto LAB_00efe424;
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
joined_r0x00efe36c:
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
      goto joined_r0x00efe36c;
    }
  }
  FUN_00f02230(lVar9,4,(4 - iVar4) +
                       (*(int *)(lVar9 + 0x20) - *(int *)(lVar9 + 0x30)) + *(int *)(lVar9 + 0x28),0)
  ;
LAB_00efe424:
  uVar1 = FUN_00dae710(lVar9,uVar11 & 0xffffffff);
  uVar11 = 0;
  uVar2 = FUN_00f01360(0,0,0,0,*(undefined8 *)(param_1 + 0x78),0,0,0,0,0,0,0,0,0);
  uVar3 = FUN_00e855a0(*(undefined8 *)(param_1 + 0x78),0,0,0,0,0xcbf29ce484222645,0,0,
                       0xcbf29ce484222645,uVar11 & 0xffffffff00000000,(ulong)uVar13 << 0x20);
  uVar11 = FUN_00f01930(0x3f800000,*(undefined8 *)(param_1 + 0x78),uVar2,uVar1,param_2[0xc],
                        param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf),param_2[0x10],
                        0xcbf29ce484222645,0xcbf29ce484222645,0xcbf29ce484222645,0,uVar3,0,0,0);
  lVar7 = *(long *)(param_1 + 0x78);
  return (*(long *)(lVar7 + 0x30) +
         (ulong)(uint)((*(int *)(lVar7 + 0x20) - (int)*(long *)(lVar7 + 0x30)) +
                      *(int *)(lVar7 + 0x28))) - (uVar11 & 0xffffffff);
}


