/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010384f0; name: FUN_010384f0
 */


void FUN_010384f0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  if (*(long *)(param_1 + 0x5e0) == 0) {
    plVar5 = *(long **)(param_1 + 8);
    local_d0 = &LAB_01038800;
    local_c8 = FUN_01038810;
    local_c0 = &LAB_01038820;
    local_b8 = &LAB_01038830;
    alStack_b0[0] = param_1;
    plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x110,0x10);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    puVar1 = PTR_DAT_027193d8;
    plVar3[2] = param_1 + 0x100;
    plVar3[0x1d] = 0;
    *(undefined1 *)(plVar3 + 0xb) = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    *(undefined4 *)((long)plVar3 + 0x7c) = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *(undefined4 *)(plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x74) = 0;
    *(undefined8 *)((long)plVar3 + 0x6c) = 0;
    *(undefined8 *)((long)plVar3 + 100) = 0;
    *(undefined8 *)((long)plVar3 + 0x5c) = 0;
    *(undefined4 *)(plVar3 + 0x1e) = 4;
    *(undefined4 *)((long)plVar3 + 0xf6) = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = param_1;
    *(undefined1 *)((long)plVar3 + 0xf4) = 1;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    puVar6 = *(undefined8 **)(param_1 + 0x5e0);
    *(long **)(param_1 + 0x5e0) = plVar3;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(**(long **)(param_1 + 0x5e8) + 0x18))
                (*(long **)(param_1 + 0x5e8),puVar6,*(undefined8 *)(param_1 + 0x5f0),
                 *(undefined8 *)(param_1 + 0x5f8));
      plVar3 = *(long **)(param_1 + 0x5e0);
    }
    *(long **)(param_1 + 0x5e8) = plVar5;
    *(undefined8 *)(param_1 + 0x5f0) = 0x110;
    *(undefined8 *)(param_1 + 0x5f8) = 0x10;
    FUN_01039090(plVar3,&local_d0);
    pcVar2 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar2)(alStack_b0);
    }
  }
  return;
}


