/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f65b0; name: FUN_014f65b0
 */


void FUN_014f65b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long local_48;
  long local_40;
  long local_38;
  
  FUN_0106bfd0(&local_38,*(undefined8 *)(param_1 + 0x440),1,0);
  if (*(long *)(param_1 + 0x448) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x448) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x448) = 0;
  }
  *(long *)(param_1 + 0x448) = local_38;
  uVar7 = *param_3;
  local_40 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00702940(uVar7,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  FUN_01051350(&local_38,param_2,*(undefined8 *)(param_1 + 0x440),PTR_DAT_02719520);
  plVar5 = *(long **)(param_1 + 0x450);
  if (plVar5 != (long *)0x0) {
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
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x450) = 0;
  }
  *(long *)(param_1 + 0x450) = local_38;
  *(undefined1 *)(*(long *)(*(long *)(local_38 + 0x1a8) + 0xa0) + 0xd8) = 1;
  FUN_0070cf00(*(undefined8 *)(param_1 + 0x450),*param_3);
  *(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x450) + 0x1a8) + 0xa0) + 0xd0) =
       *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0 +
       *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
  lVar6 = FUN_00ad95d0(&local_38,*(undefined8 *)(param_1 + 0x440));
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x458) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x458) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x458) = 0;
  }
  *(long *)(param_1 + 0x458) = lVar6;
  local_48 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  }
  FUN_01025970(&local_48,param_2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


