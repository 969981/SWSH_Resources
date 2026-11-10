/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00475080; name: FUN_00475080
 */


void FUN_00475080(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_02712a90;
  lVar6 = *param_3;
  uVar1 = *(uint *)(lVar6 + 0x20);
  uVar7 = *(uint *)(lVar6 + 0x24);
  if (uVar1 < uVar7) {
LAB_00475148:
    if (uVar1 < uVar7) {
      uVar7 = *(uint *)(lVar6 + 0x20);
      *(uint *)(lVar6 + 0x20) = uVar7 + 1;
      puVar5 = (undefined8 *)(*(long *)(lVar6 + 0x18) + (ulong)uVar7 * 0x38);
      if (puVar5 != (undefined8 *)0x0) {
        lVar3 = *(long *)(lVar6 + 0x18) + (ulong)uVar7 * 0x38;
        *puVar5 = 0;
        *(undefined8 *)(lVar3 + 8) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
      }
      goto LAB_00475194;
    }
  }
  else {
    uVar7 = uVar7 + 1;
    lVar3 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar7 * 0x38,0x10);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar6 + 0x18);
      if (lVar4 != 0 && lVar4 != lVar3) {
        uVar8 = (ulong)*(uint *)(lVar6 + 0x20);
        if (*(uint *)(lVar6 + 0x20) != 0) {
          lVar4 = 0;
          do {
            if ((void *)(lVar3 + lVar4) != (void *)0x0) {
              puVar5 = (undefined8 *)(lVar3 + lVar4);
              *puVar5 = 0;
              puVar5[1] = 0xffffffff;
              *(undefined4 *)(puVar5 + 2) = 0;
              puVar5[5] = 0;
              puVar5[6] = 0;
              puVar5[3] = 0;
              puVar5[4] = 0;
            }
            memcpy((void *)(lVar3 + lVar4),(void *)(*(long *)(lVar6 + 0x18) + lVar4),0x38);
            uVar8 = uVar8 - 1;
            lVar4 = lVar4 + 0x38;
          } while (uVar8 != 0);
          lVar4 = *(long *)(lVar6 + 0x18);
        }
        FUN_004047f0(*(undefined4 *)puVar2,lVar4);
      }
      *(long *)(lVar6 + 0x18) = lVar3;
      *(uint *)(lVar6 + 0x24) = uVar7;
      goto LAB_00475148;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00475194:
  *(undefined8 **)(param_4 + 0x50) = puVar5;
  *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + *(int *)(param_4 + 0x78);
  if (*(int *)(lVar6 + 0x10) == *(int *)(lVar6 + 0x20)) {
    *param_3 = *(long *)*param_3;
  }
  return;
}


