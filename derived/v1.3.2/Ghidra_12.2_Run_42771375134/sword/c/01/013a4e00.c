/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a4e00; name: FUN_013a4e00
 */


void FUN_013a4e00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  uVar6 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  FUN_01021900(uVar6,1);
  FUN_01021900(uVar6,2);
  FUN_013a5170(&local_28);
  uVar7 = FUN_0130a600(local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_01381490(*(undefined8 *)(param_1 + 0x460),&local_28);
    FUN_012dc480(uVar6,1);
    uVar6 = FUN_01392ce0(*(undefined8 *)(param_1 + 0x468),&local_28);
    FUN_012dc480(uVar6,1);
    uVar6 = FUN_01392f90(*(undefined8 *)(param_1 + 0x468),&local_28);
    FUN_012dc480(uVar6,1);
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 == (undefined8 *)0x0))
    {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)*puVar11)(puVar11);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), iVar5 != 0)) {
        uVar6 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar6;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      puVar9 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        do {
          if (puVar8 == (undefined8 *)PTR_DAT_02715080) {
            puVar9 = puVar11 + -10;
            goto LAB_013a4efc;
          }
          puVar8 = (undefined8 *)*puVar8;
        } while (puVar8 != (undefined8 *)0x0);
        puVar9 = (undefined8 *)0x0;
      }
    }
LAB_013a4efc:
    FUN_013932b0(puVar9,&local_28);
    FUN_0138cbb0();
  }
  local_48 = 0x3d911cf069964b05;
  local_40 = "StartCooking";
  local_38 = 0xc;
  local_30 = 0;
  FUN_0138fa60(param_1,&local_48);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  pcVar10 = *(code **)(param_1 + 0x88);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar10)(param_1 + 0xa0);
  }
  puVar1 = PTR_LAB_02728de0;
  *(long *)(param_1 + 0xa0) = param_1;
  puVar3 = PTR_LAB_02728df0;
  puVar2 = PTR_LAB_02728de8;
  *(undefined8 *)(param_1 + 0xa8) = 0xf8;
  *(undefined8 *)(param_1 + 0xb0) = 1;
  puVar4 = PTR_LAB_02728df8;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar2;
  *(undefined **)(param_1 + 0x90) = puVar3;
  *(undefined **)(param_1 + 0x98) = puVar4;
  return;
}


