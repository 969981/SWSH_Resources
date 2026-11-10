/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e5430; name: FUN_003e5430
 */


void FUN_003e5430(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int local_a0 [28];
  
  lVar1 = *(long *)(param_1 + 0x738);
  if (lVar1 != 0) {
    uVar3 = (ulong)*(uint *)(lVar1 + 0x130);
    if (*(uint *)(lVar1 + 0x130) != 0) {
      plVar4 = *(long **)(lVar1 + 0x128);
      do {
        (**(code **)(**(long **)(param_1 + 0x760) + 0x30))
                  (*(long **)(param_1 + 0x760),*plVar4,*(uint *)(*plVar4 + 0x50) >> 6);
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
      lVar1 = *(long *)(param_1 + 0x738);
    }
    *(undefined4 *)(lVar1 + 0x130) = 0;
  }
  if (*(long *)(param_1 + 0x1ee0) != 0) {
    FUN_00111d30(*(undefined8 *)(param_1 + 0x720));
    *(undefined8 *)(param_1 + 0x1ee0) = 0;
  }
  FUN_003e5650(param_1);
  iVar2 = *(int *)(param_1 + 0x99c);
  if (iVar2 != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x970) + (ulong)(iVar2 - 1) * 8);
    do {
      FUN_003c5760(*puVar5);
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + -1;
    } while (iVar2 != 0);
  }
  lVar6 = *(long *)(param_1 + 0x1128);
  lVar1 = lVar6;
  if (*(int *)(lVar6 + 0x38) != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        while (local_a0[0] = *(int *)(*(long *)(lVar6 + 0x30) + uVar3 * 4),
              *(int *)(lVar6 + 8) + -1 == local_a0[0]) {
          *(int *)(lVar6 + 8) = local_a0[0];
          uVar3 = uVar3 + 1;
          if (*(uint *)(lVar6 + 0x38) <= uVar3) goto LAB_003e556c;
        }
        if ((*(uint *)(lVar6 + 0x1c) & 0x7fffffff) <= *(uint *)(lVar6 + 0x18)) break;
        *(int *)(*(long *)(lVar6 + 0x10) + (ulong)*(uint *)(lVar6 + 0x18) * 4) = local_a0[0];
        *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
        uVar3 = uVar3 + 1;
        if (*(uint *)(lVar6 + 0x38) <= uVar3) goto LAB_003e556c;
      }
      FUN_001b4230(lVar6 + 0x10,local_a0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(lVar6 + 0x38));
LAB_003e556c:
    lVar1 = *(long *)(param_1 + 0x1128);
  }
  *(undefined4 *)(lVar6 + 0x38) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(lVar1 + 0x20),0,(ulong)(uint)(*(int *)(lVar1 + 0x28) << 2));
}


