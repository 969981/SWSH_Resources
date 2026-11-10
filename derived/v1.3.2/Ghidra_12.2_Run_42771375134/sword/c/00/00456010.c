/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00456010; name: FUN_00456010
 */


/* WARNING: Removing unreachable block (ram,0x004560b4) */

void FUN_00456010(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long *local_50;
  undefined1 local_48;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02713030);
  puVar5 = PTR_DAT_02713038;
  puVar4 = PTR_DAT_02712a90;
  if ((*(byte *)((long)param_1 + 0x164) >> 6 & 1) != 0) goto LAB_0045618c;
  uVar2 = *(uint *)(PTR_DAT_02713038 + 8);
  uVar10 = *(uint *)(PTR_DAT_02713038 + 0xc);
  if (uVar10 <= uVar2) {
    uVar10 = uVar10 + 1;
    puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 3);
    if (puVar7 == (undefined8 *)0x0) goto LAB_0045618c;
    puVar8 = *(undefined8 **)puVar5;
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
      uVar3 = *(uint *)(puVar5 + 8);
      if (uVar3 != 0) {
        *puVar7 = *puVar8;
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            lVar9 = 1;
          }
          else {
            lVar6 = 0;
            do {
              lVar9 = lVar6;
              puVar7[lVar9 + 1] = *(undefined8 *)(*(long *)puVar5 + lVar9 * 8 + 8);
              puVar7[lVar9 + 2] = *(undefined8 *)(*(long *)puVar5 + lVar9 * 8 + 0x10);
              lVar6 = lVar9 + 2;
            } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar9 + 2);
            lVar9 = lVar9 + 3;
            if ((~uVar3 & 1) == 0) goto LAB_00456110;
          }
          puVar7[lVar9] = *(undefined8 *)(*(long *)puVar5 + lVar9 * 8);
        }
LAB_00456110:
        puVar8 = *(undefined8 **)puVar5;
      }
      FUN_00404870(*(undefined4 *)puVar4,puVar8);
    }
    *(undefined8 **)puVar5 = puVar7;
    *(uint *)(puVar5 + 0xc) = uVar10;
  }
  if (uVar2 < uVar10) {
    plVar1 = (long *)(*(long *)puVar5 + (ulong)*(uint *)(puVar5 + 8) * 8);
    *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) + 1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)param_1;
      *(byte *)((long)param_1 + 0x164) = *(byte *)((long)param_1 + 0x164) | 0x40;
      if (*PTR_DAT_02713040 != '\0') {
        local_48 = 1;
        local_50 = param_1;
        (**(code **)(*param_1 + 200))(0,param_1,&local_50,1);
      }
    }
  }
LAB_0045618c:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02713030);
  return;
}


