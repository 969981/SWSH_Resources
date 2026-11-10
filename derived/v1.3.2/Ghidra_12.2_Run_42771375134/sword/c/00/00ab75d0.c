/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab75d0; name: FUN_00ab75d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab75d0(long *param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,long *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_60 [16];
  undefined1 auStack_44 [4];
  
  FUN_015f5d10();
  puVar4 = PTR_DAT_027198f0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = param_3;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0x60);
  param_1[10] = (long)(puVar4 + 0xa0);
  *(undefined4 *)(param_1 + 0x13) = param_4;
  lVar7 = *param_7;
  param_1[0x14] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x17) = param_5;
  *(undefined4 *)((long)param_1 + 0xbc) = param_6;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0x1e000000000;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_00a67970(param_1[0x11],(int)param_1[0x13],auStack_60,auStack_44);
  puVar5 = PTR_DAT_02719550;
  puVar4 = PTR_DAT_02719548;
  lVar7 = param_1[0x14];
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar10 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar8 = FUN_00a8c390();
          *(undefined8 *)puVar5 = uVar8;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00ab7764;
          if (plVar9 == (long *)puVar5) break;
          plVar9 = (long *)*plVar9;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ab7764;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 != 0) {
          param_1[0x25] = *(long *)(lVar7 + 0x388);
          param_1[0x24] = *(long *)(lVar7 + 0x380);
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          goto LAB_00ab777c;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ab7764:
  param_1[0x25] = _DAT_000003d8;
  param_1[0x24] = _DAT_000003d0;
LAB_00ab777c:
  uVar11 = *(undefined4 *)((ulong)auStack_60 | 4);
  param_1[0x25] = param_1[0x25];
  param_1[0x24] = CONCAT44(uVar11,(int)param_1[0x24]);
  if (*(int *)((long)param_1 + 0xc4) < (int)param_1[0x17]) {
    *(int *)((long)param_1 + 0xc4) = (int)param_1[0x17] + 100;
  }
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xbf800000;
  return;
}


