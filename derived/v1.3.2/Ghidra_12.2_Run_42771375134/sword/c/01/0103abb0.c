/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103abb0; name: FUN_0103abb0
 */


void FUN_0103abb0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined8 local_38;
  
  puVar2 = PTR_DAT_02710860;
  plVar7 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_0077d050(lVar4,0x400);
    *(long **)(lVar4 + 8) = plVar7;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x6b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x6b0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    *(long *)(param_1 + 0x6b0) = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      lVar1 = param_1 + 0x100;
      FUN_0077d050(lVar4,0x100);
      *(long **)(lVar4 + 8) = plVar7;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x6b8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x6b8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x6b8) = 0;
      }
      *(long *)(param_1 + 0x6b8) = lVar4;
      FUN_0103b0a0(param_1 + 0x660,lVar1);
      FUN_00ffd010(lVar1,&DAT_02162c98);
      uVar5 = FUN_00ffdbc0(lVar1,0x46da40c0c64234a7);
      *(undefined8 *)(param_1 + 0x6c0) = uVar5;
      uVar5 = FUN_00ffdbc0(lVar1,0x7c25ea169d404f58);
      *(undefined8 *)(param_1 + 0x6c8) = uVar5;
      uVar5 = FUN_00ffdbc0(lVar1,0x976fcec841e82cb8);
      *(undefined8 *)(param_1 + 0x6d0) = uVar5;
      uVar5 = FUN_00ffdbc0(lVar1,0xe51c7a403e244796);
      *(undefined8 *)(param_1 + 0x6d8) = uVar5;
      *(undefined8 *)(*(long *)(param_1 + 0x6c0) + 0xf8) = 0x80000000;
      *(undefined8 *)(*(long *)(param_1 + 0x6c8) + 0xf8) = 0x20000000;
      *(undefined8 *)(*(long *)(param_1 + 0x6d0) + 0xf8) = 0x2000400000000;
      *(undefined8 *)(*(long *)(param_1 + 0x6d8) + 0xf8) = 0x1000000000000;
      lVar3 = *(long *)(param_1 + 0x6c0);
      pcVar6 = *(code **)(lVar3 + 0x158);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x160) = 0;
        *(undefined8 *)(lVar3 + 0x168) = 0;
        *(undefined8 *)(lVar3 + 0x150) = 0;
        *(undefined8 *)(lVar3 + 0x158) = 0;
        (*pcVar6)(lVar3 + 0x170);
      }
      *(long *)(lVar3 + 0x170) = param_1;
      *(undefined8 *)(lVar3 + 0x150) = &LAB_0103be60;
      *(undefined1 **)(lVar3 + 0x158) = &LAB_0103bec0;
      *(undefined1 **)(lVar3 + 0x160) = &LAB_0103bed0;
      *(undefined1 **)(lVar3 + 0x168) = &LAB_0103bee0;
      lVar3 = *(long *)(param_1 + 0x6c8);
      pcVar6 = *(code **)(lVar3 + 0x158);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x160) = 0;
        *(undefined8 *)(lVar3 + 0x168) = 0;
        *(undefined8 *)(lVar3 + 0x150) = 0;
        *(undefined8 *)(lVar3 + 0x158) = 0;
        (*pcVar6)(lVar3 + 0x170);
      }
      *(long *)(lVar3 + 0x170) = param_1;
      *(undefined8 *)(lVar3 + 0x150) = &LAB_0103bef0;
      *(undefined1 **)(lVar3 + 0x158) = &LAB_0103bf50;
      *(undefined1 **)(lVar3 + 0x160) = &LAB_0103bf60;
      *(undefined1 **)(lVar3 + 0x168) = &LAB_0103bf70;
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x6c0),0);
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x6c8),0);
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x6d8),0);
      lVar3 = *(long *)(param_1 + 0x6d0);
      local_c0 = (undefined8 *)&LAB_0103bf80;
      local_b8 = FUN_0103bfb0;
      local_b0 = FUN_0103bfc0;
      local_a8 = &LAB_0103bfd0;
      pcVar6 = *(code **)(lVar3 + 0x158);
      alStack_a0[0] = param_1;
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x160) = 0;
        *(undefined8 *)(lVar3 + 0x168) = 0;
        *(undefined8 *)(lVar3 + 0x150) = 0;
        *(undefined8 *)(lVar3 + 0x158) = 0;
        (*pcVar6)(lVar3 + 0x170);
      }
      FUN_0103bfc0(alStack_a0,lVar3 + 0x170);
      pcVar6 = local_b8;
      *(undefined1 **)(lVar3 + 0x168) = local_a8;
      *(undefined8 *)(lVar3 + 0x150) = local_c0;
      *(code **)(lVar3 + 0x158) = local_b8;
      *(code **)(lVar3 + 0x160) = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = (code *)0x0;
        local_a8 = (undefined1 *)0x0;
        local_c0 = (undefined8 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar6)(alStack_a0);
      }
      *(undefined1 *)(*(long *)(param_1 + 0x6c0) + 0x141) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x6c8) + 0x141) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x6d8) + 0x141) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x6d0) + 0x141) = 1;
      if (*(long *)(param_1 + 0x6d0) != 0) {
        FUN_016b2d70(*(long *)(param_1 + 0x6d0),*(char *)(param_1 + 0x5cb) != '\x02');
      }
      if ((*(long *)(param_1 + 0x4c0) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar3 == 0)) {
        uVar5 = 0;
      }
      else {
        plVar7 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        local_c0 = &local_38;
        local_38 = 0;
        local_b8 = (code *)0x8303e0e1fa38a8d1;
        FUN_01037340(lVar3,&local_c0,0);
        uVar5 = local_38;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
      }
      *(undefined8 *)(param_1 + 0x6e0) = uVar5;
      FUN_016b2d70(uVar5,0);
      FUN_0103b260(param_1);
      FUN_00ffa290(param_1,1,1);
      lVar3 = *(long *)(param_1 + 0x6a8);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


