/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142dd50; name: FUN_0142dd50
 */


void FUN_0142dd50(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *apuStack_a0 [13];
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    plVar4 = (long *)FUN_01410b60();
    puVar8 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      do {
        if (plVar3 == plVar4) {
          puVar8 = puVar7 + -10;
          goto LAB_0142ddb0;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      puVar8 = (undefined8 *)0x0;
    }
  }
LAB_0142ddb0:
  uVar5 = FUN_0140ce50(puVar8);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  FUN_00ff86a0(&local_38,puVar7[0xd],0);
  FUN_014160a0(uVar5,&local_38);
  local_c0 = param_2;
  FUN_01416100(uVar5,&local_c0);
  local_c0 = &LAB_0142e230;
  local_b8 = FUN_0142e330;
  local_b0 = &LAB_0142e340;
  local_a8 = &LAB_0142e350;
  apuStack_a0[0] = puVar8;
  FUN_01416b60(uVar5,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(apuStack_a0);
  }
  FUN_01416760(uVar5);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


