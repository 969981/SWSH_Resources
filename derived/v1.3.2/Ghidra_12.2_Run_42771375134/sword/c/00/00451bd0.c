/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451bd0; name: FUN_00451bd0
 */


void FUN_00451bd0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 uVar10;
  long *local_30;
  undefined1 local_28;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02713030);
  puVar2 = PTR_DAT_02713038;
  bVar3 = *(byte *)((long)param_1 + 0x164);
  if ((bVar3 >> 6 & 1) != 0) {
    puVar6 = *(undefined8 **)PTR_DAT_02713038;
    uVar5 = *(uint *)(PTR_DAT_02713038 + 8);
    puVar1 = puVar6 + uVar5;
    if (uVar5 != 0) {
      lVar9 = (ulong)uVar5 << 3;
      do {
        if ((long *)*puVar6 == param_1) goto LAB_00451c38;
        lVar9 = lVar9 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0);
      puVar6 = puVar1;
    }
LAB_00451c38:
    if (puVar1 != puVar6) {
      if (1 < uVar5) {
        *puVar6 = puVar1[-1];
        uVar5 = *(uint *)(puVar2 + 8);
        bVar3 = *(byte *)((long)param_1 + 0x164);
      }
      *(uint *)(puVar2 + 8) = uVar5 - 1;
    }
    *(byte *)((long)param_1 + 0x164) = bVar3 & 0xbf;
    local_28 = 1;
    uVar10 = 0x3f800000;
    if ((param_1[10] != 0) && (pbVar7 = *(byte **)(param_1[10] + 0x18), pbVar7 != (byte *)0x0)) {
      uVar4 = 0;
      pbVar8 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
      do {
        if (pbVar7[uVar4 + 1] == 0xb) {
          if (pbVar8 != (byte *)0x0) {
            uVar10 = *(undefined4 *)pbVar8;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        pbVar8 = pbVar8 + 0x10;
      } while (uVar4 < *pbVar7);
    }
    local_30 = param_1;
    (**(code **)(*param_1 + 200))(uVar10,param_1,&local_30,1);
    if ((*(int *)(puVar2 + 8) == 0) && (*(long *)puVar2 != 0)) {
      *(undefined4 *)(puVar2 + 8) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *(undefined8 *)puVar2 = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
    }
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02713030);
  return;
}


