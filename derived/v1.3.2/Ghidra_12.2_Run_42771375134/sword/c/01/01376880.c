/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01376880; name: FUN_01376880
 */


void FUN_01376880(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  local_40 = 0;
  local_b0 = 0xcbf29ce484222645;
  local_a8 = &DAT_01d38550;
  uStack_a0 = 0;
  local_34 = 0;
  local_3c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0;
  uStack_90 = 0x4180000000000000;
  local_88 = CONCAT44((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                      DAT_01d4c2bc,0x49127c00);
  local_80 = 0;
  local_60 = *(undefined8 *)PTR_DAT_02715a50;
  uStack_58 = *(undefined8 *)(PTR_DAT_02715a50 + 8);
  local_78 = 0;
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  lVar6 = FUN_0132d9a0();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  plVar5 = (long *)puVar8[0x60];
  if (plVar5 == (long *)0x0) {
    FUN_0070c4f0(0,&local_b0);
  }
  else {
    lVar6 = plVar5[0xb];
    if (*(long *)(lVar6 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x60))();
      *(undefined8 *)(lVar6 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0070c4f0(plVar5,&local_b0);
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
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
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  return;
}


