/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a6510; name: FUN_008a6510
 */


void FUN_008a6510(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long alStack_338 [5];
  int aiStack_310 [4];
  undefined1 auStack_300 [48];
  undefined4 local_2d0;
  undefined1 auStack_2c8 [48];
  undefined4 local_298;
  undefined1 auStack_290 [48];
  undefined4 local_260;
  undefined1 auStack_258 [48];
  undefined4 local_228;
  undefined1 auStack_220 [48];
  undefined4 local_1f0;
  undefined1 auStack_1e8 [48];
  undefined4 local_1b8;
  undefined1 auStack_1b0 [48];
  undefined4 local_180;
  undefined1 auStack_178 [48];
  undefined4 local_148;
  undefined1 auStack_140 [48];
  undefined4 local_110;
  undefined1 auStack_108 [48];
  undefined4 local_d8;
  undefined1 auStack_d0 [48];
  undefined4 local_a0;
  undefined1 local_98 [48];
  int aiStack_68 [2];
  
  piVar7 = aiStack_310 + 2;
  aiStack_310[2] = 0;
  FUN_014bb440(auStack_300,&DAT_026168a0);
  local_2d0 = 1;
  FUN_014bb440(auStack_2c8,&DAT_026168a0);
  local_298 = 2;
  FUN_014bb440(auStack_290,&DAT_026168b8);
  local_260 = 3;
  FUN_014bb440(auStack_258,&DAT_026168b8);
  local_228 = 4;
  FUN_014bb440(auStack_220,&DAT_026168d0);
  local_1f0 = 5;
  FUN_014bb440(auStack_1e8,&DAT_026168e8);
  local_1b8 = 6;
  FUN_014bb440(auStack_1b0,&DAT_02616900);
  local_180 = 7;
  FUN_014bb440(auStack_178,&DAT_02616900);
  local_148 = 8;
  FUN_014bb440(auStack_140,&DAT_02616918);
  local_110 = 9;
  FUN_014bb440(auStack_108,&DAT_02616918);
  local_d8 = 10;
  FUN_014bb440(auStack_d0,&DAT_02616930);
  local_a0 = 0xb;
  FUN_014bb440(local_98,&DAT_02616948);
  puVar3 = PTR_DAT_02710860;
  plVar6 = *(long **)(param_1 + 8);
  do {
    iVar2 = *piVar7;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1b0,0x10);
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    plVar1 = (long *)(param_1 + (long)iVar2 * 8 + 200);
    FUN_016a5dd0(lVar5,plVar6);
    *(long **)(lVar5 + 8) = plVar6;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    *plVar1 = lVar5;
    FUN_016a60e0(lVar5,piVar7 + 2,plVar6);
    piVar7 = piVar7 + 0xe;
  } while (piVar7 != aiStack_68);
  lVar4 = 0x2a0;
  do {
    if ((*(long *)((long)alStack_338 + lVar4 + 0x18) != 0) &&
       (*(long *)((long)alStack_338 + lVar4) != 0)) {
      (**(code **)(*(long *)(*(long *)((long)alStack_338 + lVar4) + 0x48) + 0x18))();
      *(undefined8 *)((long)alStack_338 + lVar4) = 0;
    }
    lVar5 = *(long *)((long)alStack_338 + lVar4 + 0x20);
    *(undefined8 *)((long)alStack_338 + lVar4) = 0;
    *(undefined8 *)((long)alStack_338 + lVar4 + 8) = 0xcbf29ce484222645;
    *(undefined1 **)((long)alStack_338 + lVar4 + 0x10) = &DAT_01d38550;
    *(undefined8 *)((long)alStack_338 + lVar4 + 0x18) = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *(undefined8 *)((long)alStack_338 + lVar4 + 0x20) = 0;
    }
    lVar5 = lVar4 + -0x38;
    *(undefined8 *)((long)alStack_338 + lVar4 + 0x20) = 0;
    *(undefined4 *)((long)aiStack_310 + lVar4) = 0;
    lVar4 = lVar5;
  } while (lVar5 != 0);
  return;
}


