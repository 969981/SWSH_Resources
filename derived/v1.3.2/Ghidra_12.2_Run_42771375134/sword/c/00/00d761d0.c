/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d761d0; name: FUN_00d761d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d761d0(float param_1,float param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  plVar7 = *(long **)(param_3 + 0x100);
  *(undefined1 *)(param_3 + 0x184) = 0;
  *(float *)(param_3 + 0x188) = param_1;
  *(float *)(param_3 + 0x18c) = param_2;
  if (plVar7 == (long *)0x0) {
    puVar9 = (undefined8 *)(*(long *)(_DAT_000001a8 + 0xa0) + 0xf0);
  }
  else {
    lVar8 = plVar7[0xb];
    if (*(long *)(lVar8 + 0x58) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x60))();
      *(undefined8 *)(lVar8 + 0x58) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar9 = (undefined8 *)(*(long *)(plVar7[0x35] + 0xa0) + 0xf0);
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  param_1 = (float)*puVar9 - param_1;
  param_2 = (float)((ulong)*puVar9 >> 0x20) - param_2;
  param_1 = param_1 * param_1;
  param_2 = param_2 * param_2;
  auVar10._4_4_ = param_2;
  auVar10._0_4_ = param_1;
  auVar10._8_8_ = 0;
  auVar5._4_4_ = param_2;
  auVar5._0_4_ = param_1;
  auVar5._8_8_ = 0;
  auVar10 = NEON_ext(auVar10,auVar5,8,1);
  *(float *)(param_3 + 400) = SQRT(auVar10._0_4_ + param_1 + auVar10._4_4_ + param_2) / 6.0;
  return;
}


