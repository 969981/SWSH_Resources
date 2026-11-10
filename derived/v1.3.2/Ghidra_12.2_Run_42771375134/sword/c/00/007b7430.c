/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b7430; name: FUN_007b7430
 */


undefined8 FUN_007b7430(long *param_1,ulong param_2)

{
  size_t sVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long *local_f0;
  long local_e8;
  undefined2 local_e0;
  ushort uStack_de;
  undefined4 uStack_dc;
  undefined1 local_d8;
  char acStack_d4 [4];
  char acStack_d0 [4];
  char acStack_cc [8];
  char local_c4 [20];
  undefined1 local_b0;
  undefined1 local_9c;
  undefined1 local_88;
  undefined1 local_74;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined2 local_58;
  undefined1 auStack_48 [8];
  
  puVar3 = (undefined8 *)param_1[0x12];
  local_e0 = 0;
  uStack_dc = 0;
  lVar4 = 0;
  cVar5 = '\0';
  local_e8 = 0;
  local_d8 = 0;
  local_c4[0] = '\0';
  local_b0 = 0;
  local_9c = 0;
  local_88 = 0;
  local_74 = 0;
  local_60 = 0;
  local_58 = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = (ulong)uStack_de << 0x10;
  plVar6 = param_1;
  if ((char)param_1[0x40] != '\0') goto LAB_007b74cc;
  do {
    lVar7 = lVar4;
    if (cVar5 != '\0') {
      *(undefined4 *)((long)plVar6 + 0x204) = *(undefined4 *)(acStack_d0 + lVar4 + -4);
      *(undefined1 *)(plVar6 + 0x41) = 0;
      if (acStack_d0[lVar4] != '\0') {
        *(undefined8 *)((long)plVar6 + 0x20c) = *(undefined8 *)(acStack_d0 + lVar4 + 4);
        *(undefined1 *)(plVar6 + 0x41) = 1;
      }
      *(undefined1 *)(plVar6 + 0x40) = 1;
    }
    while( true ) {
      if (lVar7 == 100) {
        param_1[0x4f] = (ulong)uStack_5f << 8;
        *(undefined2 *)(param_1 + 0x3f) = 0xffff;
        *(undefined2 *)(param_1 + 0x50) = 0;
        if (param_1[0x13] == 0) {
          param_1[0x13] = 0;
          param_1[0x1f] = 0;
          FUN_007b7810(param_1,param_1 + 0x2c);
          if (param_1[0x13] == 0) {
            return 1;
          }
          while( true ) {
            plVar6 = (long *)param_1[0x12];
            *(undefined1 *)((long)param_1 + 0x4f6) = 0;
            *(undefined4 *)((long)param_1 + 0x4f1) = 0;
            *(long **)(*plVar6 + 8) = param_1;
            uVar2 = (**(code **)(*(long *)*plVar6 + 0x20))();
            if ((uVar2 & 1) == 0) break;
            lVar4 = param_1[0x13];
            sVar1 = (param_1[0x12] + lVar4 * 8) - (long)(plVar6 + 1);
            if (sVar1 != 0) {
              memmove(plVar6,plVar6 + 1,sVar1);
              lVar4 = param_1[0x13];
            }
            param_1[0x13] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              return 1;
            }
          }
        }
        else {
          plVar6 = (long *)*puVar3;
          local_f0 = plVar6;
          uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
          auVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
          param_1[0x13] = 0;
          param_1[0x1f] = 0;
          if ((char)param_1[0x81] != '\0') {
            *(undefined1 *)(param_1 + 0x81) = 0;
          }
          param_1[0x84] = 0;
          if ((uVar2 & 1) == 0) {
            if (param_1[0x14] == 0) {
              local_e8 = param_1[0x12];
              FUN_007ba040(auStack_48,param_1 + 10,&local_e8,1,&local_f0);
            }
            else {
              puVar3 = (undefined8 *)param_1[0x12];
              lVar7 = param_1[10];
              lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar7;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
              *puVar3 = local_f0;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
              param_1[0x13] = param_1[0x13] + 1;
            }
          }
          if ((auVar8._0_8_ & 0xff) != 0) {
            FUN_007b7810(param_1,auVar8._8_8_);
          }
          (**(code **)(*param_1 + 0xd0))(param_1);
          if ((param_2 & 1) == 0) {
            FUN_007b7810(param_1,param_1 + 0x2c);
          }
          else {
            FUN_007b7810(param_1,param_1 + 0x2e);
          }
          if ((uVar2 & 1) == 0) {
            return 1;
          }
          if (param_1[0x13] == 0) {
            return 1;
          }
          while( true ) {
            plVar6 = (long *)param_1[0x12];
            *(undefined1 *)((long)param_1 + 0x4f6) = 0;
            *(undefined4 *)((long)param_1 + 0x4f1) = 0;
            *(long **)(*plVar6 + 8) = param_1;
            uVar2 = (**(code **)(*(long *)*plVar6 + 0x20))();
            if ((uVar2 & 1) == 0) break;
            lVar4 = param_1[0x13];
            sVar1 = (param_1[0x12] + lVar4 * 8) - (long)(plVar6 + 1);
            if (sVar1 != 0) {
              memmove(plVar6,plVar6 + 1,sVar1);
              lVar4 = param_1[0x13];
            }
            param_1[0x13] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              return 1;
            }
          }
        }
        uVar2 = (*(code *)**(undefined8 **)*plVar6)();
        if ((uVar2 & 1) == 0) {
          param_1[0x13] = 0;
          return 0;
        }
        return 1;
      }
      lVar4 = lVar7 + 0x14;
      cVar5 = local_c4[lVar7];
      plVar6 = (long *)((long)param_1 + lVar4);
      if ((char)plVar6[0x40] == '\0') break;
LAB_007b74cc:
      lVar7 = lVar4;
      if (cVar5 == '\0') {
        if ((char)plVar6[0x41] != '\0') {
          *(undefined1 *)(plVar6 + 0x41) = 0;
        }
        *(undefined1 *)(plVar6 + 0x40) = 0;
      }
      else {
        *(undefined4 *)((long)plVar6 + 0x204) = *(undefined4 *)(acStack_d0 + lVar4 + -4);
        if ((char)plVar6[0x41] == '\0') {
          if (acStack_d0[lVar4] != '\0') {
            *(undefined8 *)((long)plVar6 + 0x20c) = *(undefined8 *)(acStack_d0 + lVar4 + 4);
            *(undefined1 *)(plVar6 + 0x41) = 1;
          }
        }
        else if (acStack_d0[lVar4] == '\0') {
          *(undefined1 *)(plVar6 + 0x41) = 0;
        }
        else {
          *(undefined8 *)((long)plVar6 + 0x20c) = *(undefined8 *)(acStack_d0 + lVar4 + 4);
        }
      }
    }
  } while( true );
}


