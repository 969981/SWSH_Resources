/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442840; name: FUN_00442840
 */


void FUN_00442840(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if (((*(byte *)(param_2 + 0x78) >> 2 & 1) != 0) && (*(long *)(param_2 + 0x30) != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x48));
    puVar6 = PTR_DAT_02712b90;
    puVar5 = PTR_DAT_02712a90;
    if (*(int *)(param_2 + 0x48) != 0) {
      uVar9 = 0;
LAB_004428a0:
      do {
        uVar3 = *(uint *)(*(long *)(param_2 + 0x30) + uVar9 * 0xc);
        if ((uVar3 != 0) && (uVar1 = *(uint *)(param_1 + 0x78), uVar1 != 0)) {
          uVar4 = 0;
          if (uVar1 != 0) {
            uVar4 = uVar3 / uVar1;
          }
          uVar1 = uVar3 - uVar4 * uVar1;
          puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8);
          if (puVar8 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)0x0;
LAB_004428f8:
            if ((puVar8 != (undefined8 *)0x0) &&
               (iVar2 = *(int *)(puVar8 + 6), *(int *)(puVar8 + 6) = iVar2 + -1, iVar2 + -1 == 0)) {
              if (puVar8[2] != 0) {
                FUN_004047f0(*(undefined4 *)(puVar6 + 0x18));
                puVar8[2] = 0;
                *(undefined4 *)(puVar8 + 3) = 0;
                if (*(int *)(puVar8 + 6) != 0) goto LAB_0044292c;
              }
              if (puVar10 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8);
              }
              *puVar10 = *puVar8;
              if (puVar8[4] != 0) {
                *(undefined4 *)(puVar8 + 5) = 0;
                FUN_00404870(*(undefined4 *)puVar5);
                puVar8[4] = 0;
                *(undefined4 *)((long)puVar8 + 0x2c) = 0;
              }
              FUN_00404870(*(undefined4 *)puVar5,puVar8);
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
              uVar9 = uVar9 + 1;
              if (*(uint *)(param_2 + 0x48) <= uVar9) break;
              goto LAB_004428a0;
            }
          }
          else {
            puVar7 = puVar8;
            puVar10 = (undefined8 *)0x0;
            do {
              puVar8 = puVar7;
              if (*(uint *)(puVar8 + 1) == uVar3) goto LAB_004428f8;
              puVar7 = (undefined8 *)*puVar8;
              puVar10 = puVar8;
            } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
          }
        }
LAB_0044292c:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_2 + 0x48));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
    *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfb;
  }
  return;
}


