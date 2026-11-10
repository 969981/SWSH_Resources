/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b870; name: FUN_0040b870
 */


void FUN_0040b870(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  int local_60 [2];
  undefined1 local_58;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0x5a) & 1) == 0)) ||
     ((*(byte *)(param_1 + 0x44) >> 2 & 1) != 0)) {
    plVar7 = (long *)(param_1 + 0x10);
    lVar6 = *plVar7;
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
    puVar4 = PTR_DAT_02712a90;
    puVar3 = PTR_DAT_02712a60;
    if (lVar6 != 0) {
      do {
        if (*(int *)(lVar6 + 8) == 1) {
          FUN_00406d20(*(undefined8 *)puVar3,*(undefined8 *)(lVar6 + 0x10));
        }
        lVar5 = *(long *)(lVar6 + 0x18);
        plVar2 = plVar7;
        if (*plVar7 != lVar6) {
          plVar2 = (long *)&SUB_00000018;
        }
        *plVar2 = lVar5;
        FUN_00404870(*(undefined4 *)puVar4,lVar6);
        lVar6 = lVar5;
      } while (lVar5 != 0);
      lVar5 = *(long *)(param_1 + 0x18);
    }
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x80) = 0;
      lVar5 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (lVar5 != 0) {
        FUN_00408b50();
        return;
      }
    }
  }
  else {
    dVar8 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
    uVar1 = (*(int *)(param_1 + 0x24) - *(int *)(lVar5 + 0x90)) +
            ((param_2 - *(int *)(param_1 + 8)) - *(int *)(param_1 + 0x24));
    dVar8 = ((double)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * DAT_01cd51e8) / dVar8;
    dVar9 = 0.5;
    if (dVar8 <= 0.0) {
      dVar9 = -0.5;
    }
    local_60[0] = (int)(dVar9 + dVar8);
    local_58 = 0;
    local_60[1] = 4;
    FUN_00409300(lVar5,local_60,0xffffffff);
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 4;
  }
  return;
}


