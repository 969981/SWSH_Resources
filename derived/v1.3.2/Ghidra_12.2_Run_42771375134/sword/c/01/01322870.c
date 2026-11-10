/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322870; name: FUN_01322870
 */


void FUN_01322870(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 2;
  plVar8 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar7 = PTR_DAT_02715420;
  puVar6 = PTR_DAT_027152c0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  uVar3 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar3 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  return;
}


