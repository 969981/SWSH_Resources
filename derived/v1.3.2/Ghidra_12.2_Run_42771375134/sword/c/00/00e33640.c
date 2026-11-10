/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e33640; name: FUN_00e33640
 */


void FUN_00e33640(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  puVar1 = PTR_DAT_02710798;
  if (*(int *)(param_1 + 0x68) == 0) {
    bVar4 = FUN_0153d710(*(undefined8 *)PTR_DAT_02710798);
    *(byte *)(param_1 + 0x84) = bVar4 & 1;
    plVar7 = *(long **)(*(long *)PTR_DAT_0271e860 + 0x28);
    uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0xc,4);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_01562e10(uVar5,2);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    if (lVar6 != 0) {
      FUN_01562e20(lVar6);
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
                (*(long **)(param_1 + 0x50),lVar6,*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60));
    }
    puVar2 = PTR_DAT_02710838;
    *(long **)(param_1 + 0x50) = plVar7;
    *(undefined8 *)(param_1 + 0x58) = 0xc;
    *(undefined8 *)(param_1 + 0x60) = 4;
    local_c0 = &LAB_00e33cb0;
    local_b8 = FUN_00e33d00;
    local_b0 = &LAB_00e33d10;
    local_a8 = &LAB_00e33d20;
    alStack_a0[0] = param_1;
    FUN_01028800(*(undefined8 *)puVar2,&local_c0);
    pcVar3 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar3)(alStack_a0);
    }
    if (*(char *)(param_1 + 0x84) == '\0') {
      lVar6 = *(long *)(*(long *)puVar1 + 0x298);
      if (lVar6 == 0) {
        FUN_015297e0(0);
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_015297e0(lVar6);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    FUN_01562e70(*(undefined8 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  return;
}


