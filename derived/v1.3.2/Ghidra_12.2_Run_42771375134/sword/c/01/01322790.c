/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322790; name: FUN_01322790
 */


void FUN_01322790(long param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_4;
  *(undefined8 *)(param_1 + 200) = 0;
  lVar9 = *param_2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x58);
    if (*(long *)(lVar10 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x60))();
      *(undefined8 *)(lVar10 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar9;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0x54);
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
      *(undefined8 *)(lVar9 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar6 = PTR_DAT_02715420;
  puVar5 = PTR_DAT_027152c0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  uVar7 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  uVar7 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x108) = uVar7;
  return;
}


