/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9b5c0; name: FUN_00e9b5c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e9b5c0(long *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  
  plVar5 = (long *)param_1[0x3e];
  *(undefined1 *)(param_1 + 0xbd) = 0;
  plVar1 = (long *)param_1[0x3d];
  do {
    if (plVar1 == plVar5) {
      return;
    }
    lVar7 = *plVar1;
    uVar4 = FUN_00df2390(lVar7 + 0x50);
    plVar1 = plVar1 + 1;
  } while ((uVar4 & 1) == 0);
  uVar4 = FUN_00de7f70(lVar7);
  if ((((uVar4 & 1) != 0) && (*(long *)(param_1[0xbc] + 0x80) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1[0xbc] + 0x80) + 0x60), puVar8 != (undefined8 *)0x0
     )) {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02715280), iVar3 != 0)) {
      uVar6 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715288 = uVar6;
      __cxa_guard_release(PTR_DAT_02715280);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02715288) {
        if (puVar8[0x22] == 0) {
          return;
        }
        fVar9 = (float)(**(code **)(*param_1 + 0x178))(0,param_1,PTR_DAT_0271e870);
        if (fVar9 < 1.0) {
          return;
        }
        bVar2 = FUN_00e9e690(param_1);
        *(byte *)(param_1 + 0xbd) = bVar2 & 1;
        return;
      }
    }
  }
  return;
}


