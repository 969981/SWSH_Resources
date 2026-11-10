/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003df7d0; name: FUN_003df7d0
 */


void FUN_003df7d0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar2 = DAT_01d4c464;
  if (*(int *)(param_1 + 0x1180) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x1178) + lVar6);
      uVar8 = *(uint *)(param_1 + 0x1190) & 0x7fffffff;
      uVar3 = *(uint *)(plVar1 + 2) >> 5;
      if (uVar3 < uVar8) {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x1188) + (ulong)uVar3 * 4) &
                1 << (ulong)(*(uint *)(plVar1 + 2) & 0x1f);
        uVar4 = *(uint *)((long)plVar1 + 0x14);
        uVar5 = uVar4 >> 5;
        if (uVar5 < uVar8) goto LAB_003df878;
LAB_003df84c:
        uVar8 = 0;
        if (uVar3 == 0) goto LAB_003df894;
LAB_003df858:
        if (uVar3 == 0) {
          FUN_003c00a0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x1178) + lVar6));
        }
        if (uVar8 == 0) {
LAB_003df8d8:
          FUN_003c00a0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x1178) + lVar6 + 8));
        }
      }
      else {
        uVar3 = 0;
        uVar4 = *(uint *)((long)plVar1 + 0x14);
        uVar5 = uVar4 >> 5;
        if (uVar8 <= uVar5) goto LAB_003df84c;
LAB_003df878:
        uVar8 = *(uint *)(*(long *)(param_1 + 0x1188) + (ulong)uVar5 * 4) &
                1 << (ulong)(uVar4 & 0x1f);
        if (uVar8 != 0 || uVar3 != 0) goto LAB_003df858;
LAB_003df894:
        if (0xfffffffd < *(uint *)(*plVar1 + 0xb8)) {
          if (0xfffffffd < *(uint *)(plVar1[1] + 0xb8)) goto LAB_003df8ec;
LAB_003df8d0:
          FUN_003c00a0(uVar2);
          goto LAB_003df8d8;
        }
        if (0xfffffffd < *(uint *)(plVar1[1] + 0xb8)) goto LAB_003df8d0;
      }
LAB_003df8ec:
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < *(uint *)(param_1 + 0x1180));
  }
  *(undefined4 *)(param_1 + 0x1180) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x1188),0,(ulong)(uint)(*(int *)(param_1 + 0x1190) << 2));
}


