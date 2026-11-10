/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138f8a0; name: FUN_0138f8a0
 */


void FUN_0138f8a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_012dc480(param_1,1);
  pcVar8 = *(code **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar8)(param_1 + 0xa0);
  }
  *(long *)(param_1 + 0xa0) = param_1;
  puVar1 = PTR_LAB_02728cb8;
  *(undefined8 *)(param_1 + 0xa8) = 0xf0;
  *(undefined8 *)(param_1 + 0xb0) = 1;
  puVar3 = PTR_LAB_02728cc8;
  puVar2 = PTR_LAB_02728cc0;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar2;
  puVar2 = PTR_LAB_02728cd0;
  puVar1 = PTR_DAT_02710840;
  *(undefined **)(param_1 + 0x90) = puVar3;
  *(undefined **)(param_1 + 0x98) = puVar2;
  *(undefined1 *)(param_1 + 0x500) = 0;
  uVar5 = FUN_0101f850(*(undefined8 *)puVar1);
  FUN_01021900(uVar5,1);
  FUN_01021900(uVar5,2);
  uVar5 = FUN_01381490(*(undefined8 *)(param_1 + 0x460),auStack_38);
  FUN_012dc480(uVar5,1);
  uVar5 = FUN_01392f90(*(undefined8 *)(param_1 + 0x468),auStack_28);
  FUN_012dc480(uVar5,1);
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 == (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715078), iVar4 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if (puVar6 == (undefined8 *)PTR_DAT_02715080) {
          puVar7 = puVar9 + -10;
          goto LAB_0138f9c8;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
      puVar7 = (undefined8 *)0x0;
    }
  }
LAB_0138f9c8:
  FUN_013932b0(puVar7,auStack_30);
  FUN_0138cbb0();
  if (*(code **)(param_1 + 0x520) != (code *)0x0) {
    local_40 = 0x3d911cf069964b05;
    (**(code **)(param_1 + 0x520))(param_1 + 0x540,&local_40);
  }
  return;
}


