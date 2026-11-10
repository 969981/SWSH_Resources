/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b1a40; name: FUN_013b1a40
 */


undefined8 FUN_013b1a40(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char local_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined4 local_80;
  
  if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    plVar4 = (long *)FUN_0132d9a0();
    puVar7 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      do {
        if (plVar3 == plVar4) {
          puVar7 = puVar5 + -10;
          goto LAB_013b1ab8;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      puVar7 = (undefined8 *)0x0;
    }
  }
LAB_013b1ab8:
  puVar5 = (undefined8 *)FUN_012e3520(param_2);
  uVar6 = *puVar5;
  puVar5 = (undefined8 *)FUN_012e3520(param_3);
  FUN_012b8710(local_140,uVar6,*puVar5);
  if (local_140[0] != '\0') {
    FUN_013b1c80(&local_100,param_1,local_138);
    FUN_013b3260(puVar7[0xc],0x91f9ec803b4e9d02,&local_100,0);
    if (local_f0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)((long)local_f0 + 0x48) + 0x18))();
      local_f0 = (undefined1 *)0x0;
    }
    if (local_f8 != (code *)0x0) {
      (**(code **)(*(long *)((long)local_f8 + 0x48) + 0x18))();
    }
    puVar1 = PTR_DAT_02710848;
    local_c8 = local_120;
    local_d0 = local_128;
    uStack_d8 = local_130;
    local_f0 = &LAB_013b3ad0;
    local_100 = &LAB_013b3a40;
    local_f8 = FUN_013b3ac0;
    local_e8 = &LAB_013b3af0;
    local_e0 = param_2;
    lStack_c0 = param_3;
    local_80 = FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    FUN_013b24d0(param_1 + 0x98,&local_100);
    pcVar2 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      local_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar2)(&local_e0);
    }
    local_c8 = local_108;
    local_d0 = local_110;
    local_100 = &LAB_013b3a40;
    local_f8 = FUN_013b3ac0;
    local_f0 = &LAB_013b3ad0;
    local_e8 = &LAB_013b3af0;
    uStack_d8 = local_118;
    local_e0 = param_3;
    lStack_c0 = param_2;
    local_80 = FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar1 + 0x98));
    FUN_013b24d0(param_1 + 0x98,&local_100);
    pcVar2 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      local_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar2)(&local_e0);
    }
  }
  return 0;
}


